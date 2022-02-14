
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* dev; } ;
typedef TYPE_3__ spi_t ;
struct TYPE_5__ {int cs_setup; int cs_hold; } ;
struct TYPE_6__ {TYPE_1__ user; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_0)
{
    if(!VAR_0) {
        return;
    }
    FUNC_0();
    VAR_0->dev->user.cs_setup = 1;
    VAR_0->dev->user.cs_hold = 1;
    FUNC_1();
}
