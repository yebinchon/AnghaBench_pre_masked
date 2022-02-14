
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int parent; } ;
struct TYPE_4__ {int users; TYPE_1__ miscdev; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 if (VAR_0 == 42) {
  FUNC_1();
 } else {
  FUNC_3(VAR_1->miscdev.parent,
   "unexpected close, not stopping watchdog!\n");
  FUNC_0();
 }
 FUNC_2(1, &VAR_1->users);
 VAR_0 = 0;
 return 0;
}
