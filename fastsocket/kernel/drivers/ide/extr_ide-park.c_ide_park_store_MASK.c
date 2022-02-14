
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {int dev_flags; scalar_t__ media; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char const*,int,long*) ;
 TYPE_1__* FUNC_5 (struct device*) ;

ssize_t FUNC_6(struct device *VAR_8, struct device_attribute *VAR_9,
         const char *VAR_10, size_t VAR_11)
{

 ide_drive_t *VAR_12 = FUNC_5(VAR_8);
 long int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_4(VAR_10, 10, &VAR_13);
 if (VAR_14 || VAR_13 < -2)
  return -VAR_0;
 if (VAR_13 > 30000) {
  VAR_13 = 30000;
  VAR_14 = -VAR_2;
 }

 FUNC_2(&VAR_7);
 if (VAR_13 >= 0) {
  if (VAR_12->dev_flags & VAR_3)
   VAR_14 = -VAR_1;
  else if (VAR_13 || VAR_12->dev_flags & VAR_4)
   FUNC_0(VAR_12, FUNC_1(VAR_13));
 } else {
  if (VAR_12->media == VAR_6)
   switch (VAR_13) {
   case -1:
    VAR_12->dev_flags &= ~VAR_3;
    break;
   case -2:
    VAR_12->dev_flags |= VAR_3;
    break;
   }
  else
   VAR_14 = -VAR_1;
 }
 FUNC_3(&VAR_7);

 return VAR_14 ? VAR_14 : VAR_11;
}
