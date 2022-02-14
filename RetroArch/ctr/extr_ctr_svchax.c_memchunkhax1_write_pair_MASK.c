
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,int *) ;
 int FUNC_1 (scalar_t__*,scalar_t__,int ,int,int ,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_4, u32 VAR_5)
{
   u32 VAR_6;
   u8* VAR_7;
   u32 VAR_8;

   u32* VAR_9;
   u32* VAR_10;

   u32* VAR_11;
   u32* VAR_12;

   FUNC_1(&VAR_6, 0, 0, 0x10000, VAR_0, VAR_2 | VAR_3);

   VAR_7 = (u8*)(VAR_6 + 0x8000);

   FUNC_1(&VAR_8, VAR_6 + 0x1000, 0, 0x1000, VAR_1, 0);
   FUNC_1(&VAR_8, VAR_6 + 0x3000, 0, 0x2000, VAR_1, 0);
   FUNC_1(&VAR_8, VAR_6 + 0x6000, 0, 0x1000, VAR_1, 0);

   VAR_11 = (u32*)(VAR_6 + 0x0004);
   FUNC_0(VAR_6 + 0x0000, VAR_6 + 0x1000, 16, VAR_7);

   VAR_9 = (u32*)(VAR_6 + 0x2004);
   VAR_10 = (u32*)(VAR_6 + 0x2008);
   FUNC_0(VAR_6 + 0x2000, VAR_6 + 0x3000, 16, VAR_7);

   VAR_12 = (u32*)(VAR_6 + 0x5008);
   FUNC_0(VAR_6 + 0x5000, VAR_6 + 0x6000, 16, VAR_7);

   *VAR_11 = *VAR_9;
   *VAR_12 = *VAR_10;

   *VAR_10 = VAR_4 - 4;
   *VAR_9 = VAR_5;
   FUNC_0(VAR_6 + 0x3000, VAR_6 + 0x2000, 16, VAR_7);
   FUNC_1(&VAR_8, 0, 0, 0x2000, VAR_0, VAR_2 | VAR_3);

   FUNC_0(VAR_6 + 0x1000, VAR_6 + 0x0000, 16, VAR_7);
   FUNC_0(VAR_6 + 0x6000, VAR_6 + 0x5000, 16, VAR_7);

   FUNC_1(&VAR_8, VAR_6 + 0x0000, 0, 0x1000, VAR_1, 0);
   FUNC_1(&VAR_8, VAR_6 + 0x2000, 0, 0x4000, VAR_1, 0);
   FUNC_1(&VAR_8, VAR_6 + 0x7000, 0, 0x9000, VAR_1, 0);

}
