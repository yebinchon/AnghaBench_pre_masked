
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {TYPE_1__* master; int dev; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,char*,int,...) ;
 struct w1_slave* FUNC_2 (struct kobject*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (size_t,size_t,int ) ;
 scalar_t__ FUNC_6 (struct w1_slave*,int,int,char*) ;

__attribute__((used)) static ssize_t FUNC_7(struct file *VAR_7, struct kobject *VAR_8,
    struct bin_attribute *VAR_9,
    char *VAR_10, loff_t VAR_11, size_t VAR_12)
{
 struct w1_slave *VAR_13 = FUNC_2(VAR_8);
 int VAR_14, VAR_15, VAR_16;

 if ((VAR_12 = FUNC_5(VAR_11, VAR_12, VAR_4)) == 0)
  return 0;
 FUNC_3(&VAR_13->master->mutex);


 VAR_16 = 0;
 while (VAR_16 < VAR_12) {
  VAR_14 = VAR_11 + VAR_16;
  VAR_15 = VAR_6 - (VAR_14 & VAR_5);
  if (VAR_15 > (VAR_12 - VAR_16))
   VAR_15 = VAR_12 - VAR_16;

  if (FUNC_6(VAR_13, VAR_14, VAR_15, &VAR_10[VAR_16]) < 0) {
   VAR_12 = -VAR_3;
   goto out_up;
  }
  VAR_16 += VAR_15;
 }

out_up:
 FUNC_4(&VAR_13->master->mutex);

 return VAR_12;
}
