
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connectdata {int dummy; } ;
struct Curl_easy {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef int curl_socket_t ;
typedef scalar_t__ CURLcode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct Curl_easy*) ;
 scalar_t__ FUNC_1 (struct connectdata*,int ,void*,size_t,scalar_t__*) ;
 scalar_t__ FUNC_2 (struct Curl_easy*,int *,struct connectdata**) ;

CURLcode FUNC_3(struct Curl_easy *VAR_2, void *VAR_3, size_t VAR_4,
                        size_t *VAR_5)
{
  curl_socket_t VAR_6;
  CURLcode VAR_7;
  ssize_t VAR_8;
  struct connectdata *VAR_9;

  if(FUNC_0(VAR_2))
    return VAR_1;

  VAR_7 = FUNC_2(VAR_2, &VAR_6, &VAR_9);
  if(VAR_7)
    return VAR_7;

  *VAR_5 = 0;
  VAR_7 = FUNC_1(VAR_9, VAR_6, VAR_3, VAR_4, &VAR_8);

  if(VAR_7)
    return VAR_7;

  *VAR_5 = (size_t)VAR_8;

  return VAR_0;
}
