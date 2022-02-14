
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct autofs_sb_info {int dummy; } ;
struct TYPE_2__ {scalar_t__ token; } ;
struct autofs_dev_ioctl {TYPE_1__ ready; } ;
typedef scalar_t__ autofs_wqt_t ;


 int FUNC_0 (struct autofs_sb_info*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0,
      struct autofs_sb_info *VAR_1,
      struct autofs_dev_ioctl *VAR_2)
{
 autofs_wqt_t VAR_3;

 VAR_3 = (autofs_wqt_t) VAR_2->ready.token;
 return FUNC_0(VAR_1, VAR_3, 0);
}
