
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct m68k_serial {size_t line; } ;
struct TYPE_6__ {unsigned short w; } ;
struct TYPE_5__ {unsigned short w; } ;
struct TYPE_7__ {TYPE_2__ utx; TYPE_1__ urx; } ;
typedef TYPE_3__ m68328_uart ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int FUNC_0 (struct m68k_serial*,unsigned short) ;
 int FUNC_1 (struct m68k_serial*) ;
 TYPE_3__* VAR_3 ;

irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct m68k_serial *VAR_6 = VAR_5;
 m68328_uart *VAR_7;
 unsigned short VAR_8;
 unsigned short VAR_9;

 VAR_7 = &VAR_3[VAR_6->line];
 VAR_8 = VAR_7->urx.w;







 FUNC_0(VAR_6, VAR_8);

 return VAR_0;
}
