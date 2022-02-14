
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
typedef scalar_t__ curl_socklen_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,scalar_t__,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sockaddr const*,scalar_t__,char*,scalar_t__,char*,scalar_t__,int) ;
 char* FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;

int
FUNC_5(const struct sockaddr * VAR_1, curl_socklen_t VAR_2,
              char * VAR_3, curl_socklen_t VAR_4,
              char * VAR_5, curl_socklen_t VAR_6,
              int VAR_7)

{
  char *VAR_8 = ((void*)0);
  char *VAR_9 = ((void*)0);
  int VAR_10;

  if(VAR_3 && VAR_4) {
    VAR_8 = FUNC_3(VAR_4);
    if(!VAR_8)
      return VAR_0;
  }

  if(VAR_5 && VAR_6) {
    VAR_9 = FUNC_3(VAR_6);
    if(!VAR_9) {
      FUNC_1(VAR_8);
      return VAR_0;
    }
  }

  VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_8, VAR_4,
                       VAR_9, VAR_6, VAR_7);

  if(!VAR_10) {
    int VAR_11;
    if(VAR_8) {
      VAR_11 = FUNC_0(VAR_3, VAR_8,
        VAR_4 - 1, FUNC_4(VAR_8));
      VAR_3[VAR_11] = '\0';
      }

    if(VAR_9) {
      VAR_11 = FUNC_0(VAR_5, VAR_9,
        VAR_6 - 1, FUNC_4(VAR_9));
      VAR_5[VAR_11] = '\0';
      }
    }

  FUNC_1(VAR_8);
  FUNC_1(VAR_9);
  return VAR_10;
}
