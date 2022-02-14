
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct atl2_hw {int * perm_mac_addr; } ;


 int FUNC_0 (struct atl2_hw*,scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct atl2_hw*) ;
 scalar_t__ FUNC_4 (struct atl2_hw*,int,int*) ;
 scalar_t__ FUNC_5 (struct atl2_hw*,int,int*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int) ;

__attribute__((used)) static int FUNC_8(struct atl2_hw *VAR_2)
{
 u32 VAR_3[2];
 u32 VAR_4, VAR_5;
 u16 VAR_6;
 u8 VAR_7[VAR_0];
 bool VAR_8;

 if (FUNC_6(VAR_2->perm_mac_addr))
  return 0;

 VAR_3[0] = 0;
 VAR_3[1] = 0;

 if (!FUNC_3(VAR_2)) {
  VAR_6 = 0;
  VAR_8 = 0;


  VAR_4 = 0;
  while (1) {
   if (FUNC_4(VAR_2, VAR_4 + 0x100, &VAR_5)) {
    if (VAR_8) {
     if (VAR_6 == VAR_1)
      VAR_3[0] = VAR_5;
     else if (VAR_6 ==
      (VAR_1 + 4))
      VAR_3[1] = VAR_5;
     VAR_8 = 0;
    } else if ((VAR_5 & 0xff) == 0x5A) {
     VAR_8 = 1;
     VAR_6 = (u16) (VAR_5 >> 16);
    } else {

     break;
    }
   } else {
    break;
   }
   VAR_4 += 4;
  }

  *(u32 *) &VAR_7[2] = FUNC_1(VAR_3[0]);
  *(u16 *) &VAR_7[0] = FUNC_2(*(u16 *) &VAR_3[1]);

  if (FUNC_6(VAR_7)) {
   FUNC_7(VAR_2->perm_mac_addr, VAR_7, VAR_0);
   return 0;
  }
  return 1;
 }


 VAR_3[0] = 0;
 VAR_3[1] = 0;
 VAR_6 = 0;
 VAR_8 = 0;
 VAR_4 = 0;
 while (1) {
  if (FUNC_5(VAR_2, VAR_4 + 0x1f000, &VAR_5)) {
   if (VAR_8) {
    if (VAR_6 == VAR_1)
     VAR_3[0] = VAR_5;
    else if (VAR_6 == (VAR_1 + 4))
     VAR_3[1] = VAR_5;
    VAR_8 = 0;
   } else if ((VAR_5 & 0xff) == 0x5A) {
    VAR_8 = 1;
    VAR_6 = (u16) (VAR_5 >> 16);
   } else {
    break;
   }
  } else {
   break;
  }
  VAR_4 += 4;
 }

 *(u32 *) &VAR_7[2] = FUNC_1(VAR_3[0]);
 *(u16 *) &VAR_7[0] = FUNC_2(*(u16 *)&VAR_3[1]);
 if (FUNC_6(VAR_7)) {
  FUNC_7(VAR_2->perm_mac_addr, VAR_7, VAR_0);
  return 0;
 }

 VAR_3[0] = FUNC_0(VAR_2, VAR_1);
 VAR_3[1] = FUNC_0(VAR_2, VAR_1 + 4);
 *(u32 *) &VAR_7[2] = FUNC_1(VAR_3[0]);
 *(u16 *) &VAR_7[0] = FUNC_2(*(u16 *) &VAR_3[1]);

 if (FUNC_6(VAR_7)) {
  FUNC_7(VAR_2->perm_mac_addr, VAR_7, VAR_0);
  return 0;
 }

 return 1;
}
