
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sfxHandle_t ;
struct TYPE_5__ {int (* callback ) (TYPE_2__*,int ) ;} ;
struct TYPE_6__ {TYPE_1__ generic; int curvalue; int numitems; } ;
typedef TYPE_2__ menulist_s ;







 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static sfxHandle_t FUNC_1( menulist_s *VAR_3, int VAR_4 )
{
 sfxHandle_t VAR_5;

 VAR_5 = 0;
 switch (VAR_4)
 {
  case 129:
   VAR_3->curvalue++;
   if (VAR_3->curvalue >= VAR_3->numitems)
    VAR_3->curvalue = 0;
   VAR_5 = VAR_2;
   break;

  case 132:
  case 130:
   if (VAR_3->curvalue > 0)
   {
    VAR_3->curvalue--;
    VAR_5 = VAR_2;
   }
   else
    VAR_5 = VAR_1;
   break;

  case 131:
  case 128:
   if (VAR_3->curvalue < VAR_3->numitems-1)
   {
    VAR_3->curvalue++;
    VAR_5 = VAR_2;
   }
   else
    VAR_5 = VAR_1;
   break;
 }

 if ( VAR_5 && VAR_3->generic.callback )
  VAR_3->generic.callback( VAR_3, VAR_0 );

 return (VAR_5);
}
