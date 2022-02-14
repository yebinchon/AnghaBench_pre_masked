
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
typedef TYPE_1__ menucommon_s ;
struct TYPE_4__ {int changesmade; int section; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 () ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;

__attribute__((used)) static void FUNC_4( void* VAR_9, int VAR_10 )
{
 switch (((menucommon_s*)VAR_9)->id)
 {
  case 131:
   if (VAR_10 == VAR_6)
   {
    VAR_8.section = VAR_2;
    FUNC_1();
   }
   break;

  case 134:
   if (VAR_10 == VAR_6)
   {
    VAR_8.section = VAR_0;
    FUNC_1();
   }
   break;

  case 128:
   if (VAR_10 == VAR_6)
   {
    VAR_8.section = VAR_3;
    FUNC_1();
   }
   break;

  case 133:
   if (VAR_10 == VAR_6)
   {
    VAR_8.section = VAR_1;
    FUNC_1();
   }
   break;

  case 140:
   if (VAR_10 == VAR_6)
   {
    FUNC_2( "SET TO DEFAULTS?", VAR_5, VAR_4 );
   }
   break;

  case 141:
   if (VAR_10 == VAR_6)
   {
    if (VAR_8.changesmade)
     FUNC_0();
    FUNC_3();
   }
   break;

  case 130:
   if (VAR_10 == VAR_6)
   {
    FUNC_0();
    FUNC_3();
   }
   break;

  case 139:
   if (VAR_10 == VAR_6)
   {
    FUNC_3();
   }
   break;

  case 138:
  case 132:
  case 137:
  case 129:
  case 143:
  case 142:
  case 136:
  case 135:
   if (VAR_10 == VAR_6)
   {
    VAR_8.changesmade = VAR_7;
   }
   break;
 }
}
