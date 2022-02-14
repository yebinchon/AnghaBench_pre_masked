
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int regs; } ;
struct TYPE_4__ {int forking; TYPE_2__ regs; } ;
struct TYPE_6__ {TYPE_1__ thread; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_3__* VAR_3 ;
 long FUNC_1 (int,int ,TYPE_2__*,int ,int *,int *) ;

long FUNC_2(void)
{
 long VAR_4;

 VAR_3->thread.forking = 1;
 VAR_4 = FUNC_1(VAR_0 | VAR_1 | VAR_2,
        FUNC_0(&VAR_3->thread.regs.regs),
        &VAR_3->thread.regs, 0, ((void*)0), ((void*)0));
 VAR_3->thread.forking = 0;
 return VAR_4;
}
