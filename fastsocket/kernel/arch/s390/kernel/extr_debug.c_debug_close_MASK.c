
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {scalar_t__ private_data; } ;
struct TYPE_2__ {int debug_info_org; scalar_t__ debug_info_snap; } ;
typedef TYPE_1__ file_private_info_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 file_private_info_t *VAR_2;
 VAR_2 = (file_private_info_t *) VAR_1->private_data;
 if(VAR_2->debug_info_snap)
  FUNC_0(VAR_2->debug_info_snap);
 FUNC_1(VAR_2->debug_info_org);
 FUNC_2(VAR_1->private_data);
 return 0;
}
