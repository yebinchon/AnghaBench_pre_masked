
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asd_ha_struct {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct asd_ha_struct*,int ) ;
 int FUNC_2 (struct asd_ha_struct*,int ,int ) ;

void FUNC_3(struct asd_ha_struct *VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_3 < VAR_0) {
  u32 VAR_5 = FUNC_1(VAR_2, FUNC_0(VAR_3));
  if (VAR_4)
   VAR_5 |= VAR_1;
  else
   VAR_5 &= ~VAR_1;
  FUNC_2(VAR_2, FUNC_0(VAR_3), VAR_5);
 }
}
