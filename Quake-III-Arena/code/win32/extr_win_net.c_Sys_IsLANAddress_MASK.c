
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_3__ {scalar_t__ type; int* ip; } ;
typedef TYPE_1__ netadr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

qboolean FUNC_0( netadr_t VAR_7 ) {
 int VAR_8;

 if( VAR_7.type == VAR_2 ) {
  return VAR_6;
 }

 if( VAR_7.type == VAR_1 ) {
  return VAR_6;
 }

 if( VAR_7.type != VAR_0 ) {
  return VAR_5;
 }




 if( VAR_7.ip[0] == 127 && VAR_7.ip[1] == 0 && VAR_7.ip[2] == 0 && VAR_7.ip[3] == 1 ) {
  return VAR_6;
 }


 if( (VAR_7.ip[0] & 0x80) == 0x00 ) {
  for ( VAR_8 = 0 ; VAR_8 < VAR_4 ; VAR_8++ ) {
   if( VAR_7.ip[0] == VAR_3[VAR_8][0] ) {
    return VAR_6;
   }
  }

  return VAR_5;
 }


 if( (VAR_7.ip[0] & 0xc0) == 0x80 ) {
  for ( VAR_8 = 0 ; VAR_8 < VAR_4 ; VAR_8++ ) {
   if( VAR_7.ip[0] == VAR_3[VAR_8][0] && VAR_7.ip[1] == VAR_3[VAR_8][1] ) {
    return VAR_6;
   }

   if( VAR_7.ip[0] == 172 && VAR_3[VAR_8][0] == 172 && (VAR_7.ip[1] & 0xf0) == 16 && (VAR_3[VAR_8][1] & 0xf0) == 16 ) {
    return VAR_6;
   }
  }
  return VAR_5;
 }


 for ( VAR_8 = 0 ; VAR_8 < VAR_4 ; VAR_8++ ) {
  if( VAR_7.ip[0] == VAR_3[VAR_8][0] && VAR_7.ip[1] == VAR_3[VAR_8][1] && VAR_7.ip[2] == VAR_3[VAR_8][2] ) {
   return VAR_6;
  }

  if( VAR_7.ip[0] == 192 && VAR_3[VAR_8][0] == 192 && VAR_7.ip[1] == 168 && VAR_3[VAR_8][1] == 168 ) {
   return VAR_6;
  }
 }
 return VAR_5;
}
