
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int jiffies; int status; int data; } ;
struct TYPE_8__ {scalar_t__ expires; int function; } ;
struct TYPE_7__ {int func; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ) ;
 TYPE_2__ VAR_6 ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 TYPE_3__* VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,...) ;
 int * VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(void)
{
 int VAR_20;

 FUNC_1("\n");
 FUNC_1("floppy driver state\n");
 FUNC_1("-------------------\n");
 FUNC_1("now=%lu last interrupt=%lu diff=%lu last called handler=%p\n",
        VAR_11, VAR_10, VAR_11 - VAR_10,
        VAR_12);
 FUNC_1("status=%x\n", FUNC_0(VAR_0));
 FUNC_1("fdc_busy=%lu\n", VAR_8);
 if (VAR_5)
  FUNC_1("do_floppy=%p\n", VAR_5);
 if (FUNC_3(&VAR_9))
  FUNC_1("floppy_work.func=%p\n", VAR_9.func);
 if (FUNC_2(&VAR_7))
  FUNC_1("fd_timer.function=%p\n", VAR_7.function);
 if (FUNC_2(&VAR_6)) {
  FUNC_1("timer_function=%p\n", VAR_6.function);
  FUNC_1("expires=%lu\n", VAR_6.expires - VAR_11);
  FUNC_1("now=%lu\n", VAR_11);
 }
 FUNC_1("cont=%p\n", VAR_3);
 FUNC_1("current_req=%p\n", VAR_4);
 FUNC_1("command_status=%d\n", VAR_2);
 FUNC_1("\n");
}
