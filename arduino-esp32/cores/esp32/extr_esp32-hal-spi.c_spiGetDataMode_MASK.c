
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_3__* dev; } ;
typedef TYPE_4__ spi_t ;
struct TYPE_7__ {int ck_out_edge; } ;
struct TYPE_6__ {int ck_idle_edge; } ;
struct TYPE_8__ {TYPE_2__ user; TYPE_1__ pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

uint8_t FUNC_0(spi_t * VAR_4)
{
    if(!VAR_4) {
        return 0;
    }
    bool VAR_5 = VAR_4->dev->pin.ck_idle_edge;
    bool VAR_6 = VAR_4->dev->user.ck_out_edge;
    if(VAR_5) {
        if(VAR_6) {
            return VAR_2;
        }
        return VAR_3;
    }
    if(VAR_6) {
        return VAR_1;
    }
    return VAR_0;
}
