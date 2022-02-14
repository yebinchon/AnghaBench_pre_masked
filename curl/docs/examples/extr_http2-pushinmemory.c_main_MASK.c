
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct CURLMsg {scalar_t__ msg; int * easy_handle; } ;
struct TYPE_2__ {int memory; } ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int* VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 struct CURLMsg* FUNC_4 (int *,int*) ;
 int * FUNC_5 () ;
 scalar_t__ FUNC_6 (int *,int*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int ,int*) ;
 scalar_t__ FUNC_9 (int *,int *,int ,int,int*) ;
 TYPE_1__* VAR_5 ;
 int FUNC_10 (int ) ;
 int VAR_6 ;
 int* VAR_7 ;
 int FUNC_11 (int *) ;

int FUNC_12(void)
{
  CURL *VAR_8;
  CURLM *VAR_9;
  int VAR_10;
  int VAR_11 = 1;
  int VAR_12;
  struct CURLMsg *VAR_13;


  VAR_9 = FUNC_5();

  VAR_8 = FUNC_1();


  FUNC_11(VAR_8);


  FUNC_2(VAR_9, VAR_8);

  FUNC_8(VAR_9, VAR_0, VAR_4);
  FUNC_8(VAR_9, VAR_2, VAR_7);
  FUNC_8(VAR_9, VAR_1, &VAR_11);

  while(VAR_11) {
    int VAR_14;
    CURLMcode VAR_15 = FUNC_6(VAR_9, &VAR_10);
    if(VAR_15)
      break;

    VAR_15 = FUNC_9(VAR_9, ((void*)0), 0, 1000, &VAR_14);
    if(VAR_15)
      break;






    do {
      int VAR_16 = 0;;
      VAR_13 = FUNC_4(VAR_9, &VAR_16);
      if(VAR_13 && (VAR_13->msg == VAR_3)) {
        CURL *VAR_17 = VAR_13->easy_handle;
        VAR_11--;
        FUNC_7(VAR_9, VAR_17);
        FUNC_0(VAR_17);
      }
    } while(VAR_13);

  }


  FUNC_3(VAR_9);


  for(VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {

    FUNC_10(VAR_5[VAR_12].memory);
  }

  return 0;
}
