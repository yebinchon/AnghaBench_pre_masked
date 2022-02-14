
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_c_info {int macintstatus; } ;


 int FUNC_0 (struct brcms_c_info*,int) ;

bool FUNC_1(struct brcms_c_info *VAR_0)
{
 u32 VAR_1;


 VAR_1 = FUNC_0(VAR_0, 0);


 if (VAR_1 == 0xffffffff)
  return 0;


 VAR_0->macintstatus |= VAR_1;

 return 1;
}
