
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*,int,int ,int) ;
 int FUNC_3 (int) ;

void
FUNC_4( struct net_device* VAR_8)
{

 u32 VAR_9, VAR_10;
 u32 VAR_11;
 long VAR_12, VAR_13, VAR_14[4];
 u32 VAR_15[4];







 for (VAR_9 = 0; VAR_9 < 10; VAR_9++)
 {

  FUNC_2(VAR_8, 0xc04, VAR_7, 0x00a05430);

  FUNC_3(5);
  FUNC_2(VAR_8, 0xc08, VAR_7, 0x000800e4);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe28, VAR_7, 0x80800000);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe40, VAR_7, 0x02140148);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe44, VAR_7, 0x681604a2);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe4c, VAR_7, 0x000028d1);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe60, VAR_7, 0x0214014d);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe64, VAR_7, 0x281608ba);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe6c, VAR_7, 0x000028d1);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe48, VAR_7, 0xfb000001);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe48, VAR_7, 0xf8000001);
  FUNC_3(2000);
  FUNC_2(VAR_8, 0xc04, VAR_7, 0x00a05433);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xc08, VAR_7, 0x000000e4);
  FUNC_3(5);
  FUNC_2(VAR_8, 0xe28, VAR_7, 0x0);


  VAR_10 = FUNC_1(VAR_8, 0xeac, VAR_7);


  if (!(VAR_10&(VAR_0|VAR_1|VAR_2|VAR_3)))
  {
   VAR_11 = (FUNC_1(VAR_8, 0xc80, VAR_7) & 0x3FF);


   VAR_12 = (FUNC_1(VAR_8, 0xe94, VAR_7) & 0x03FF0000)>>16;
   VAR_15[VAR_5] = (VAR_12 * VAR_11)/0x100;
   VAR_10 = FUNC_1(VAR_8, 0xc80, VAR_7);
   VAR_10 = (VAR_10 & 0xFFFFFC00) | (u32)VAR_15[VAR_5];
   FUNC_2(VAR_8, 0xc80, VAR_7, VAR_10);
   FUNC_3(5);


   VAR_13 = ( FUNC_1(VAR_8, 0xe9C, VAR_7) & 0x03FF0000)>>16;
   VAR_14[VAR_6] = ((VAR_13 * VAR_11)/0x100);
   VAR_10 = FUNC_1(VAR_8, 0xc80, VAR_7);
   VAR_10 = (VAR_10 & 0xffc0ffff) |((u32) (VAR_14[VAR_6]&0x3F)<<16);
   FUNC_2(VAR_8, 0xc80, VAR_7, VAR_10);
   VAR_10 = FUNC_1(VAR_8, 0xc94, VAR_7);
   VAR_10 = (VAR_10 & 0x0fffffff) |(((VAR_13&0x3c0)>>6)<<28);
   FUNC_2(VAR_8, 0xc94, VAR_7, VAR_10);
   FUNC_3(5);


   VAR_10 = FUNC_1(VAR_8, 0xc14, VAR_7);
   VAR_12 = (FUNC_1(VAR_8, 0xea4, VAR_7) & 0x03FF0000)>>16;
   VAR_10 = (VAR_10 & 0xFFFFFC00) |VAR_12;
   FUNC_2(VAR_8, 0xc14, VAR_7, VAR_10);
   VAR_13 = (FUNC_1(VAR_8, 0xeac, VAR_7) & 0x003F0000)>>16;
   VAR_10 = (VAR_10 & 0xFFFF03FF) |VAR_13<<10;
   FUNC_2(VAR_8, 0xc14, VAR_7, VAR_10);
   FUNC_3(5);
   VAR_11 = (FUNC_1(VAR_8, 0xc88, VAR_7) & 0x3FF);


   VAR_12 = (FUNC_1(VAR_8, 0xeb4, VAR_7) & 0x03FF0000)>>16;
   VAR_10 = FUNC_1(VAR_8, 0xc88, VAR_7);
   VAR_15[VAR_5] = (VAR_12 * VAR_11) / 0x100;
   VAR_10 = (VAR_10 & 0xFFFFFC00) | VAR_15[VAR_5];
   FUNC_2(VAR_8, 0xc88, VAR_7, VAR_10);
   FUNC_3(5);


   VAR_13 = (FUNC_1(VAR_8, 0xebc, VAR_7)& 0x03FF0000)>>16;
   VAR_14[VAR_6] = ((VAR_13 * VAR_11)/0x100);
   VAR_10 = FUNC_1(VAR_8, 0xc88, VAR_7);
   VAR_10 = (VAR_10 & 0xffc0ffff) |( (VAR_14[VAR_6]&0x3F)<<16);
   FUNC_2(VAR_8, 0xc88, VAR_7, VAR_10);
   VAR_10 = FUNC_1(VAR_8, 0xc9c, VAR_7);
   VAR_10 = (VAR_10 & 0x0fffffff) |(((VAR_13&0x3c0)>>6)<<28);
   FUNC_2(VAR_8, 0xc9c, VAR_7, VAR_10);
   FUNC_3(5);


   VAR_10 = FUNC_1(VAR_8, 0xc1c, VAR_7);
   VAR_12 = (FUNC_1(VAR_8, 0xec4, VAR_7) & 0x03FF0000)>>16;
   VAR_10 = (VAR_10 & 0xFFFFFC00) |VAR_12;
   FUNC_2(VAR_8, 0xc1c, VAR_7, VAR_10);

   VAR_13 = (FUNC_1(VAR_8, 0xecc, VAR_7) & 0x003F0000)>>16;
   VAR_10 = (VAR_10 & 0xFFFF03FF) |VAR_13<<10;
   FUNC_2(VAR_8, 0xc1c, VAR_7, VAR_10);
   FUNC_3(5);

   FUNC_0(VAR_4, "PHY_IQCalibrate OK\n");
   break;
  }

 }







}
