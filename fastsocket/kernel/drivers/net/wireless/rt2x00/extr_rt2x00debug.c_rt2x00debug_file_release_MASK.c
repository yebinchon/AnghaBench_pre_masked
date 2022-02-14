
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt2x00debug_intf {TYPE_1__* debug; } ;
struct inode {int dummy; } ;
struct file {struct rt2x00debug_intf* private_data; } ;
struct TYPE_2__ {int owner; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_0, struct file *VAR_1)
{
 struct rt2x00debug_intf *VAR_2 = VAR_1->private_data;

 FUNC_0(VAR_2->debug->owner);

 return 0;
}
