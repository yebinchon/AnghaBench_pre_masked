
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct per_transfer {int dummy; } ;
struct GlobalConfig {int dummy; } ;
struct TYPE_4__ {scalar_t__ result; } ;
struct TYPE_5__ {TYPE_1__ data; int * easy_handle; } ;
typedef scalar_t__ CURLcode ;
typedef int CURLSH ;
typedef TYPE_2__ CURLMsg ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct GlobalConfig*,int *,int *,int*,int*) ;
 int VAR_8 ;
 int FUNC_1 (int *,int ,void*) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int *,int*) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int*) ;
 scalar_t__ FUNC_6 (int *,int *,int ,int,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct per_transfer*) ;
 scalar_t__ FUNC_9 (struct GlobalConfig*,struct per_transfer*,scalar_t__,int*) ;
 int FUNC_10 (struct per_transfer*) ;
 int FUNC_11 (struct GlobalConfig*,struct timeval*,int) ;
 struct timeval FUNC_12 () ;

__attribute__((used)) static CURLcode FUNC_13(struct GlobalConfig *VAR_9,
                                   CURLSH *VAR_10)
{
  CURLM *VAR_11;
  CURLMcode VAR_12 = VAR_4;
  CURLcode VAR_13 = VAR_1;
  int VAR_14 = 1;
  struct timeval VAR_15 = FUNC_12();
  bool VAR_16;
  bool VAR_17;

  VAR_11 = FUNC_4();
  if(!VAR_11)
    return VAR_2;

  VAR_13 = FUNC_0(VAR_9, VAR_11, VAR_10,
                                  &VAR_16, &VAR_17);
  if(VAR_13)
    return VAR_13;

  while(!VAR_12 && (VAR_14 || VAR_16)) {
    VAR_12 = FUNC_6(VAR_11, ((void*)0), 0, 1000, ((void*)0));
    if(!VAR_12)
      VAR_12 = FUNC_5(VAR_11, &VAR_14);

    FUNC_11(VAR_9, &VAR_15, VAR_6);

    if(!VAR_12) {
      int VAR_18;
      CURLMsg *VAR_19;
      bool VAR_20 = VAR_6;
      do {
        VAR_19 = FUNC_3(VAR_11, &VAR_18);
        if(VAR_19) {
          bool VAR_21;
          struct per_transfer *VAR_22;
          CURL *VAR_23 = VAR_19->easy_handle;
          VAR_13 = VAR_19->data.result;
          FUNC_1(VAR_23, VAR_3, (void *)&VAR_22);
          FUNC_7(VAR_11, VAR_23);

          VAR_13 = FUNC_9(VAR_9, VAR_22, VAR_13, &VAR_21);
          if(VAR_21)
            continue;
          FUNC_10(VAR_22);
          VAR_8--;
          VAR_20 = VAR_7;
          (void)FUNC_8(VAR_22);
        }
      } while(VAR_19);
      if(VAR_20) {

        (void)FUNC_0(VAR_9, VAR_11, VAR_10,
                                     &VAR_16,
                                     &VAR_17);
        if(VAR_17)

          VAR_14 = 1;
      }
    }
  }

  (void)FUNC_11(VAR_9, &VAR_15, VAR_7);


  if(VAR_12) {
    VAR_13 = (VAR_12 == VAR_5) ? VAR_2 :


      VAR_0;
  }

  FUNC_2(VAR_11);

  return VAR_13;
}
