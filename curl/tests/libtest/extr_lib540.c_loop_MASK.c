
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct curl_slist {int dummy; } ;
typedef int fd_set ;
struct TYPE_4__ {scalar_t__ result; } ;
struct TYPE_5__ {scalar_t__ msg; TYPE_1__ data; int * easy_handle; } ;
typedef TYPE_2__ CURLMsg ;
typedef int CURLM ;
typedef int CURL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 char* FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int *) ;
 int ** VAR_3 ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int,int *,char const*,char const*,struct curl_slist*) ;
 int FUNC_7 (int *,int *,int *,int *,int*) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (int *,long*) ;
 int FUNC_10 (int,int *,int *,int *,struct timeval*) ;
 int FUNC_11 () ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_12(int VAR_5, CURLM *VAR_6, const char *VAR_7, const char *VAR_8,
                struct curl_slist *VAR_9)
{
  CURLMsg *VAR_10;
  long VAR_11;
  int VAR_12, VAR_13 = -1;
  fd_set VAR_14, VAR_15, VAR_16;
  struct timeval VAR_17;
  int VAR_18 = 0;

  VAR_18 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  if(VAR_18)
    return VAR_18;

  while(VAR_13) {

    int VAR_19 = -99;

    FUNC_8(VAR_6, &VAR_13);
    if(VAR_18)
      return VAR_18;

    FUNC_11();
    if(VAR_18)
      return VAR_18;

    if(VAR_13) {
      FUNC_0(&VAR_14);
      FUNC_0(&VAR_15);
      FUNC_0(&VAR_16);

      FUNC_7(VAR_6, &VAR_14, &VAR_15, &VAR_16, &VAR_19);
      if(VAR_18)
        return VAR_18;



      FUNC_9(VAR_6, &VAR_11);
      if(VAR_18)
        return VAR_18;



      if(VAR_11 != -1) {
        int VAR_20 = (VAR_11 > (long)VAR_1) ? VAR_1 : (int)VAR_11;
        VAR_17.tv_sec = VAR_20/1000;
        VAR_17.tv_usec = (VAR_20%1000)*1000;
      }
      else {
        VAR_17.tv_sec = 5;
        VAR_17.tv_usec = 0;
      }

      FUNC_10(VAR_19 + 1, &VAR_14, &VAR_15, &VAR_16, &VAR_17);
      if(VAR_18)
        return VAR_18;
    }

    while((VAR_10 = FUNC_3(VAR_6, &VAR_12)) != ((void*)0)) {
      if(VAR_10->msg == VAR_0) {
        int VAR_21;
        CURL *VAR_22 = VAR_10->easy_handle;
        FUNC_5(VAR_4, "R: %d - %s\n", (int)VAR_10->data.result,
                FUNC_2(VAR_10->data.result));
        FUNC_4(VAR_6, VAR_22);
        FUNC_1(VAR_22);
        for(VAR_21 = 0; VAR_21 < VAR_2; VAR_21++) {
          if(VAR_3[VAR_21] == VAR_22) {
            VAR_3[VAR_21] = ((void*)0);
            break;
          }
        }
      }
      else
        FUNC_5(VAR_4, "E: CURLMsg (%d)\n", (int)VAR_10->msg);
    }

    FUNC_11();
    if(VAR_18)
      return VAR_18;
  }

  return 0;
}
