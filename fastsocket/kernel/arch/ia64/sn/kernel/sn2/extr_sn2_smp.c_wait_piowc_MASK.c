
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* pio_write_status_addr; unsigned long pio_write_status_val; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static inline unsigned long FUNC_1(void)
{
 volatile unsigned long *VAR_3;
 unsigned long VAR_4, VAR_5;

 VAR_3 = VAR_2->pio_write_status_addr;
 VAR_4 = VAR_2->pio_write_status_val;
 do {
  FUNC_0();
 } while (((VAR_5 = *VAR_3) & VAR_0) != VAR_4);
 return (VAR_5 & VAR_1) != 0;
}
