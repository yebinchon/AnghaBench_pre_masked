
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct w1_slave {TYPE_1__* master; struct w1_f23_data* family_data; } ;
struct w1_f23_data {int * memory; } ;
struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef size_t loff_t ;
struct TYPE_3__ {int mutex; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct w1_slave* FUNC_0 (struct kobject*) ;
 int FUNC_1 (char*,int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 size_t FUNC_4 (size_t,size_t,int ) ;
 scalar_t__ FUNC_5 (struct w1_slave*,struct w1_f23_data*,int) ;
 int FUNC_6 (TYPE_1__*,char*,size_t) ;
 scalar_t__ FUNC_7 (struct w1_slave*) ;
 int FUNC_8 (TYPE_1__*,size_t*,int) ;

__attribute__((used)) static ssize_t FUNC_9(struct file *VAR_4, struct kobject *VAR_5,
          struct bin_attribute *VAR_6,
          char *VAR_7, loff_t VAR_8, size_t VAR_9)
{
 struct w1_slave *VAR_10 = FUNC_0(VAR_5);




 u8 VAR_11[3];


 if ((VAR_9 = FUNC_4(VAR_8, VAR_9, VAR_1)) == 0)
  return 0;

 FUNC_2(&VAR_10->master->mutex);
 if (FUNC_7(VAR_10)) {
  VAR_9 = -VAR_0;
  goto out_up;
 }

 VAR_11[0] = VAR_2;
 VAR_11[1] = VAR_8 & 0xff;
 VAR_11[2] = VAR_8 >> 8;
 FUNC_8(VAR_10->master, VAR_11, 3);
 FUNC_6(VAR_10->master, VAR_7, VAR_9);



out_up:
 FUNC_3(&VAR_10->master->mutex);

 return VAR_9;
}
