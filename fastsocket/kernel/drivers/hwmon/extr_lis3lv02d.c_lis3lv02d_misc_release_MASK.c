
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int misc_opened; int irq; int async_queue; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,struct file*,int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_1, struct file *VAR_2)
{
 FUNC_1(-1, VAR_2, 0, &VAR_0.async_queue);
 FUNC_2(VAR_0.irq, &VAR_0);
 FUNC_0(0, &VAR_0.misc_opened);
 return 0;
}
