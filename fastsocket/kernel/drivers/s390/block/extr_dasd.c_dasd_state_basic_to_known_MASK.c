
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dasd_device {int state; int * debug_area; scalar_t__ debugfs_dentry; int profile; TYPE_1__* block; } ;
struct TYPE_3__ {scalar_t__ debugfs_dentry; int profile; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct dasd_device*,char*,struct dasd_device*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct dasd_device*) ;
 int FUNC_3 (struct dasd_device*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct dasd_device *VAR_2)
{
 int VAR_3;
 if (VAR_2->block) {
  FUNC_5(&VAR_2->block->profile);
  if (VAR_2->block->debugfs_dentry)
   FUNC_7(VAR_2->block->debugfs_dentry);
  FUNC_4(VAR_2->block);
  FUNC_1(VAR_2->block);
 }
 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3)
  return VAR_3;
 FUNC_2(VAR_2);
 FUNC_5(&VAR_2->profile);
 if (VAR_2->debugfs_dentry)
  FUNC_7(VAR_2->debugfs_dentry);

 FUNC_0(VAR_1, VAR_2, "%p debug area deleted", VAR_2);
 if (VAR_2->debug_area != ((void*)0)) {
  FUNC_6(VAR_2->debug_area);
  VAR_2->debug_area = ((void*)0);
 }
 VAR_2->state = VAR_0;
 return 0;
}
