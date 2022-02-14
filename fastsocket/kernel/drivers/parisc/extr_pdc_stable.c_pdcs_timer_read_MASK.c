
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct pdcspath_entry {int rw_lock; TYPE_1__ devpath; } ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct pdcspath_entry VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_3,
          struct kobj_attribute *VAR_4, char *VAR_5)
{
 char *VAR_6 = VAR_5;
 struct pdcspath_entry *VAR_7;

 if (!VAR_5)
  return -VAR_0;


 VAR_7 = &VAR_2;


 FUNC_0(&VAR_7->rw_lock);
 VAR_6 += FUNC_2(VAR_6, "%u\n", (VAR_7->devpath.flags & VAR_1) ?
    (1 << (VAR_7->devpath.flags & VAR_1)) : 0);
 FUNC_1(&VAR_7->rw_lock);

 return VAR_6 - VAR_5;
}
