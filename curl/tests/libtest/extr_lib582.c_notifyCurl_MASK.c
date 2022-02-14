
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int curl_socket_t ;
typedef scalar_t__ CURLMcode ;
typedef int CURLM ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int,int*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,char const*,scalar_t__,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(CURLM *VAR_2, curl_socket_t VAR_3, int VAR_4,
                       const char *VAR_5)
{
  int VAR_6 = 0;
  CURLMcode VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_6);
  if(VAR_7 != VAR_0) {
    FUNC_2(VAR_1, "Curl error on %s: %li (%s)\n",
            VAR_5, VAR_7, FUNC_1(VAR_7));
  }
}
