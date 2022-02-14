
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {scalar_t__ driver_data; } ;
struct e100_serial {int* ioport; int tx_ctrl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static int
FUNC_2(struct tty_struct *VAR_2, int VAR_3)
{
 struct e100_serial *VAR_4 = (struct e100_serial *)VAR_2->driver_data;
 unsigned long VAR_5;

 if (!VAR_4->ioport)
  return -VAR_0;

 FUNC_1(VAR_5);
 if (VAR_3 == -1) {


  VAR_4->tx_ctrl &= 0x3F;
 } else {

  VAR_4->tx_ctrl |= (0x80 | 0x40);
 }
 VAR_4->ioport[VAR_1] = VAR_4->tx_ctrl;
 FUNC_0(VAR_5);
 return 0;
}
