
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int qboolean ;







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
 int* VAR_16 ;

__attribute__((used)) static int FUNC_0 (int VAR_17)
{
 int VAR_18;
 int VAR_19;
 qboolean VAR_20;



 VAR_19 = ( VAR_17 >> 16 ) & 255;

 if ( VAR_19 > 127 )
  return 0;

 if ( VAR_17 & ( 1 << 24 ) )
 {
  VAR_20 = VAR_15;
 }
 else
 {
  VAR_20 = VAR_14;
 }

 VAR_18 = VAR_16[VAR_19];

 if ( !VAR_20 )
 {
  switch ( VAR_18 )
  {
  case 135:
   return VAR_4;
  case 128:
   return VAR_13;
  case 130:
   return VAR_9;
  case 133:
   return VAR_6;
  case 129:
   return VAR_11;
  case 136:
   return VAR_2;
  case 137:
   return VAR_1;
  case 131:
   return VAR_8;
  case 134:
   return VAR_5;
  case 138:
   return VAR_0;
  default:
   return VAR_18;
  }
 }
 else
 {
  switch ( VAR_18 )
  {
  case 132:
   return VAR_7;
  case 0x0D:
   return VAR_3;
  case 0x2F:
   return VAR_12;
  case 0xAF:
   return VAR_10;
  }
  return VAR_18;
 }
}
