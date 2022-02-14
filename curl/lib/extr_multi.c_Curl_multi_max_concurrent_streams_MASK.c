
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Curl_multi {scalar_t__ max_concurrent_streams; } ;



size_t FUNC_0(struct Curl_multi *VAR_0)
{
  return VAR_0 ? ((size_t)VAR_0->max_concurrent_streams ?
                  (size_t)VAR_0->max_concurrent_streams : 100) : 0;
}
