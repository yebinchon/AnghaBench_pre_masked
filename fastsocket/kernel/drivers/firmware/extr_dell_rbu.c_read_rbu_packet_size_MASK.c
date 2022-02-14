
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_2__ {int lock; int packetsize; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (char*,size_t,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(struct file *VAR_1, struct kobject *VAR_2,
        struct bin_attribute *VAR_3,
        char *VAR_4, loff_t VAR_5, size_t VAR_6)
{
 int VAR_7 = 0;
 if (!VAR_5) {
  FUNC_1(&VAR_0.lock);
  VAR_7 = FUNC_0(VAR_4, VAR_6, "%lu\n", VAR_0.packetsize);
  FUNC_2(&VAR_0.lock);
 }
 return VAR_7;
}
