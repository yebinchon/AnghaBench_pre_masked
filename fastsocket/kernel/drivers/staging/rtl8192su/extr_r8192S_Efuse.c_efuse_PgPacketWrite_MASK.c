
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int offset; scalar_t__ word_en; scalar_t__* data; } ;
typedef TYPE_1__ PGPKT_STRUCT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct net_device*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (struct net_device*,int,scalar_t__*) ;
 int FUNC_5 (scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct net_device*,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_7 (scalar_t__*,int,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static u8 FUNC_9(struct net_device* VAR_10, u8 VAR_11, u8 VAR_12,u8 *VAR_13)
{
 u8 VAR_14 = VAR_8;

 bool VAR_15 = VAR_9,VAR_16=VAR_9, VAR_17 = VAR_9;
 u16 VAR_18 = 0;
 u8 VAR_19;

 u8 VAR_20 = 0;


 u8 VAR_21=0,VAR_22=0;
 u8 VAR_23,VAR_24,VAR_25;



 PGPKT_STRUCT VAR_26;
 PGPKT_STRUCT VAR_27;

 u8 VAR_28[sizeof(u8)*8];
 u8 VAR_29 = 0,VAR_30 = 0x0F;

 static u32 VAR_31 = 0;

 if( FUNC_1(VAR_10) >= VAR_4)
 {
  FUNC_8("efuse_PgPacketWrite error \n");
  return VAR_6;
 }


 VAR_26.offset = VAR_11;
 VAR_26.word_en= VAR_12;


 FUNC_7(VAR_26.data,0xFF,sizeof(u8)*8);

 FUNC_5(VAR_12,VAR_13,VAR_26.data);
 VAR_22 = FUNC_0(VAR_26.word_en);


 FUNC_8("EFUSE Power ON\n");

 while( VAR_15 && (VAR_18 < VAR_4) )
 {

  if(VAR_14==VAR_8)
  {
   VAR_16=VAR_9;
   VAR_30 = 0x0F;

   FUNC_8("EFUSE PG_STATE_HEADER\n");
   if ( FUNC_2(VAR_10, VAR_18 ,&VAR_19) &&
    (VAR_19!=0xFF))
   {
    VAR_23 = VAR_19;

    VAR_27.offset = (VAR_23>>4) & 0x0F;
    VAR_27.word_en = VAR_23 & 0x0F;
    VAR_21 = FUNC_0(VAR_27.word_en);


    if(VAR_27.offset != VAR_26.offset)
    {
     VAR_18 = VAR_18 + (VAR_21*2) +1;



    }
    else
    {

     for(VAR_29=0 ; VAR_29<(VAR_21*2) ; VAR_29++)
     {
      if(FUNC_2(VAR_10, (VAR_18+1+VAR_29) ,&VAR_19)&&(VAR_19 != 0xFF)){
       VAR_16 = VAR_6;
      }
     }

     if(VAR_16 == VAR_6)
     {
      VAR_18 = VAR_18 + (VAR_21*2) +1;



     }
     else
     {
      VAR_24 = 0x0F;
      if( !( (VAR_26.word_en&VAR_0)|(VAR_27.word_en&VAR_0) ))
      {
        VAR_24 &= (~VAR_0);
      }
      if( !( (VAR_26.word_en&VAR_1)|(VAR_27.word_en&VAR_1) ))
      {
        VAR_24 &= (~VAR_1);
      }
      if( !( (VAR_26.word_en&VAR_2)|(VAR_27.word_en&VAR_2) ))
      {
        VAR_24 &= (~VAR_2);
      }
      if( !( (VAR_26.word_en&VAR_3)|(VAR_27.word_en&VAR_3) ))
      {
        VAR_24 &= (~VAR_3);
      }


      if((VAR_24&0x0F)!=0x0F)
      {
       VAR_30 = FUNC_6(VAR_10,VAR_18+1, VAR_27.word_en ,VAR_26.data);



       if(0x0F != (VAR_30&0x0F))
       {
        u8 VAR_32 = VAR_11;
        u8 VAR_33=VAR_30;
        FUNC_9(VAR_10,VAR_32,VAR_33,VAR_28);
       }


       VAR_25 = 0x0F;
       if( (VAR_26.word_en&VAR_0)^(VAR_24&VAR_0) )
       {
        VAR_25 &= (~VAR_0);
       }
       if( (VAR_26.word_en&VAR_1)^(VAR_24&VAR_1) )
       {
        VAR_25 &= (~VAR_1);
       }
       if( (VAR_26.word_en&VAR_2)^(VAR_24&VAR_2) )
       {
        VAR_25 &= (~VAR_2);
       }
       if( (VAR_26.word_en&VAR_3)^(VAR_24&VAR_3) )
       {
        VAR_25 &=(~VAR_3);
       }


       if((VAR_25&0x0F)!=0x0F){


        VAR_18 = FUNC_1(VAR_10);

        VAR_26.offset = VAR_11;
        VAR_26.word_en= VAR_25;

       }else{
        VAR_15 = VAR_6;
       }
      }
      else{

       VAR_18 = VAR_18 + (2*VAR_21) +1;

       VAR_26.offset = VAR_11;
       VAR_26.word_en= VAR_26.word_en;




      }
     }
    }
    FUNC_8("EFUSE PG_STATE_HEADER-1\n");
   }
   else
   {
    VAR_20 = ((VAR_26.offset << 4)&0xf0) |VAR_26.word_en;

    FUNC_3(VAR_10,VAR_18, VAR_20);
    FUNC_2(VAR_10,VAR_18, &VAR_23);

    if(VAR_23 == VAR_20)
    {
     VAR_14 = VAR_7;
    }
    else
    {
     VAR_27.offset = (VAR_23>>4) & 0x0F;
     VAR_27.word_en= VAR_23 & 0x0F;
     VAR_21 = FUNC_0(VAR_27.word_en);


     FUNC_7(VAR_28,0xff,sizeof(u8)*8);


     if(FUNC_4( VAR_10, VAR_27.offset,VAR_28))
     {

      VAR_30 = FUNC_6(VAR_10,VAR_18+1,VAR_27.word_en,VAR_28);

      if(0x0F != (VAR_30&0x0F))
      {
       u8 VAR_34 = VAR_27.offset;
       u8 VAR_35=VAR_30;
       FUNC_9(VAR_10,VAR_34,VAR_35,VAR_28);
       VAR_18 = FUNC_1(VAR_10);
      }

      else{
       VAR_18 = VAR_18 + (VAR_21*2) +1;
      }
     }

     else
     {
      VAR_18 = VAR_18 + (VAR_21*2) +1;
     }
     FUNC_8("EFUSE PG_STATE_HEADER-2\n");
    }

   }

  }

  else if(VAR_14==VAR_7)
  {
   FUNC_8("EFUSE PG_STATE_DATA\n");
   VAR_30 = 0x0f;
   VAR_30 = FUNC_6(VAR_10,VAR_18+1,VAR_26.word_en,VAR_26.data);
   if((VAR_30&0x0F)==0x0F)
   {
    VAR_15 = VAR_6;
   }
   else
   {
    VAR_18 = VAR_18 + (2*VAR_22) +1;


    VAR_26.offset = VAR_11;
    VAR_26.word_en= VAR_30;
    VAR_22 = FUNC_0(VAR_26.word_en);
    FUNC_8("EFUSE PG_STATE_HEADER-3\n");
   }
  }
 }



 return VAR_9;
}
