
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* dev; } ;
typedef TYPE_3__ spi_t ;
struct TYPE_5__ {int val; } ;
struct TYPE_6__ {TYPE_1__ pin; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_1, uint8_t VAR_2)
{
    if(!VAR_1) {
        return;
    }
    FUNC_0();
    VAR_1->dev->pin.val |= (VAR_2 & VAR_0);
    FUNC_1();
}
