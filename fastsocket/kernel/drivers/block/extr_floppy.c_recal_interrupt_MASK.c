
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int track; int select_date; } ;
struct TYPE_6__ {int reset; } ;
struct TYPE_5__ {int (* redo ) () ;int (* error ) () ;} ;


 int FUNC_0 (int ) ;
 TYPE_4__* VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
 FUNC_2("recal interrupt:");
 if (VAR_9 != 2)
  VAR_2->reset = 1;
 else if (VAR_5 & VAR_6) {
  switch (VAR_1->track) {
  case 129:
   FUNC_2("recal interrupt need 1 recal:");




   VAR_8->error();
   VAR_8->redo();
   return;
  case 128:
   FUNC_2("recal interrupt need 2 recal:");
   FUNC_0(VAR_4);
   VAR_1->select_date = VAR_10;

  default:
   FUNC_2("recal interrupt default:");






   VAR_1->track = 129;
   break;
  }
 } else
  VAR_1->track = VAR_7;
 FUNC_3();
}
