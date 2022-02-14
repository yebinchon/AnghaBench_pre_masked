
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int id; scalar_t__ top; scalar_t__ bottom; } ;
struct TYPE_5__ {int numitems; char const** itemnames; TYPE_1__ generic; } ;
struct TYPE_6__ {int numBots; TYPE_2__ list; scalar_t__ bots; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const** VAR_3 ;
 char const** VAR_4 ;
 TYPE_3__ VAR_5 ;

__attribute__((used)) static void FUNC_0( int VAR_6 ) {
 switch( VAR_6 ) {
 default:
 case 130:
  VAR_5.list.generic.id = VAR_6;
  VAR_5.list.numitems = VAR_5.numBots;
  VAR_5.list.itemnames = (const char **)VAR_5.bots;
   break;

 case 129:
  VAR_5.list.generic.id = VAR_6;
  VAR_5.list.numitems = VAR_0;
  VAR_5.list.itemnames = VAR_3;
  break;

 case 128:
  VAR_5.list.generic.id = VAR_6;
  VAR_5.list.numitems = VAR_1;
  VAR_5.list.itemnames = VAR_4;
  break;
 }

 VAR_5.list.generic.bottom = VAR_5.list.generic.top + VAR_5.list.numitems * VAR_2;
}
