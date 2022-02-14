
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct curltime {scalar_t__ tv_usec; int tv_sec; } ;


 int FUNC_0 (int *) ;

struct curltime FUNC_1(void)
{



  struct curltime VAR_0;
  VAR_0.tv_sec = FUNC_0(((void*)0));
  VAR_0.tv_usec = 0;
  return VAR_0;
}
