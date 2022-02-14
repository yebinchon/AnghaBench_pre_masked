
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;


 int ** VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct brcms_phy*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct brcms_phy *VAR_2)
{
 int VAR_3, VAR_4 = 2;
 u16 VAR_5 = 0x2c5;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  FUNC_0(VAR_2, VAR_5 + VAR_3,
         VAR_0[VAR_4][VAR_3]);
}
