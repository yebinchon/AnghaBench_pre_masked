
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int tv_usec; } ;
typedef int s32 ;



s32 FUNC_0(struct timeval VAR_0, struct timeval VAR_1)
{
 return ((VAR_1.tv_usec < VAR_0.tv_usec) ?
  1000000 - VAR_0.tv_usec + VAR_1.tv_usec :
  VAR_1.tv_usec - VAR_0.tv_usec);
}
