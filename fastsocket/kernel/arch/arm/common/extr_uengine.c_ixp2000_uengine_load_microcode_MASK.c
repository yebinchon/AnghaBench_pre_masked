
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u64 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ,int) ;
 int FUNC_2 (int,int) ;

void FUNC_3(int VAR_1, u8 *VAR_2, int VAR_3)
{
 int VAR_4;




 FUNC_1(VAR_1, VAR_0, 0x80000000);
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  u64 VAR_5;

  VAR_5 = (((u64)VAR_2[0]) << 32) |
   (((u64)VAR_2[1]) << 24) |
   (((u64)VAR_2[2]) << 16) |
   (((u64)VAR_2[3]) << 8) |
   ((u64)VAR_2[4]);
  VAR_2 += 5;

  FUNC_2(VAR_1, VAR_5);
 }







 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  u32 VAR_6;

  VAR_6 = FUNC_0(VAR_1, VAR_0);
  if (VAR_6 == 0x80000000)
   break;
  FUNC_2(VAR_1, 0xf0000c0300ULL);
 }




 FUNC_1(VAR_1, VAR_0, 0x00000000);
}
