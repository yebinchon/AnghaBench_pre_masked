
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
struct Curl_easy {int dummy; } ;
typedef int ssize_t ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct Curl_easy*) ;
 scalar_t__ FUNC_1 (struct connectdata*,int ,void const*,size_t,int*) ;
 scalar_t__ FUNC_2 (struct Curl_easy*,int *,struct connectdata**) ;

CURLcode FUNC_3(struct Curl_easy *VAR_3, const void *VAR_4,
                        size_t VAR_5, size_t *VAR_6)
{
  curl_socket_t VAR_7;
  CURLcode VAR_8;
  ssize_t VAR_9;
  struct connectdata *VAR_10 = ((void*)0);

  if(FUNC_0(VAR_3))
    return VAR_1;

  VAR_8 = FUNC_2(VAR_3, &VAR_7, &VAR_10);
  if(VAR_8)
    return VAR_8;

  *VAR_6 = 0;
  VAR_8 = FUNC_1(VAR_10, VAR_7, VAR_4, VAR_5, &VAR_9);

  if(VAR_9 == -1)
    return VAR_2;


  if(!VAR_8 && !VAR_9)
    return VAR_0;

  *VAR_6 = (size_t)VAR_9;

  return VAR_8;
}
