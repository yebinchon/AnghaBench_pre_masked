
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ deviceSupportsGamma; } ;
struct TYPE_3__ {int hDC; } ;
typedef int HDC ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_4 (int ,int ) ;
 int VAR_2 ;

void FUNC_5( void )
{
 if ( VAR_0.deviceSupportsGamma )
 {
  if ( &FUNC_4 )
  {
   FUNC_4( VAR_1.hDC, VAR_2 );
  }
  else
  {
   HDC VAR_3;

   VAR_3 = FUNC_0( FUNC_1() );
   FUNC_3( VAR_3, VAR_2 );
   FUNC_2( FUNC_1(), VAR_3 );
  }
 }
}
