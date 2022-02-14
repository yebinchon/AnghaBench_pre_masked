
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file {int dummy; } ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_4__ {int user_psize; } ;
struct TYPE_5__ {TYPE_1__ context; } ;


 TYPE_3__* VAR_0 ;
 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long,int ,int ,int) ;

unsigned long FUNC_1(struct file *VAR_1,
         unsigned long VAR_2,
         unsigned long VAR_3,
         unsigned long VAR_4,
         unsigned long VAR_5)
{
 return FUNC_0(VAR_2, VAR_3, VAR_5,
           VAR_0->mm->context.user_psize,
           0, 1);
}
