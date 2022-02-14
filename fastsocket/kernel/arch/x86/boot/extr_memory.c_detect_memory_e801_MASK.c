
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct biosregs {int ax; int eflags; int cx; int dx; int bx; } ;
struct TYPE_2__ {int alt_mem_k; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (struct biosregs*) ;
 int FUNC_1 (int,struct biosregs*,struct biosregs*) ;

__attribute__((used)) static int FUNC_2(void)
{
 struct biosregs VAR_2, VAR_3;

 FUNC_0(&VAR_2);
 VAR_2.ax = 0xe801;
 FUNC_1(0x15, &VAR_2, &VAR_3);

 if (VAR_3.eflags & VAR_0)
  return -1;


 if (VAR_3.cx || VAR_3.dx) {
  VAR_3.ax = VAR_3.cx;
  VAR_3.bx = VAR_3.dx;
 }

 if (VAR_3.ax > 15*1024) {
  return -1;
 } else if (VAR_3.ax == 15*1024) {
  VAR_1.alt_mem_k = (VAR_3.dx << 6) + VAR_3.ax;
 } else {







  VAR_1.alt_mem_k = VAR_3.ax;
 }

 return 0;
}
