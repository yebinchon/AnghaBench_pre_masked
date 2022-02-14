
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wbsoft_priv {int dummy; } ;
struct wb35_descriptor {int FragmentThreshold; int TxRate; int FragmentCount; } ;
struct TYPE_4__ {void* value; scalar_t__ T00_frame_length; } ;
struct TYPE_3__ {int T01_add_rts; int T01_add_cts; int T01_rts_cts_duration; void* value; scalar_t__ T01_plcp_header_length; scalar_t__ T01_modulation_type; } ;
typedef TYPE_1__* PT01_DESCRIPTOR ;
typedef TYPE_2__* PT00_DESCRIPTOR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(struct wbsoft_priv *VAR_8, struct wb35_descriptor *VAR_9, u8 *VAR_10)
{
 PT00_DESCRIPTOR VAR_11;
 PT01_DESCRIPTOR VAR_12;
 u16 VAR_13, VAR_14, VAR_15;
 u8 VAR_16, VAR_17;
 unsigned char VAR_18 = 0, VAR_19 = 0;
 PT00_DESCRIPTOR VAR_20;
 u16 VAR_21 = 0;
 unsigned char VAR_22 = 0;

 VAR_15 = VAR_9->FragmentThreshold + 32 + 3;
 VAR_15 &= ~0x03;
 VAR_16 = VAR_9->TxRate >> 1;
 if (!VAR_16)
  VAR_16 = 1;

 VAR_11 = (PT00_DESCRIPTOR)VAR_10;
 VAR_12 = (PT01_DESCRIPTOR)(VAR_10+4);
 VAR_20 = (PT00_DESCRIPTOR)(VAR_10+VAR_15);

 if( VAR_10[ VAR_3+8 ] & 0x1 )
  VAR_22 = 1;




 if (!VAR_22)
 {




  VAR_21 = (u16)VAR_11->T00_frame_length;
  VAR_21 += 4;

  if( VAR_21 >= VAR_1 )
   VAR_19 = 1;
  else
  {
   if( VAR_12->T01_modulation_type )
   {
    if( VAR_0 )
     VAR_18 = 1;
   }
  }
 }

 if( VAR_19 || VAR_18 )
 {
  if( VAR_12->T01_modulation_type)
  {




   VAR_13 = 2*VAR_2 +
        2*VAR_5 +
        ((VAR_21*8 + 22 + VAR_16*4 - 1)/(VAR_16*4))*VAR_7 +
        ((112 + 22 + 95)/96)*VAR_7;
  }
  else
  {




   if( VAR_12->T01_plcp_header_length )
    VAR_13 = VAR_4*2;
   else
    VAR_13 = VAR_6*2;

   VAR_13 += ( ((VAR_21 + 14)*8 + VAR_16-1) / VAR_16 +
      VAR_2*2 );
  }

  if( VAR_19 )
  {
   if( VAR_12->T01_modulation_type )
   {



    VAR_13 += (VAR_2 +
        VAR_5 +
        ((112 + 22 + 95)/96)*VAR_7);
   }
   else
   {



    if( VAR_12->T01_plcp_header_length )
     VAR_13 += VAR_4;
    else
     VAR_13 += VAR_6;

    VAR_13 += ( ((112 + VAR_16-1) / VAR_16) + VAR_2 );
   }
  }


  VAR_12->T01_add_rts = VAR_19 ? 1 : 0;
  VAR_12->T01_add_cts = VAR_18 ? 1 : 0;
  VAR_12->T01_rts_cts_duration = VAR_13;
 }




 if( VAR_22 )
  VAR_13 = 0;
 else
 {
  for( VAR_17=VAR_9->FragmentCount-1; VAR_17>0; VAR_17-- )
  {
   VAR_14 = (u16)VAR_20->T00_frame_length;
   VAR_14 += 4;

   if( VAR_12->T01_modulation_type )
   {




    VAR_13 = VAR_5 * 3;
    VAR_13 += (((VAR_14*8 + 22 + VAR_16*4 - 1)/(VAR_16*4)) * VAR_7 +
       (((2*14)*8 + 22 + 95)/96)*VAR_7 +
       VAR_2*3);
   }
   else
   {





    if( VAR_12->T01_plcp_header_length )
     VAR_13 = VAR_4*3;
    else
     VAR_13 = VAR_6*3;

    VAR_13 += ( ((VAR_14 + (2*14))*8 + VAR_16-1) / VAR_16 +
       VAR_2*3 );
   }

   ((u16 *)VAR_10)[5] = FUNC_0(VAR_13);


   VAR_20->value = FUNC_1(VAR_20->value);
   VAR_12->value = FUNC_1( VAR_12->value );


   VAR_10 += VAR_15;
   VAR_12 = (PT01_DESCRIPTOR)(VAR_10+4);
   if (VAR_17 != 1)
    VAR_20 = (PT00_DESCRIPTOR)(VAR_10+VAR_15);
  }




  if( VAR_12->T01_modulation_type )
  {




   VAR_13 = VAR_5;

   VAR_13 += (((112 + 22 + 95)/96)*VAR_7 + VAR_2 );
  }
  else
  {




   if( VAR_12->T01_plcp_header_length )
    VAR_13 = VAR_4;
   else
    VAR_13 = VAR_6;

   VAR_13 += ( (112 + VAR_16-1)/VAR_16 + VAR_2 );
  }
 }

 ((u16 *)VAR_10)[5] = FUNC_0(VAR_13);
 VAR_11->value = FUNC_1(VAR_11->value);
 VAR_12->value = FUNC_1(VAR_12->value);


}
