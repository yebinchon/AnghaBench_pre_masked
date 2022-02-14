
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef int lwp_semattr ;
struct TYPE_3__ {int wait_queue; int count; int attrs; } ;
typedef TYPE_1__ lwp_sema ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,int ) ;

void FUNC_2(lwp_sema *VAR_4,lwp_semattr *VAR_5,u32 VAR_6)
{
 VAR_4->attrs = *VAR_5;
 VAR_4->count = VAR_6;

 FUNC_1(&VAR_4->wait_queue,FUNC_0(VAR_5)?VAR_3:VAR_2,VAR_1,VAR_0);
}
