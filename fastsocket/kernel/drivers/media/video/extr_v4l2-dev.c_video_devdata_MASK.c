
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 size_t FUNC_0 (int ) ;
 struct video_device** VAR_0 ;

struct video_device *FUNC_1(struct file *VAR_1)
{
 return VAR_0[FUNC_0(VAR_1->f_path.dentry->d_inode)];
}
