
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int curl_socket_t ;
typedef int CURLcode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,size_t) ;

CURLcode FUNC_1(curl_socket_t VAR_8,
                         char *VAR_9,
                         size_t VAR_10,
                         ssize_t *VAR_11)
{
  ssize_t VAR_12 = FUNC_0(VAR_8, VAR_9, VAR_10);

  if(-1 == VAR_12) {
    int VAR_13 = VAR_6;
    int VAR_14;



    VAR_14 = VAR_5 == VAR_13 || VAR_3 == VAR_13 || VAR_4 == VAR_13;

    if(VAR_14)
      return VAR_0;
    return VAR_2;
  }


  *VAR_11 = VAR_12;
  return VAR_1;
}
