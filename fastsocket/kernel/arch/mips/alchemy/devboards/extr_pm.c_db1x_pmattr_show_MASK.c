
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kobject {int dummy; } ;
struct TYPE_2__ {int* name; } ;
struct kobj_attribute {TYPE_1__ attr; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (char*,char*,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_17,
    struct kobj_attribute *VAR_18,
    char *VAR_19)
{
 int VAR_20;

 if (FUNC_0(VAR_14))
  return FUNC_2(VAR_19, "%lu\n", VAR_3);

 else if (FUNC_0(VAR_13))
  return FUNC_2(VAR_19, "%u\n",
    !!(VAR_4 & VAR_1));

 else if (FUNC_0(VAR_16))
  return FUNC_2(VAR_19, "%lu\n", VAR_2);

 else if (FUNC_0(VAR_5) || FUNC_0(VAR_6) || FUNC_0(VAR_7) ||
   FUNC_0(VAR_8) || FUNC_0(VAR_9) || FUNC_0(VAR_10) ||
   FUNC_0(VAR_11) || FUNC_0(VAR_12)) {
  VAR_20 = (VAR_18->attr.name)[4] - '0';
  return FUNC_2(VAR_19, "%d\n",
   !!(VAR_4 & FUNC_1(VAR_20)));

 } else if (FUNC_0(VAR_15)) {
  return FUNC_2(VAR_19, "%08lx\n", VAR_4);
 }

 return -VAR_0;
}
