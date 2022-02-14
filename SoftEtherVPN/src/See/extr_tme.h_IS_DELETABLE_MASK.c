
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {scalar_t__ tv_sec; } ;
typedef scalar_t__ int32 ;
struct TYPE_4__ {scalar_t__ tv_sec; } ;
struct TYPE_5__ {scalar_t__ enable_deletion; scalar_t__ filled_entries; scalar_t__ max_fill_state; TYPE_1__ last_read; } ;
typedef TYPE_2__ TME_DATA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static __inline int32 FUNC_0(void *VAR_3, TME_DATA *VAR_4)
{
 struct timeval *VAR_5=(struct timeval*)VAR_3;

 if (VAR_4->enable_deletion==VAR_1)
  return VAR_1;
 if (VAR_4->filled_entries<VAR_4->max_fill_state)
  return VAR_1;
 if ((VAR_5->tv_sec+VAR_0)<VAR_4->last_read.tv_sec)
  return VAR_2;
 return VAR_1;
}
