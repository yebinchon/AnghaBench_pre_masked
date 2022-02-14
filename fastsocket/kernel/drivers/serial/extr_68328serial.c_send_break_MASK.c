
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct m68k_serial {size_t line; int port; } ;
struct TYPE_4__ {int w; } ;
struct TYPE_5__ {TYPE_1__ utx; } ;
typedef TYPE_2__ m68328_uart ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct m68k_serial * VAR_2, unsigned int VAR_3)
{
 m68328_uart *VAR_4 = &VAR_1[VAR_2->line];
        unsigned long VAR_5;
        if (!VAR_2->port)
                return;
        FUNC_1(VAR_5);





        FUNC_0(VAR_5);
}
