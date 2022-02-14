
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct brcms_phy {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct brcms_phy*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_4)
{
 u16 VAR_5, VAR_6;

 VAR_6 = 0x1e1f;
 for (VAR_5 = (VAR_3 + VAR_0);
      VAR_5 <= (VAR_3 + VAR_1); VAR_5++) {
  FUNC_0(VAR_4, VAR_5, VAR_6);
  if (VAR_5 == (VAR_3 + 0x97))
   VAR_6 = 0x3e3f;
  else
   VAR_6 -= 0x0202;
 }

 FUNC_0(VAR_4, VAR_3 + VAR_2, 0x668);
}
