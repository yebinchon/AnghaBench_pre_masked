
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {scalar_t__ tv_usec; scalar_t__ tv_sec; } ;



long FUNC_0(struct timeval VAR_0, struct timeval VAR_1)
{
  return (long)(VAR_0.tv_sec-VAR_1.tv_sec)*1000+
    (long)(VAR_0.tv_usec-VAR_1.tv_usec)/1000;
}
