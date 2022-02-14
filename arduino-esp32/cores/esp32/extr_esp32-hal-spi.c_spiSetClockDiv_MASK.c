
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* dev; } ;
typedef TYPE_3__ spi_t ;
struct TYPE_5__ {int val; } ;
struct TYPE_6__ {TYPE_1__ clock; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_0, uint32_t VAR_1)
{
    if(!VAR_0) {
        return;
    }
    FUNC_0();
    VAR_0->dev->clock.val = VAR_1;
    FUNC_1();
}
