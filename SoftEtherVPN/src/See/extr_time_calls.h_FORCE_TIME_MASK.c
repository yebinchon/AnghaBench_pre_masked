
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct time_conv {struct timeval* start; } ;



__inline void FUNC_0(struct timeval *VAR_0, struct time_conv *VAR_1)
{
 VAR_1->start[0]=*VAR_0;
}
