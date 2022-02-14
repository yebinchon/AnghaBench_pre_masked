
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; scalar_t__ idx; } ;
typedef TYPE_1__ silence_state ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int ) ;

silence_state *
FUNC_1(silence_state * VAR_1)
{
 if (!VAR_1)
  VAR_1 = FUNC_0(sizeof(silence_state), VAR_0);
 if (VAR_1) {
  VAR_1->idx = 0;
  VAR_1->state = 0;
 }
 return VAR_1;
}
