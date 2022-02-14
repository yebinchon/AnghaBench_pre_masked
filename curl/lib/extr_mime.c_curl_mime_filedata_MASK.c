
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int st_mode; } ;
typedef TYPE_1__ struct_stat ;
struct TYPE_9__ {int datasize; int kind; int freefunc; int readfunc; int seekfunc; int data; } ;
typedef TYPE_2__ curl_mimepart ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (char const*,TYPE_1__) ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (char const*,TYPE_1__*) ;
 int FUNC_7 (char const*) ;
 char* FUNC_8 (char const*) ;

CURLcode FUNC_9(curl_mimepart *VAR_9, const char *VAR_10)
{
  CURLcode VAR_11 = VAR_1;

  if(!VAR_9)
    return VAR_0;

  FUNC_2(VAR_9);

  if(VAR_10) {
    char *VAR_12;
    struct_stat VAR_13;

    if(FUNC_6(VAR_10, &VAR_13) || FUNC_1(VAR_10, VAR_5))
      VAR_11 = VAR_3;

    VAR_9->data = FUNC_7(VAR_10);
    if(!VAR_9->data)
      VAR_11 = VAR_2;

    VAR_9->datasize = -1;
    if(!VAR_11 && FUNC_0(VAR_13.st_mode)) {
      VAR_9->datasize = FUNC_4(VAR_10, VAR_13);
      VAR_9->seekfunc = VAR_8;
    }

    VAR_9->readfunc = VAR_7;
    VAR_9->freefunc = VAR_6;
    VAR_9->kind = VAR_4;





    VAR_12 = FUNC_8(VAR_10);
    if(!VAR_12)
      VAR_11 = VAR_2;
    else {
      CURLcode VAR_14 = FUNC_3(VAR_9, VAR_12);

      if(VAR_14)
        VAR_11 = VAR_14;
      FUNC_5(VAR_12);
    }
  }
  return VAR_11;
}
