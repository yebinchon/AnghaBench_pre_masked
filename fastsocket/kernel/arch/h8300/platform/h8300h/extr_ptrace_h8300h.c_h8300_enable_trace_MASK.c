
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short* addr; unsigned short inst; } ;
struct TYPE_4__ {TYPE_1__ breakinfo; } ;
struct task_struct {TYPE_2__ thread; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short* FUNC_0 (struct task_struct*,unsigned short*) ;
 scalar_t__ FUNC_1 (struct task_struct*,int ) ;

void FUNC_2(struct task_struct *VAR_2)
{
 unsigned short *VAR_3;
 VAR_3 = FUNC_0(VAR_2,(unsigned short *)FUNC_1(VAR_2, VAR_1));
 VAR_2->thread.breakinfo.addr = VAR_3;
 VAR_2->thread.breakinfo.inst = *VAR_3;
 *VAR_3 = VAR_0;
}
