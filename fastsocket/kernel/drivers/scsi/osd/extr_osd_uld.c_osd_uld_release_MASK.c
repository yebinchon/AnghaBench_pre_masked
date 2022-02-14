
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_uld_device {int dummy; } ;
struct inode {int dummy; } ;
struct file {struct osd_uld_device* private_data; } ;


 int FUNC_0 (char*,struct osd_uld_device*) ;
 int FUNC_1 (struct osd_uld_device*) ;

__attribute__((used)) static int FUNC_2(struct inode *VAR_0, struct file *VAR_1)
{
 struct osd_uld_device *VAR_2 = VAR_1->private_data;

 FUNC_0("osd_uld_release %p\n", VAR_1->private_data);
 VAR_1->private_data = ((void*)0);
 FUNC_1(VAR_2);
 return 0;
}
