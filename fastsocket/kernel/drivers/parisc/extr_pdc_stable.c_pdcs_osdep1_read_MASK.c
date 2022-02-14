
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef int ssize_t ;
typedef int result ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int**,int) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct kobject *VAR_4,
    struct kobj_attribute *VAR_5, char *VAR_6)
{
 char *VAR_7 = VAR_6;
 u32 VAR_8[4];

 if (!VAR_6)
  return -VAR_0;

 if (FUNC_0(VAR_2, &VAR_8, sizeof(VAR_8)) != VAR_3)
  return -VAR_1;

 VAR_7 += FUNC_1(VAR_7, "0x%.8x\n", VAR_8[0]);
 VAR_7 += FUNC_1(VAR_7, "0x%.8x\n", VAR_8[1]);
 VAR_7 += FUNC_1(VAR_7, "0x%.8x\n", VAR_8[2]);
 VAR_7 += FUNC_1(VAR_7, "0x%.8x\n", VAR_8[3]);

 return VAR_7 - VAR_6;
}
