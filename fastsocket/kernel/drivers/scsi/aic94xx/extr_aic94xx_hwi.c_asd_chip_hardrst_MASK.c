
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct asd_ha_struct*,int ) ;
 int FUNC_1 (struct asd_ha_struct*,int ,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct asd_ha_struct *VAR_6)
{
 int VAR_7;
 int VAR_8 = 100;
 u32 VAR_9;

 for (VAR_7 = 0 ; VAR_7 < 4 ; VAR_7++) {
  FUNC_1(VAR_6, VAR_1, VAR_3);
 }

 do {
  FUNC_2(1);
  VAR_9 = FUNC_0(VAR_6, VAR_0);
  if (VAR_9 & VAR_4) {
   FUNC_1(VAR_6, VAR_0,
         VAR_4|VAR_5);
   return 0;
  }
 } while (--VAR_8 > 0);

 return -VAR_2;
}
