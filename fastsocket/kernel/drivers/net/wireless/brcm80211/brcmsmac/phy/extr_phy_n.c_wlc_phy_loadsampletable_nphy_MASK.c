
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
typedef int u16 ;
struct cordic_iq {scalar_t__ q; scalar_t__ i; } ;
struct brcms_phy {scalar_t__ phyhang_avoid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int*) ;
 unsigned int* FUNC_1 (int,int ) ;
 int FUNC_2 (struct brcms_phy*,int) ;
 int FUNC_3 (struct brcms_phy*,int ,int,int ,int,unsigned int*) ;

__attribute__((used)) static void
FUNC_4(struct brcms_phy *VAR_2, struct cordic_iq *VAR_3,
        u16 VAR_4)
{
 u16 VAR_5;
 u32 *VAR_6 = ((void*)0);

 VAR_6 = FUNC_1(sizeof(u32) * VAR_4, VAR_0);
 if (VAR_6 == ((void*)0))
  return;

 if (VAR_2->phyhang_avoid)
  FUNC_2(VAR_2, 1);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_6[VAR_5] = ((((unsigned int)VAR_3[VAR_5].i) & 0x3ff) << 10) |
         (((unsigned int)VAR_3[VAR_5].q) & 0x3ff);
 FUNC_3(VAR_2, VAR_1, VAR_4, 0, 32,
     VAR_6);

 FUNC_0(VAR_6);

 if (VAR_2->phyhang_avoid)
  FUNC_2(VAR_2, 0);
}
