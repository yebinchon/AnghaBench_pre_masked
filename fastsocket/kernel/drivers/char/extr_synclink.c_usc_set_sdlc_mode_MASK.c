
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int flags; scalar_t__ mode; int preamble; int addr_filter; int encoding; int crc_type; int clock_speed; int preamble_length; } ;
struct mgsl_struct {int cmr_value; scalar_t__ bus_type; int tcsr_value; int mbre_bit; TYPE_1__ params; int io_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;






 int VAR_37 ;

 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 scalar_t__ VAR_67 ;
 scalar_t__ VAR_68 ;
 int VAR_69 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_2 (struct mgsl_struct*,int ) ;
 int FUNC_3 (struct mgsl_struct*,scalar_t__) ;
 int FUNC_4 (struct mgsl_struct*) ;
 int FUNC_5 (struct mgsl_struct*,int ) ;
 int FUNC_6 (struct mgsl_struct*,int ) ;
 int FUNC_7 (struct mgsl_struct*,int ,int) ;
 int FUNC_8 (struct mgsl_struct*,int ,int) ;
 int FUNC_9 (struct mgsl_struct*,int ) ;
 int FUNC_10 (struct mgsl_struct*,int ) ;
 int FUNC_11 (struct mgsl_struct*,int ) ;
 int FUNC_12 (struct mgsl_struct*,int ) ;
 int FUNC_13 (struct mgsl_struct*) ;
 int FUNC_14 (struct mgsl_struct*) ;
 int FUNC_15 (struct mgsl_struct*) ;

__attribute__((used)) static void FUNC_16( struct mgsl_struct *VAR_70 )
{
 u16 VAR_71;
 bool VAR_72;
 FUNC_8(VAR_70,VAR_64,0x1f);
 VAR_71=FUNC_6(VAR_70,VAR_65);
 VAR_72 = (VAR_71 == VAR_39);

  if ( VAR_70->params.flags & VAR_26 )
  {
     VAR_71 = 0x8e06;





  }
  else
  {
  if (VAR_70->params.mode == VAR_43) {
   VAR_71 = 0x0001;

   FUNC_8( VAR_70, VAR_38,
    (unsigned short)((FUNC_6(VAR_70, VAR_38) & ~(VAR_4|VAR_3)) | VAR_3));
   VAR_71 |= 0x0400;
  }
  else {

  VAR_71 = 0x0606;

  if ( VAR_70->params.flags & VAR_34 )
   VAR_71 |= VAR_5;
  else if ( VAR_70->params.flags & VAR_36 )
   VAR_71 |= VAR_6;
  else if ( VAR_70->params.flags & VAR_35 )
   VAR_71 |= VAR_6 + VAR_5;
  }

  if ( VAR_70->params.preamble != VAR_37 )
   VAR_71 |= VAR_4;
 }

 if ( VAR_70->params.mode == VAR_42 &&
  (VAR_70->params.flags & VAR_30) )
  VAR_71 |= VAR_3;

 if ( VAR_70->params.addr_filter != 0xff )
 {

  FUNC_8( VAR_70, VAR_54, VAR_70->params.addr_filter );
  VAR_71 |= VAR_8;
 }

 FUNC_8( VAR_70, VAR_15, VAR_71 );
 VAR_70->cmr_value = VAR_71;
 VAR_71 = 0x0500;

 switch ( VAR_70->params.encoding ) {
 case 137: VAR_71 |= VAR_4; break;
 case 136: VAR_71 |= VAR_5; break;
 case 135: VAR_71 |= VAR_5 + VAR_4; break;
 case 141: VAR_71 |= VAR_6; break;
 case 140: VAR_71 |= VAR_6 + VAR_4; break;
 case 142: VAR_71 |= VAR_6 + VAR_5; break;
 case 139: VAR_71 |= VAR_6 + VAR_5 + VAR_4; break;
 }

 if ( (VAR_70->params.crc_type & VAR_22) == VAR_20 )
  VAR_71 |= VAR_10;
 else if ( (VAR_70->params.crc_type & VAR_22) == VAR_21 )
  VAR_71 |= ( VAR_3 | VAR_1 | VAR_10 );

 FUNC_8( VAR_70, VAR_53, VAR_71 );
 FUNC_8( VAR_70, VAR_46, VAR_47 );

 FUNC_9( VAR_70, VAR_48 );
 VAR_71 = FUNC_6( VAR_70, VAR_52 ) & 0xc0;

 if ( VAR_70->bus_type == VAR_41 )
  FUNC_8( VAR_70, VAR_52, (u16)(0x030a | VAR_71) );
 else
  FUNC_8( VAR_70, VAR_52, (u16)(0x140a | VAR_71) );



 FUNC_11( VAR_70, VAR_55 );
 FUNC_1( VAR_70, VAR_51 );
 VAR_71 = 0x0400;

 switch ( VAR_70->params.encoding ) {
 case 137: VAR_71 |= VAR_4; break;
 case 136: VAR_71 |= VAR_5; break;
 case 135: VAR_71 |= VAR_5 + VAR_4; break;
 case 141: VAR_71 |= VAR_6; break;
 case 140: VAR_71 |= VAR_6 + VAR_4; break;
 case 142: VAR_71 |= VAR_6 + VAR_5; break;
 case 139: VAR_71 |= VAR_6 + VAR_5 + VAR_4; break;
 }

 if ( (VAR_70->params.crc_type & VAR_22) == VAR_20 )
  VAR_71 |= VAR_10 + VAR_9;
 else if ( (VAR_70->params.crc_type & VAR_22) == VAR_21 )
  VAR_71 |= ( VAR_3 | VAR_1 | VAR_10 | VAR_9);

 FUNC_8( VAR_70, VAR_66, VAR_71 );

 FUNC_13( VAR_70 );


 FUNC_10( VAR_70, VAR_61 );
 if ( VAR_70->bus_type == VAR_41 )
  FUNC_8( VAR_70, VAR_63, 0x0736 );
 else
  FUNC_8( VAR_70, VAR_63, 0x1436 );

 FUNC_12( VAR_70, VAR_69 );
 FUNC_1( VAR_70, VAR_68 );
 VAR_70->tcsr_value = 0;

 if ( !VAR_72 )
  VAR_70->tcsr_value |= VAR_60;

 FUNC_8( VAR_70, VAR_59, VAR_70->tcsr_value );
 VAR_71 = 0x0f40;

 if ( VAR_70->params.flags & VAR_28 )
  VAR_71 |= 0x0003;
 else if ( VAR_70->params.flags & VAR_27 )
  VAR_71 |= 0x0004;
  else if ( VAR_70->params.flags & VAR_29)
   VAR_71 |= 0x0006;
 else
  VAR_71 |= 0x0007;

 if ( VAR_70->params.flags & VAR_32 )
  VAR_71 |= 0x0018;
 else if ( VAR_70->params.flags & VAR_31 )
  VAR_71 |= 0x0020;
  else if ( VAR_70->params.flags & VAR_33)
   VAR_71 |= 0x0038;
 else
  VAR_71 |= 0x0030;

 FUNC_8( VAR_70, VAR_14, VAR_71 );
 VAR_71 = 0x0000;

 if ( VAR_70->params.flags & (VAR_28 + VAR_32) ) {
  u32 VAR_73;
  u32 VAR_74;
  u16 VAR_75;




  if ( VAR_70->bus_type == VAR_41 )
   VAR_73 = 11059200;
  else
   VAR_73 = 14745600;

  if ( VAR_70->params.flags & VAR_24 ) {
   VAR_74 = 16;
   VAR_71 |= VAR_1;
  }
  else if ( VAR_70->params.flags & VAR_25 ) {
   VAR_74 = 8;
   VAR_71 |= VAR_2;
  }
  else
   VAR_74 = 32;
   if ( VAR_70->params.clock_speed )
   {
   VAR_75 = (u16)((VAR_73/VAR_74)/VAR_70->params.clock_speed);
   if ( !((((VAR_73/VAR_74) % VAR_70->params.clock_speed) * 2)
          / VAR_70->params.clock_speed) )
    VAR_75--;
   }
   else
    VAR_75 = -1;



  FUNC_8( VAR_70, VAR_58, VAR_75 );

  VAR_71 |= VAR_8;

  switch ( VAR_70->params.encoding ) {
  case 138:
  case 137:
  case 136:
  case 135: VAR_71 |= VAR_9; break;
  case 141:
  case 140: VAR_71 |= VAR_10; break;
  case 142:
  case 139: VAR_71 |= VAR_10 + VAR_9; break;
  }
 }

 FUNC_8( VAR_70, VAR_19, VAR_71 );
 FUNC_8( VAR_70, VAR_12, 0x1020 );


 if ( VAR_70->params.flags & VAR_23 ) {
  FUNC_8( VAR_70, VAR_56,
       (u16)(FUNC_6(VAR_70,VAR_56) | VAR_57) );
 }



 FUNC_4( VAR_70 );

 FUNC_1( VAR_70, VAR_51 + VAR_50 +
    VAR_68 + VAR_67 + VAR_44);


 FUNC_8(VAR_70, VAR_56, (u16)(FUNC_6(VAR_70,VAR_56) | VAR_7));
 FUNC_3(VAR_70, VAR_44);

 VAR_70->mbre_bit = 0;
 FUNC_0( 0, VAR_70->io_base );
 FUNC_2( VAR_70, VAR_18 );
 VAR_70->mbre_bit = VAR_9;
 FUNC_0( VAR_9, VAR_70->io_base );

 if (VAR_70->bus_type == VAR_40) {


  FUNC_8(VAR_70, VAR_45, (u16)((FUNC_6(VAR_70, VAR_45) | VAR_6) & ~VAR_5));
 }
 if ( VAR_70->bus_type == VAR_41 ) {

  FUNC_7( VAR_70, VAR_16, 0xa00b );
 }
 else
  FUNC_7( VAR_70, VAR_16, 0x800b );
 FUNC_7( VAR_70, VAR_49, 0xf200 );
 FUNC_7( VAR_70, VAR_62, 0xf200 );
 FUNC_7( VAR_70, VAR_17, 0x9000 );

 FUNC_5( VAR_70, VAR_49 );
 FUNC_5( VAR_70, VAR_62 );
 FUNC_7( VAR_70, VAR_13, 0x0303 );
 VAR_71 = 0x8080;

 switch ( VAR_70->params.preamble_length ) {
 case 134: VAR_71 |= VAR_1; break;
 case 133: VAR_71 |= VAR_2; break;
 case 132: VAR_71 |= VAR_2 + VAR_1; break;
 }

 switch ( VAR_70->params.preamble ) {
 case 129: VAR_71 |= VAR_9 + VAR_3; break;
 case 128: VAR_71 |= VAR_9; break;
 case 130: VAR_71 |= VAR_10; break;
 case 131: VAR_71 |= VAR_10 + VAR_9; break;
 }

 FUNC_8( VAR_70, VAR_11, VAR_71 );
 if ( VAR_70->bus_type == VAR_41 ) {

  FUNC_7( VAR_70, VAR_0, 0x0000 );
 }
 else
  FUNC_7( VAR_70, VAR_0, 0x2000 );

 FUNC_15(VAR_70);
 FUNC_14(VAR_70);

}
