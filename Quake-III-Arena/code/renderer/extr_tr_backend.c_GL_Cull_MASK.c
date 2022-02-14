
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ isMirror; } ;
struct TYPE_6__ {TYPE_1__ viewParms; } ;
struct TYPE_5__ {int faceCulling; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 TYPE_2__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3( int VAR_7 ) {
 if ( VAR_6.faceCulling == VAR_7 ) {
  return;
 }

 VAR_6.faceCulling = VAR_7;

 if ( VAR_7 == VAR_1 )
 {
  FUNC_1( VAR_3 );
 }
 else
 {
  FUNC_2( VAR_3 );

  if ( VAR_7 == VAR_0 )
  {
   if ( VAR_5.viewParms.isMirror )
   {
    FUNC_0( VAR_4 );
   }
   else
   {
    FUNC_0( VAR_2 );
   }
  }
  else
  {
   if ( VAR_5.viewParms.isMirror )
   {
    FUNC_0( VAR_2 );
   }
   else
   {
    FUNC_0( VAR_4 );
   }
  }
 }
}
