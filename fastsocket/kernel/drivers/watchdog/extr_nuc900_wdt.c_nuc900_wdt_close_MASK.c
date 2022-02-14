
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int expect_close; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_2, struct file *VAR_3)
{
 if (VAR_0->expect_close == 42)
  FUNC_3();
 else {
  FUNC_1(&VAR_0->pdev->dev,
   "Unexpected close, not stopping watchdog!\n");
  FUNC_2();
 }

 VAR_0->expect_close = 0;
 FUNC_0(0, &VAR_1);
 return 0;
}
