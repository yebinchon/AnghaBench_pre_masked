
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viot_devinfo_struct {int devno; int mode; int rewind; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*) ;

void FUNC_1(struct inode *VAR_0, struct viot_devinfo_struct *VAR_1)
{
 VAR_1->devno = FUNC_0(VAR_0) & 0x1F;
 VAR_1->mode = (FUNC_0(VAR_0) & 0x60) >> 5;

 VAR_1->rewind = (FUNC_0(VAR_0) & 0x80) == 0;
}
