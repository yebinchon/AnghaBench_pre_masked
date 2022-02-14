
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kobject {int dummy; } ;
struct file {int dummy; } ;
struct bin_attribute {scalar_t__ size; } ;
typedef int ssize_t ;
typedef scalar_t__ loff_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t
FUNC_5(struct file *VAR_4, struct kobject *VAR_5,
  struct bin_attribute *VAR_6,
  char *VAR_7, loff_t VAR_8, size_t VAR_9)
{
 int VAR_10;

 if (FUNC_4(VAR_8 >= VAR_6->size))
  return 0;
 if (FUNC_4(VAR_8 < 0))
  return -VAR_0;
 if ((VAR_8 + VAR_9) > VAR_6->size)
  VAR_9 = VAR_6->size - VAR_8;

 VAR_8 += VAR_1;
 FUNC_2(&VAR_3);
 for (VAR_10 = 0; VAR_9; VAR_9--, VAR_8++, VAR_10++) {
  if (VAR_8 < 128)
   *VAR_7++ = FUNC_0(VAR_8);
  else if (VAR_2)
   *VAR_7++ = FUNC_1(VAR_8);
  else
   break;
 }
 FUNC_3(&VAR_3);

 return VAR_10;
}
