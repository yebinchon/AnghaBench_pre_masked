
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {int dummy; } ;
typedef int RT_STATUS ;
typedef int RF90_RADIO_PATH_E ;
typedef int HW90_BLOCK_E ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct net_device*,int ,int,int ) ;
 int FUNC_4 (struct net_device*,int ,int,int ,int) ;
 int FUNC_5 (struct net_device*,int,int) ;

RT_STATUS
FUNC_6(
 struct net_device* VAR_6,
 HW90_BLOCK_E VAR_7,
 RF90_RADIO_PATH_E VAR_8
 )
{

 RT_STATUS VAR_9 = VAR_3;
 u32 VAR_10, VAR_11 = 4,VAR_12 = 0;
 u32 VAR_13[4];
 u32 VAR_14[] = {0xfffff027, 0xaa55a02f, 0x00000027, 0x55aa502f};


 VAR_13[131] = 0x100;
 VAR_13[130] = 0x900;
 VAR_13[129] = 0x800;
 VAR_13[128] = 0x3;

 for(VAR_10=0 ; VAR_10 < VAR_11 ; VAR_10++)
 {




  switch(VAR_7)
  {
  case 131:

   FUNC_0(VAR_1, "PHY_CheckBBRFOK(): Never Write 0x100 here!\n");
   break;

  case 130:
  case 129:
   FUNC_5(VAR_6, VAR_13[VAR_7], VAR_14[VAR_10]);
   VAR_12 = FUNC_2(VAR_6, VAR_13[VAR_7]);
   break;

  case 128:





   VAR_14[VAR_10] &= 0xfff;
   FUNC_4(VAR_6, VAR_8, VAR_13[128], VAR_5, VAR_14[VAR_10]);

   FUNC_1(10);
   VAR_12 = FUNC_3(VAR_6, VAR_8, VAR_13[128], VAR_4);
   FUNC_1(10);

   break;

  default:
   VAR_9 = VAR_2;
   break;
  }





  if(VAR_12 != VAR_14[VAR_10])
  {

   FUNC_0(VAR_0, "read back error(read:%x, write:%x)\n", VAR_12, VAR_14[VAR_10]);
   VAR_9 = VAR_2;
   break;
  }
 }

 return VAR_9;
}
