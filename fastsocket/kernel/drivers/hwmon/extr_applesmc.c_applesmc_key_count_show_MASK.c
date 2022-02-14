
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_3,
    struct device_attribute *VAR_4, char *VAR_5)
{
 int VAR_6;
 u8 VAR_7[4];
 u32 VAR_8;

 FUNC_1(&VAR_2);

 VAR_6 = FUNC_0(VAR_0, VAR_7, 4);
 VAR_8 = ((u32)VAR_7[0]<<24) + ((u32)VAR_7[1]<<16) +
      ((u32)VAR_7[2]<<8) + VAR_7[3];

 FUNC_2(&VAR_2);
 if (VAR_6)
  return VAR_6;
 else
  return FUNC_3(VAR_5, VAR_1, "%d\n", VAR_8);
}
