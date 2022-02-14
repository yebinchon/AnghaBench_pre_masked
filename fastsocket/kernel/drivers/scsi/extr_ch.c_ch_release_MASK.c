
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {TYPE_1__* private_data; } ;
struct TYPE_2__ {int device; } ;
typedef TYPE_1__ scsi_changer ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 scsi_changer *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->device);
 VAR_1->private_data = ((void*)0);
 return 0;
}
