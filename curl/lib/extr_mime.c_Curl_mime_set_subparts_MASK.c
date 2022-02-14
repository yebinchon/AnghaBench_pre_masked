
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ kind; scalar_t__ easy; int datasize; TYPE_2__* arg; int freefunc; int seekfunc; int readfunc; TYPE_2__* parent; } ;
typedef TYPE_1__ curl_mimepart ;
struct TYPE_7__ {scalar_t__ easy; TYPE_1__* parent; } ;
typedef TYPE_2__ curl_mime ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

CURLcode FUNC_2(curl_mimepart *VAR_7,
                                curl_mime *VAR_8, int VAR_9)
{
  curl_mime *VAR_10;

  if(!VAR_7)
    return VAR_0;


  if(VAR_7->kind == VAR_2 && VAR_7->arg == VAR_8)
    return VAR_1;

  FUNC_0(VAR_7);

  if(VAR_8) {

    if(VAR_7->easy && VAR_8->easy && VAR_7->easy != VAR_8->easy)
      return VAR_0;


    if(VAR_8->parent)
      return VAR_0;


    VAR_10 = VAR_7->parent;
    if(VAR_10) {
      while(VAR_10->parent && VAR_10->parent->parent)
        VAR_10 = VAR_10->parent->parent;
      if(VAR_8 == VAR_10) {
        if(VAR_7->easy)
          FUNC_1(VAR_7->easy, "Can't add itself as a subpart!");
        return VAR_0;
      }
    }

    VAR_8->parent = VAR_7;
    VAR_7->readfunc = VAR_4;
    VAR_7->seekfunc = VAR_5;
    VAR_7->freefunc = VAR_9? VAR_3: VAR_6;
    VAR_7->arg = VAR_8;
    VAR_7->datasize = -1;
    VAR_7->kind = VAR_2;
  }

  return VAR_1;
}
