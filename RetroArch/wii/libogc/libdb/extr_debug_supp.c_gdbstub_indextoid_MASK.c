
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ s32 ;
typedef int lwp_cntrl ;
struct TYPE_2__ {scalar_t__ min_id; scalar_t__ max_id; scalar_t__* local_table; } ;


 TYPE_1__ VAR_0 ;
 int * VAR_1 ;

lwp_cntrl* FUNC_0(s32 VAR_2)
{
 s32 VAR_3,VAR_4,VAR_5;
 lwp_cntrl *VAR_6;

 if(VAR_2<=0) return ((void*)0);

 if(VAR_2==1) return VAR_1;

 VAR_5 = 1;
 VAR_3 = VAR_0.min_id;
 VAR_4 = VAR_0.max_id;
 if(VAR_2<(VAR_5 + (VAR_4 - VAR_3))) {
  VAR_6 = (lwp_cntrl*)VAR_0.local_table[VAR_2 - VAR_5];
  return VAR_6;
 }
 return ((void*)0);
}
