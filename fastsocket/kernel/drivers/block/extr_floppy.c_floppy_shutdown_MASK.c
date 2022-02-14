
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int reset; } ;
struct TYPE_3__ {int (* redo ) () ;int (* done ) (int ) ;} ;


 int FUNC_0 (char*) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_3)
{
 unsigned long VAR_4;

 if (!VAR_2)
  FUNC_9();
 FUNC_1();

 FUNC_4();

 VAR_4 = FUNC_2();
 FUNC_3();
 FUNC_8(VAR_4);



 if (!VAR_2)
  FUNC_0("floppy timeout called\n");
 VAR_0->reset = 1;
 if (VAR_1) {
  VAR_1->done(0);
  VAR_1->redo();
 } else {
  FUNC_6("no cont in shutdown!\n");
  FUNC_7();
 }
 FUNC_5("floppy shutdown");
}
