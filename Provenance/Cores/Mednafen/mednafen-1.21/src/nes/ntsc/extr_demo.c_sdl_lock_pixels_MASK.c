
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pixels; int pitch; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 unsigned char* VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_2()
{
 if ( FUNC_0( VAR_2 ) < 0 )
  FUNC_1( "Couldn't lock surface" );
 VAR_0 = VAR_2->pitch;
 VAR_1 = (unsigned char*) VAR_2->pixels;
}
