
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct autofs_sb_info {int dummy; } ;
struct autofs_dev_ioctl {int ioctlfd; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0,
           struct autofs_sb_info *VAR_1,
           struct autofs_dev_ioctl *VAR_2)
{
 return FUNC_0(VAR_2->ioctlfd);
}
