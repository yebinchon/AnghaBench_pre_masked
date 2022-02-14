
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {int field; TYPE_1__ generic; } ;
typedef TYPE_2__ menufield_s ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_4 ;

sfxHandle_t FUNC_5( menufield_s* VAR_5, int* VAR_6 )
{
 int VAR_7;

 VAR_7 = *VAR_6;

 switch ( VAR_7 )
 {
  case 131:
  case 137:
  case 136:
  case 135:
  case 134:
  case 133:

   *VAR_6 = 129;
   break;

  case 129:
  case 132:
  case 138:
  case 130:
  case 128:
   break;

  default:
   if ( VAR_7 & VAR_0 )
   {
    VAR_7 &= ~VAR_0;

    if ((VAR_5->generic.flags & VAR_3) && FUNC_3( VAR_7 ))
     VAR_7 -= 'a' - 'A';
    else if ((VAR_5->generic.flags & VAR_1) && FUNC_4( VAR_7 ))
     VAR_7 -= 'A' - 'a';
    else if ((VAR_5->generic.flags & VAR_2) && FUNC_2( VAR_7 ))
     return (VAR_4);

    FUNC_0( &VAR_5->field, VAR_7);
   }
   else
    FUNC_1( &VAR_5->field, VAR_7 );
   break;
 }

 return (0);
}
