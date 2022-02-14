
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct bnx2x_reg_set {int member_1; int member_2; int reg; int val; int const devad; int const member_0; } ;
struct bnx2x_phy {scalar_t__ type; int ver_addr; } ;
struct bnx2x {int dummy; } ;


 int FUNC_0 (struct bnx2x_reg_set*) ;
 int FUNC_1 (int ,char*) ;
 int const VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_phy*,int const,int,int*) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_phy*,int const,int,int) ;
 int FUNC_4 (struct bnx2x*,int ,int,int ) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x_phy *VAR_4,
         struct bnx2x *VAR_5,
         u8 VAR_6)
{
 u16 VAR_7, VAR_8, VAR_9, VAR_10;
 static struct bnx2x_reg_set VAR_11[] = {
  {128, 0xA819, 0x0014},
  {128, 0xA81A, 0xc200},
  {128, 0xA81B, 0x0000},
  {128, 0xA81C, 0x0300},
  {128, 0xA817, 0x0009}
 };
 u16 VAR_12;

 if ((VAR_4->type == VAR_2) ||
     (VAR_4->type == VAR_3)) {
  FUNC_2(VAR_5, VAR_4, VAR_0, 0x400f, &VAR_12);
  FUNC_4(VAR_5, VAR_6, VAR_12 & 0xfff,
    VAR_4->ver_addr);
 } else {


  for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_11); VAR_10++)
   FUNC_3(VAR_5, VAR_4, VAR_11[VAR_10].devad,
      VAR_11[VAR_10].reg, VAR_11[VAR_10].val);

  for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
   FUNC_2(VAR_5, VAR_4, 128, 0xA818, &VAR_7);
   if (VAR_7 & 1)
    break;
   FUNC_5(5);
  }
  if (VAR_9 == 100) {
   FUNC_1(VAR_1, "Unable to read 848xx "
     "phy fw version(1)\n");
   FUNC_4(VAR_5, VAR_6, 0,
        VAR_4->ver_addr);
   return;
  }



  FUNC_3(VAR_5, VAR_4, 128, 0xA819, 0x0000);
  FUNC_3(VAR_5, VAR_4, 128, 0xA81A, 0xc200);
  FUNC_3(VAR_5, VAR_4, 128, 0xA817, 0x000A);
  for (VAR_9 = 0; VAR_9 < 100; VAR_9++) {
   FUNC_2(VAR_5, VAR_4, 128, 0xA818, &VAR_7);
   if (VAR_7 & 1)
    break;
   FUNC_5(5);
  }
  if (VAR_9 == 100) {
   FUNC_1(VAR_1, "Unable to read 848xx phy fw "
     "version(2)\n");
   FUNC_4(VAR_5, VAR_6, 0,
        VAR_4->ver_addr);
   return;
  }


  FUNC_2(VAR_5, VAR_4, 128, 0xA81B, &VAR_12);

  FUNC_2(VAR_5, VAR_4, 128, 0xA81C, &VAR_8);

  FUNC_4(VAR_5, VAR_6, (VAR_8<<16) | VAR_12,
       VAR_4->ver_addr);
 }

}
