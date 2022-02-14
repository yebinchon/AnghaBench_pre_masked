
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_device*,scalar_t__) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct net_device*,scalar_t__,int ) ;
 int FUNC_6 (struct net_device*,scalar_t__,int) ;

int
FUNC_7(
 struct net_device *VAR_13,
 u8 *VAR_14,
 u8 VAR_15,
 int VAR_16,
 int VAR_17
 )
{
 int VAR_18 = 1;
 u8 VAR_19;
 u8 VAR_20;

 do
 {

  for(VAR_19 = 0; VAR_19 < VAR_12; VAR_19++)
  {
   VAR_20 = FUNC_1(VAR_13, VAR_6);
   if( (VAR_20 & (VAR_8|VAR_9)) == 0 )
   {
    break;
   }
   FUNC_3(10);
  }
  if (VAR_19 == VAR_12)
   FUNC_0("HwThreeWire(): CmdReg: %#X RE|WE bits are not clear!!\n", VAR_20);


  VAR_20 = FUNC_1(VAR_13, VAR_4);

  if(VAR_16)
  {
   VAR_20 |= VAR_3;
  }else
  {
   VAR_20 &= ~VAR_3;
  }

  FUNC_4(VAR_13, VAR_4, VAR_20);

  if(VAR_16)
  {

   VAR_20 = FUNC_1(VAR_13, VAR_2);
   VAR_20 &= ~VAR_0;
   FUNC_4(VAR_13, VAR_2, VAR_20 );
  }


  if(VAR_17)
  {
   if(VAR_15 == 16)
   {
    FUNC_6(VAR_13, VAR_10, *((u16*)VAR_14));
   }
   else if(VAR_15 == 64)
   {
    FUNC_5(VAR_13, VAR_10, *((u32*)VAR_14));
    FUNC_5(VAR_13, VAR_11, *((u32*)(VAR_14 + 4)));
   }
   else
   {
    int VAR_21;
    int VAR_22 = VAR_15 / 8;

    if ((VAR_15 % 8) != 0)
    FUNC_0("HwThreeWire(): nDataBufBitCnt(%d) should be multiple of 8!!!\n",
    VAR_15);

          if (VAR_15 > 64)
    FUNC_0("HwThreeWire(): nDataBufBitCnt(%d) should <= 64!!!\n",
    VAR_15);

    for(VAR_21 = 0; VAR_21 < VAR_22; VAR_21++)
    {
     FUNC_4(VAR_13, (VAR_10+VAR_21), *(VAR_14+VAR_21));
    }
   }
  }
  else
  {
   if(VAR_16)
   {

    FUNC_6(VAR_13, VAR_10, *((u16*)VAR_14) );
   }
   else
   {

    FUNC_6(VAR_13, VAR_10, (*((u16*)VAR_14)) << 12);
   }
  }


  if(VAR_17)
  {
   FUNC_4(VAR_13, VAR_6, VAR_9);
  }
  else
  {
   FUNC_4(VAR_13, VAR_6, VAR_8);
  }


  for(VAR_19 = 0; VAR_19 < VAR_12; VAR_19++)
  {
   VAR_20 = FUNC_1(VAR_13, VAR_6);
   if( (VAR_20 & VAR_7) != 0 )
   {
    break;
   }
   FUNC_3(10);
  }

  FUNC_4(VAR_13, VAR_6, 0);


  if(VAR_17 == 0)
  {
   if(VAR_16)
   {

    *((u16*)VAR_14) = FUNC_2(VAR_13, VAR_5) ;
   }
   else
   {

    *((u16*)VAR_14) = FUNC_2(VAR_13, VAR_1);
   }

   *((u16*)VAR_14) &= 0x0FFF;
  }

 }while(0);

 return VAR_18;
}
