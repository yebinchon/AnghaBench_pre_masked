
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ stopped; scalar_t__ driver_data; } ;
struct e100_serial {char x_char; int line; int * ocmdadr; scalar_t__ uses_dma_out; } ;


 int FUNC_0 (int ,char*,char) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (struct e100_serial*) ;
 int FUNC_6 (struct e100_serial*) ;
 int VAR_2 ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 int FUNC_9 (struct tty_struct*) ;

__attribute__((used)) static void FUNC_10(struct tty_struct *VAR_3, char VAR_4)
{
 struct e100_serial *VAR_5 = (struct e100_serial *)VAR_3->driver_data;
 unsigned long VAR_6;
 FUNC_8(VAR_6);
 if (VAR_5->uses_dma_out) {

  *VAR_5->ocmdadr = FUNC_3(VAR_0, VAR_1, VAR_2);
  while (FUNC_2(VAR_0, VAR_1, *VAR_5->ocmdadr) !=
         FUNC_4(VAR_0, VAR_1, VAR_2));
  FUNC_5(VAR_5);
 }


 if (VAR_3->stopped)
  FUNC_9(VAR_3);


 FUNC_1(FUNC_0(VAR_5->line, "rs_send_xchar 0x%02X\n", VAR_4));
 VAR_5->x_char = VAR_4;
 FUNC_6(VAR_5);
 FUNC_7(VAR_6);
}
