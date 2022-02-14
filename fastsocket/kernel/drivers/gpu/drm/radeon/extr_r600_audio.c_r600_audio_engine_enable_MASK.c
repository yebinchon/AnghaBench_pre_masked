
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct radeon_device {int audio_enabled; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 int FUNC_1 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct radeon_device *VAR_2, bool VAR_3)
{
 u32 VAR_4 = 0;
 FUNC_1("%s audio support\n", VAR_3 ? "Enabling" : "Disabling");
 if (FUNC_0(VAR_2)) {
  if (VAR_3) {
   VAR_4 |= 0x81000000;
   VAR_4 |= 0x0e1000f0;
  }
  FUNC_2(VAR_0, VAR_4);
 } else {
  FUNC_3(VAR_1,
    VAR_3 ? 0x81000000 : 0x0, ~0x81000000);
 }
 VAR_2->audio_enabled = VAR_3;
}
