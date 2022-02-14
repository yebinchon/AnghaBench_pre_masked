
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct kobject {int dummy; } ;
struct kobj_attribute {int dummy; } ;
typedef size_t ssize_t ;
typedef int in ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *,int ,int) ;
 scalar_t__ FUNC_3 (scalar_t__,int **,int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static ssize_t FUNC_5(struct kobject *VAR_12,
     struct kobj_attribute *VAR_13,
     const char *VAR_14, size_t VAR_15)
{
 unsigned long VAR_16;
 unsigned short VAR_17;
 u8 VAR_18[4];

 if (!FUNC_0(VAR_0))
  return -VAR_1;

 if (!VAR_14 || !VAR_15)
  return -VAR_2;

 if (FUNC_4(VAR_11 <= 224))
  return -VAR_5;

 if (FUNC_4(VAR_10 != VAR_7))
  return -VAR_6;

 VAR_16 = VAR_11 - 224;

 if (VAR_15 > VAR_16)
  return -VAR_4;



 for (VAR_17=0; VAR_17<VAR_15; VAR_17+=4) {
  FUNC_2(VAR_18, 0, 4);
  FUNC_1(VAR_18, VAR_14+VAR_17, (VAR_15-VAR_17 < 4) ? VAR_15-VAR_17 : 4);
  if (FUNC_4(FUNC_3(VAR_8 + VAR_17, &VAR_18,
     sizeof(VAR_18)) != VAR_9))
   return -VAR_3;
 }

 return VAR_15;
}
