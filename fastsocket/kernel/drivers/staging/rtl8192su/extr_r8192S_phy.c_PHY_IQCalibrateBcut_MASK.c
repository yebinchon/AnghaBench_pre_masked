
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*,int,int ,int) ;
 int FUNC_3 (int) ;

extern void FUNC_4(struct net_device* VAR_10)
{


 u32 VAR_11, VAR_12;
 u32 VAR_13;
 long VAR_14, VAR_15, VAR_16[4];
 u32 VAR_17[4];
 u32 VAR_18[13] = {0};
 u32 VAR_19[13];
 u8 VAR_20=0;
 VAR_18 [0] = 0xee0;
 VAR_18 [1] = 0xedc;
 VAR_18 [2] = 0xe70;
 VAR_18 [3] = 0xe74;
 VAR_18 [4] = 0xe78;
 VAR_18 [5] = 0xe7c;
 VAR_18 [6] = 0xe80;
 VAR_18 [7] = 0xe84;
 VAR_18 [8] = 0xe88;
 VAR_18 [9] = 0xe8c;
 VAR_18 [10] = 0xed0;
 VAR_18 [11] = 0xed4;
 VAR_18 [12] = 0xed8;

 for (VAR_11 = 0; VAR_11 < 13; VAR_11++)
 {
  VAR_19[VAR_11] = FUNC_1(VAR_10, VAR_18[VAR_11], VAR_8);
  FUNC_2(VAR_10, VAR_18[VAR_11], VAR_8, 0x3fed92fb);

 }

 VAR_20 = (u8)FUNC_1(VAR_10, VAR_9, VAR_4);





 for (VAR_11 = 0; VAR_11 < 10; VAR_11++)
 {
  FUNC_0(VAR_5, "IQK -%d\n", VAR_11);

  if (!VAR_20)
  {

   FUNC_2(VAR_10, 0x820, VAR_8, 0x01000100);
   FUNC_2(VAR_10, 0x828, VAR_8, 0x01000100);
  }



  FUNC_2(VAR_10, 0xc04, VAR_8, 0x00a05430);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xc08, VAR_8, 0x000800e4);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xe28, VAR_8, 0x80800000);
  FUNC_3(5);

  FUNC_2(VAR_10, 0xe40, VAR_8, 0x02140102);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xe44, VAR_8, 0x681604c2);
  FUNC_3(5);

  FUNC_2(VAR_10, 0xe4c, VAR_8, 0x000028d1);
  FUNC_3(5);

  FUNC_2(VAR_10, 0xe60, VAR_8, 0x02140102);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xe64, VAR_8, 0x28160d05);
  FUNC_3(5);

  FUNC_2(VAR_10, 0xe48, VAR_8, 0xfb000000);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xe48, VAR_8, 0xf8000000);
  FUNC_3(5);


  FUNC_3(2000);


  FUNC_2(VAR_10, 0xe6c, VAR_8, 0x020028d1);
  FUNC_3(5);

  FUNC_2(VAR_10, 0xe48, VAR_8, 0xfb000000);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xe48, VAR_8, 0xf8000000);


  FUNC_3(2000);

  FUNC_2(VAR_10, 0xc04, VAR_8, 0x00a05433);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xc08, VAR_8, 0x000000e4);
  FUNC_3(5);
  FUNC_2(VAR_10, 0xe28, VAR_8, 0x0);

  if (!VAR_20)
  {

   FUNC_2(VAR_10, 0x820, VAR_8, 0x01000000);
   FUNC_2(VAR_10, 0x828, VAR_8, 0x01000000);
  }


  VAR_12 = FUNC_1(VAR_10, 0xeac, VAR_8);



  if (!(VAR_12&(VAR_0|VAR_1|VAR_2|VAR_3)))
  {
   VAR_13 = (FUNC_1(VAR_10, 0xc80, VAR_8) & 0x3FF);


   VAR_14 = (FUNC_1(VAR_10, 0xe94, VAR_8) & 0x03FF0000)>>16;
   VAR_17[VAR_6] = (VAR_14 * VAR_13)/0x100;
   VAR_12 = FUNC_1(VAR_10, 0xc80, VAR_8);
   VAR_12 = (VAR_12 & 0xFFFFFC00) | (u32)VAR_17[VAR_6];
   FUNC_2(VAR_10, 0xc80, VAR_8, VAR_12);
   FUNC_3(5);


   VAR_15 = ( FUNC_1(VAR_10, 0xe9C, VAR_8) & 0x03FF0000)>>16;
   VAR_16[VAR_7] = ((VAR_15 * VAR_13)/0x100);
   VAR_12 = FUNC_1(VAR_10, 0xc80, VAR_8);
   VAR_12 = (VAR_12 & 0xffc0ffff) |((u32) (VAR_16[VAR_7]&0x3F)<<16);
   FUNC_2(VAR_10, 0xc80, VAR_8, VAR_12);
   VAR_12 = FUNC_1(VAR_10, 0xc94, VAR_8);
   VAR_12 = (VAR_12 & 0x0fffffff) |(((VAR_15&0x3c0)>>6)<<28);
   FUNC_2(VAR_10, 0xc94, VAR_8, VAR_12);
   FUNC_3(5);


   VAR_12 = FUNC_1(VAR_10, 0xc14, VAR_8);
   VAR_14 = (FUNC_1(VAR_10, 0xea4, VAR_8) & 0x03FF0000)>>16;
   VAR_12 = (VAR_12 & 0xFFFFFC00) |VAR_14;
   FUNC_2(VAR_10, 0xc14, VAR_8, VAR_12);
   VAR_15 = (FUNC_1(VAR_10, 0xeac, VAR_8) & 0x003F0000)>>16;
   VAR_12 = (VAR_12 & 0xFFFF03FF) |VAR_15<<10;
   FUNC_2(VAR_10, 0xc14, VAR_8, VAR_12);
   FUNC_3(5);
   VAR_13 = (FUNC_1(VAR_10, 0xc88, VAR_8) & 0x3FF);


   VAR_14 = (FUNC_1(VAR_10, 0xeb4, VAR_8) & 0x03FF0000)>>16;
   VAR_12 = FUNC_1(VAR_10, 0xc88, VAR_8);
   VAR_17[VAR_6] = (VAR_14 * VAR_13) / 0x100;
   VAR_12 = (VAR_12 & 0xFFFFFC00) | VAR_17[VAR_6];
   FUNC_2(VAR_10, 0xc88, VAR_8, VAR_12);
   FUNC_3(5);


   VAR_15 = (FUNC_1(VAR_10, 0xebc, VAR_8)& 0x03FF0000)>>16;
   VAR_16[VAR_7] = ((VAR_15 * VAR_13)/0x100);
   VAR_12 = FUNC_1(VAR_10, 0xc88, VAR_8);
   VAR_12 = (VAR_12 & 0xffc0ffff) |( (VAR_16[VAR_7]&0x3F)<<16);
   FUNC_2(VAR_10, 0xc88, VAR_8, VAR_12);
   VAR_12 = FUNC_1(VAR_10, 0xc9c, VAR_8);
   VAR_12 = (VAR_12 & 0x0fffffff) |(((VAR_15&0x3c0)>>6)<<28);
   FUNC_2(VAR_10, 0xc9c, VAR_8, VAR_12);
   FUNC_3(5);


   VAR_12 = FUNC_1(VAR_10, 0xc1c, VAR_8);
   VAR_14 = (FUNC_1(VAR_10, 0xec4, VAR_8) & 0x03FF0000)>>16;
   VAR_12 = (VAR_12 & 0xFFFFFC00) |VAR_14;
   FUNC_2(VAR_10, 0xc1c, VAR_8, VAR_12);

   VAR_15 = (FUNC_1(VAR_10, 0xecc, VAR_8) & 0x003F0000)>>16;
   VAR_12 = (VAR_12 & 0xFFFF03FF) |VAR_15<<10;
   FUNC_2(VAR_10, 0xc1c, VAR_8, VAR_12);
   FUNC_3(5);

   FUNC_0(VAR_5, "PHY_IQCalibrate OK\n");
   break;
  }

 }





 for (VAR_11 = 0; VAR_11 < 13; VAR_11++)
  FUNC_2(VAR_10, VAR_18[VAR_11], VAR_8, VAR_19[VAR_11]);
}
