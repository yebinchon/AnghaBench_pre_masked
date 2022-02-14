
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_volume_desc {TYPE_1__* vol; } ;
struct ubi_device {int ubi_num; } ;
struct file {struct ubi_volume_desc* private_data; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {struct ubi_device* ubi; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, struct dentry *VAR_1,
     int VAR_2)
{
 struct ubi_volume_desc *VAR_3 = VAR_0->private_data;
 struct ubi_device *VAR_4 = VAR_3->vol->ubi;

 return FUNC_0(VAR_4->ubi_num);
}
