
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct TYPE_5__ {scalar_t__ track; int select_date; } ;
struct TYPE_4__ {int (* redo ) () ;int (* error ) () ;} ;


 int FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (char*,...) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
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
 FUNC_2("seek interrupt:");
 if (VAR_9 != 2 || (VAR_5 & 0xF8) != 0x20) {
  FUNC_1("seek failed\n");
  VAR_1->track = VAR_4;
  VAR_8->error();
  VAR_8->redo();
  return;
 }
 if (VAR_1->track >= 0 && VAR_1->track != VAR_6 && !VAR_7) {







  FUNC_0(VAR_3);
  VAR_1->select_date = VAR_10;
 }
 VAR_1->track = VAR_6;
 FUNC_3();
}
