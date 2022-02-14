
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct brcms_hardware {int d11core; int up; } ;
struct brcms_c_info {int macintstatus; int macintmask; struct brcms_hardware* hw; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct brcms_c_info*,int) ;

bool FUNC_2(struct brcms_c_info *VAR_0)
{
 struct brcms_hardware *VAR_1 = VAR_0->hw;
 u32 VAR_2;

 if (!VAR_1->up || !VAR_0->macintmask)
  return 0;


 VAR_2 = FUNC_1(VAR_0, 1);

 if (VAR_2 == 0xffffffff) {
  FUNC_0(VAR_1->d11core,
     "DEVICEREMOVED detected in the ISR code path\n");
  return 0;
 }


 if (VAR_2 == 0)
  return 0;


 VAR_0->macintstatus = VAR_2;

 return 1;

}
