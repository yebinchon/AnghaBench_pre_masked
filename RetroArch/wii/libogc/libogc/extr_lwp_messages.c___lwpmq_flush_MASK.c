
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ num_pendingmsgs; } ;
typedef TYPE_1__ mq_cntrl ;


 int FUNC_0 (TYPE_1__*) ;

u32 FUNC_1(mq_cntrl *VAR_0)
{
 if(VAR_0->num_pendingmsgs!=0)
  return FUNC_0(VAR_0);
 else
  return 0;
}
