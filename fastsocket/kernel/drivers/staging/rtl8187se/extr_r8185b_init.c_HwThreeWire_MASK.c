
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,scalar_t__) ;
 int FUNC_3 (struct net_device*,scalar_t__) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct net_device*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct net_device*,scalar_t__,int ) ;
 int FUNC_7 (struct net_device*,scalar_t__,int ) ;

int
FUNC_8(
 struct net_device *VAR_9,
 u8 *VAR_10,
 u8 VAR_11,
 int VAR_12,
 int VAR_13
 )
{
 int VAR_14 = 1;
 u8 VAR_15;
 u8 VAR_16;

 do
 {

  for(VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
  {
   VAR_16 = FUNC_1(VAR_9, VAR_2);
   if( (VAR_16 & (VAR_4|VAR_5)) == 0 )
   {
    break;
   }
   FUNC_4(10);
  }
  if (VAR_15 == VAR_8)
   FUNC_0("HwThreeWire(): CmdReg: %#X RE|WE bits are not clear!!\n", VAR_16);


  if(VAR_11 == 16)
  {
   FUNC_7(VAR_9, VAR_6, *((u16 *)VAR_10));
  }
  else if(VAR_11 == 64)
  {
   FUNC_6(VAR_9, VAR_6, *((u32 *)VAR_10));
   FUNC_6(VAR_9, VAR_7, *((u32 *)(VAR_10 + 4)));
  }
  else
  {
   int VAR_17;
   int VAR_18 = VAR_11 / 8;

   if ((VAR_11 % 8) != 0)
    FUNC_0("HwThreeWire(): nDataBufBitCnt(%d) should be multiple of 8!!!\n",
    VAR_11);

   if (VAR_11 > 64)
    FUNC_0("HwThreeWire(): nDataBufBitCnt(%d) should <= 64!!!\n",
    VAR_11);

   for(VAR_17 = 0; VAR_17 < VAR_18; VAR_17++)
   {
    FUNC_5(VAR_9, (VAR_6+VAR_17), *(VAR_10+VAR_17));
   }
  }


  VAR_16 = (u8)(VAR_11 - 1);
  if(VAR_12)
   VAR_16 |= VAR_1;
  FUNC_5(VAR_9, VAR_0, VAR_16);


  if(VAR_13)
  {
   FUNC_5(VAR_9, VAR_2, VAR_5);
  }
  else
  {
   FUNC_5(VAR_9, VAR_2, VAR_4);
  }


  for(VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
  {
   VAR_16 = FUNC_1(VAR_9, VAR_2);
   if( (VAR_16 & (VAR_4|VAR_5)) == 0 &&
    (VAR_16 & VAR_3) != 0 )
   {
    break;
   }
   FUNC_4(10);
  }
  if(VAR_15 == VAR_8)
  {



   FUNC_5(VAR_9, VAR_2, 0);
  }



  if(VAR_13 == 0)
  {
   if(VAR_11 == 16)
   {
    *((u16 *)VAR_10) = FUNC_3(VAR_9, VAR_6);
   }
   else if(VAR_11 == 64)
   {
    *((u32 *)VAR_10) = FUNC_2(VAR_9, VAR_6);
    *((u32 *)(VAR_10 + 4)) = FUNC_2(VAR_9, VAR_7);
   }
   else
   {
    int VAR_19;
    int VAR_20 = VAR_11 / 8;

    if ((VAR_11 % 8) != 0)
     FUNC_0("HwThreeWire(): nDataBufBitCnt(%d) should be multiple of 8!!!\n",
     VAR_11);

    if (VAR_11 > 64)
     FUNC_0("HwThreeWire(): nDataBufBitCnt(%d) should <= 64!!!\n",
     VAR_11);

    for(VAR_19 = 0; VAR_19 < VAR_20; VAR_19++)
    {
     *(VAR_10+VAR_19) = FUNC_1(VAR_9, (VAR_6+VAR_19));
    }
   }
  }

 }while(0);

 return VAR_14;
}
