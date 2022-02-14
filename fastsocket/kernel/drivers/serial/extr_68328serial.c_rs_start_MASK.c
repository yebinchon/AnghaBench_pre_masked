
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int name; scalar_t__ driver_data; } ;
struct m68k_serial {size_t line; scalar_t__ xmit_buf; scalar_t__ xmit_cnt; } ;
struct TYPE_3__ {int ustcnt; } ;
typedef TYPE_1__ m68328_uart ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct m68k_serial*,int ,char*) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_3(struct tty_struct *VAR_3)
{
 struct m68k_serial *VAR_4 = (struct m68k_serial *)VAR_3->driver_data;
 m68328_uart *VAR_5 = &VAR_2[VAR_4->line];
 unsigned long VAR_6;

 if (FUNC_2(VAR_4, VAR_3->name, "rs_start"))
  return;

 FUNC_1(VAR_6);
 if (VAR_4->xmit_cnt && VAR_4->xmit_buf && !(VAR_5->ustcnt & VAR_0)) {



  VAR_5->ustcnt |= VAR_0;

 }
 FUNC_0(VAR_6);
}
