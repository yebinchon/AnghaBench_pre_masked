
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int result; } ;
struct TYPE_5__ {scalar_t__ msg; TYPE_1__ data; int * easy_handle; } ;
typedef TYPE_2__ CURLMsg ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,char**) ;
 char* FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 TYPE_2__* FUNC_7 (int *,int*) ;
 int * FUNC_8 () ;
 int FUNC_9 (int *,int*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ,long) ;
 int FUNC_12 (int *,int *,int ,int,int *) ;
 int FUNC_13 (int ,char*,scalar_t__,...) ;
 int VAR_7 ;

int FUNC_14(void)
{
  CURLM *VAR_8;
  CURLMsg *VAR_9;
  unsigned int VAR_10 = 0;
  int VAR_11 = -1;
  int VAR_12 = 1;

  FUNC_5(VAR_3);
  VAR_8 = FUNC_8();


  FUNC_11(VAR_8, VAR_1, (long)VAR_5);

  for(VAR_10 = 0; VAR_10 < VAR_5; VAR_10++)
    FUNC_0(VAR_8, VAR_10);

  do {
    FUNC_9(VAR_8, &VAR_12);

    while((VAR_9 = FUNC_7(VAR_8, &VAR_11))) {
      if(VAR_9->msg == VAR_2) {
        char *VAR_13;
        CURL *VAR_14 = VAR_9->easy_handle;
        FUNC_2(VAR_9->easy_handle, VAR_0, &VAR_13);
        FUNC_13(VAR_7, "R: %ld - %s <%s>\n",
                VAR_9->data.result, FUNC_3(VAR_9->data.result), VAR_13);
        FUNC_10(VAR_8, VAR_14);
        FUNC_1(VAR_14);
      }
      else {
        FUNC_13(VAR_7, "E: CURLMsg (%ld)\n", VAR_9->msg);
      }
      if(VAR_10 < VAR_6)
        FUNC_0(VAR_8, VAR_10++);
    }
    if(VAR_12)
      FUNC_12(VAR_8, ((void*)0), 0, 1000, ((void*)0));

  } while(VAR_12 || (VAR_10 < VAR_6));

  FUNC_6(VAR_8);
  FUNC_4();

  return VAR_4;
}
