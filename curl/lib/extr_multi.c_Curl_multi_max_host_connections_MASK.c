
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_multi {size_t max_host_connections; } ;



size_t FUNC_0(struct Curl_multi *VAR_0)
{
  return VAR_0 ? VAR_0->max_host_connections : 0;
}
