
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct autofs_sb_info {unsigned long exp_timeout; } ;
struct TYPE_2__ {unsigned long timeout; } ;
struct autofs_dev_ioctl {TYPE_1__ timeout; } ;


 unsigned long VAR_0 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_1,
        struct autofs_sb_info *VAR_2,
        struct autofs_dev_ioctl *VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = VAR_3->timeout.timeout;
 VAR_3->timeout.timeout = VAR_2->exp_timeout / VAR_0;
 VAR_2->exp_timeout = VAR_4 * VAR_0;
 return 0;
}
