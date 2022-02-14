
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct adsp_device* private_data; } ;
struct adsp_device {TYPE_1__* module; scalar_t__ abort; int name; } ;
struct TYPE_2__ {int pmem_regions_lock; int pmem_regions; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct adsp_device* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ,TYPE_1__**,int *,struct adsp_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct inode*,struct file*) ;
 int FUNC_5 (char*,int ,...) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_2, struct file *VAR_3)
{
 struct adsp_device *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_4 = FUNC_1(VAR_2);
 if (!VAR_4)
  return -VAR_0;

 FUNC_5("adsp_open() name = '%s'\n", VAR_4->name);

 VAR_5 = FUNC_2(VAR_4->name, &VAR_4->module, &VAR_1, VAR_4);
 if (VAR_5)
  return VAR_5;

 FUNC_5("adsp_open() module '%s' adev %p\n", VAR_4->name, VAR_4);
 VAR_3->private_data = VAR_4;
 VAR_4->abort = 0;
 FUNC_0(&VAR_4->module->pmem_regions);
 FUNC_3(&VAR_4->module->pmem_regions_lock);

 return 0;
}
