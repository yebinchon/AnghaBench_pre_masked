
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct autofs_sb_info {int dummy; } ;
struct TYPE_2__ {int devid; } ;
struct autofs_dev_ioctl {int ioctlfd; char* path; TYPE_1__ openmount; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_1,
          struct autofs_sb_info *VAR_2,
          struct autofs_dev_ioctl *VAR_3)
{
 const char *VAR_4;
 dev_t VAR_5;
 int VAR_6, VAR_7;


 if (!VAR_3->openmount.devid)
  return -VAR_0;

 VAR_3->ioctlfd = -1;

 VAR_4 = VAR_3->path;
 VAR_5 = FUNC_1(VAR_3->openmount.devid);

 VAR_6 = 0;
 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (FUNC_2(VAR_7 < 0)) {
  VAR_6 = VAR_7;
  goto out;
 }

 VAR_3->ioctlfd = VAR_7;
out:
 return VAR_6;
}
