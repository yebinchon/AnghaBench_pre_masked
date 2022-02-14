
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct htc_target {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct htc_target*,struct device*,int ,char*,int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct htc_target *VAR_1,
        struct device *VAR_2, u16 VAR_3,
        char *VAR_4, u32 VAR_5)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5)) {
  FUNC_1("Failed to initialize the device\n");
  return -VAR_0;
 }

 return 0;
}
