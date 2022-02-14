
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ max_cnt; } ;
struct TYPE_5__ {scalar_t__ count; TYPE_1__ attrs; int wait_queue; } ;
typedef TYPE_2__ lwp_sema ;
typedef int lwp_cntrl ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;

u32 FUNC_3(lwp_sema *VAR_2,u32 VAR_3)
{
 u32 VAR_4,VAR_5;
 lwp_cntrl *VAR_6;

 VAR_5 = VAR_1;
 if((VAR_6=FUNC_2(&VAR_2->wait_queue))) return VAR_5;
 else {
  FUNC_0(VAR_4);
  if(VAR_2->count<=VAR_2->attrs.max_cnt)
   ++VAR_2->count;
  else
   VAR_5 = VAR_0;
  FUNC_1(VAR_4);
 }
 return VAR_5;
}
