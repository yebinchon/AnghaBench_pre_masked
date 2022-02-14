
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* data; size_t datasize; int kind; int freefunc; int seekfunc; int readfunc; } ;
typedef TYPE_1__ curl_mimepart ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_3 (char const*) ;

CURLcode FUNC_4(curl_mimepart *VAR_8,
                        const char *VAR_9, size_t VAR_10)
{
  if(!VAR_8)
    return VAR_0;

  FUNC_0(VAR_8);

  if(VAR_9) {
    if(VAR_10 == VAR_3)
      VAR_10 = FUNC_3(VAR_9);

    VAR_8->data = FUNC_1(VAR_10 + 1);
    if(!VAR_8->data)
      return VAR_2;

    VAR_8->datasize = VAR_10;

    if(VAR_10)
      FUNC_2(VAR_8->data, VAR_9, VAR_10);
    VAR_8->data[VAR_10] = '\0';

    VAR_8->readfunc = VAR_6;
    VAR_8->seekfunc = VAR_7;
    VAR_8->freefunc = VAR_5;
    VAR_8->kind = VAR_4;
  }

  return VAR_1;
}
