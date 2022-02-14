
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_13__ {TYPE_9__* dev; } ;
typedef TYPE_10__ spi_t ;
struct TYPE_21__ {scalar_t__ val; } ;
struct TYPE_20__ {scalar_t__ val; } ;
struct TYPE_19__ {scalar_t__ val; } ;
struct TYPE_18__ {scalar_t__ val; } ;
struct TYPE_17__ {scalar_t__ val; } ;
struct TYPE_16__ {scalar_t__ val; } ;
struct TYPE_15__ {scalar_t__ val; } ;
struct TYPE_14__ {scalar_t__ slave_mode; scalar_t__ trans_done; } ;
struct TYPE_22__ {TYPE_8__ clock; TYPE_7__ ctrl2; TYPE_6__ ctrl1; TYPE_5__ ctrl; TYPE_4__ user1; TYPE_3__ user; TYPE_2__ pin; TYPE_1__ slave; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (TYPE_10__*,int ) ;

void FUNC_3(spi_t * VAR_1)
{
    if(!VAR_1) {
        return;
    }
    FUNC_0();
    VAR_1->dev->slave.trans_done = 0;
    VAR_1->dev->slave.slave_mode = 0;
    VAR_1->dev->pin.val = 0;
    VAR_1->dev->user.val = 0;
    VAR_1->dev->user1.val = 0;
    VAR_1->dev->ctrl.val = 0;
    VAR_1->dev->ctrl1.val = 0;
    VAR_1->dev->ctrl2.val = 0;
    VAR_1->dev->clock.val = 0;
    FUNC_1();
    FUNC_2(VAR_1, VAR_0);
}
