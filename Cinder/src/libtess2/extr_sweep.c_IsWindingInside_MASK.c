
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int windingRule; } ;
typedef TYPE_1__ TESStesselator ;


 int VAR_0 ;





 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1( TESStesselator *VAR_1, int VAR_2 )
{
 switch( VAR_1->windingRule ) {
  case 129:
   return (VAR_2 & 1);
  case 130:
   return (VAR_2 != 0);
  case 128:
   return (VAR_2 > 0);
  case 131:
   return (VAR_2 < 0);
  case 132:
   return (VAR_2 >= 2) || (VAR_2 <= -2);
 }

 FUNC_0( VAR_0 );


 return( VAR_0 );
}
