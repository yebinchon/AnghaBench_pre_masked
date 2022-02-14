
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {scalar_t__* sock; } ;
typedef int ssize_t ;
typedef scalar_t__ curl_socket_t ;
typedef int CURLcode ;


 int FUNC_0 (struct connectdata*,int,void const*,size_t,int *) ;
 size_t VAR_0 ;

CURLcode FUNC_1(struct connectdata *VAR_1,
                          curl_socket_t VAR_2,
                          const void *VAR_3,
                          size_t VAR_4,
                          ssize_t *VAR_5)
{
  ssize_t VAR_6;
  CURLcode VAR_7;
  int VAR_8 = (VAR_2 == VAR_1->sock[VAR_0]);

  VAR_6 = FUNC_0(VAR_1, VAR_8, VAR_3, VAR_4, &VAR_7);

  *VAR_5 = VAR_6;

  return VAR_7;
}
