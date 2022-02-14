
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_3, struct file *VAR_4)
{
 if (VAR_1)
  FUNC_3(VAR_0);
 else {
  FUNC_1(VAR_0->dev, "Watchdog device closed uncleanly\n");
  FUNC_2(VAR_0);
 }

 FUNC_0(0, &VAR_2);

 return 0;
}
