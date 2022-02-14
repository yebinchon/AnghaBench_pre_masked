
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int tcr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct inode*,struct file*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_6, struct file *VAR_7)
{
 if (FUNC_4(0, &VAR_4))
  return -VAR_0;

 if (FUNC_1(&VAR_5->tcr) & VAR_2) {
  FUNC_2(0, &VAR_4);
  return -VAR_0;
 }

 if (VAR_3)
  FUNC_0(VAR_1);

 FUNC_5();
 return FUNC_3(VAR_6, VAR_7);
}
