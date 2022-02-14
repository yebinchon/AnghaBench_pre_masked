
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsHpPriv {size_t cmdTail; size_t cmdHead; TYPE_1__* cmdQ; } ;
struct TYPE_4__ {struct zsHpPriv* hpPrivate; } ;
struct TYPE_3__ {int cmdLen; int src; int * cmd; int * buf; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_2, u32_t* VAR_3, u16_t* VAR_4, u16_t* VAR_5, u8_t** VAR_6)
{
    u16_t VAR_7;
    struct zsHpPriv* VAR_8;

    FUNC_0(VAR_2);
    VAR_8=VAR_1->hpPrivate;

    if (VAR_8->cmdTail == VAR_8->cmdHead)
    {
        return 3;
    }

    *VAR_4 = VAR_8->cmdQ[VAR_8->cmdHead].cmdLen;
    *VAR_5 = VAR_8->cmdQ[VAR_8->cmdHead].src;
    *VAR_6 = VAR_8->cmdQ[VAR_8->cmdHead].buf;
    for (VAR_7=0; VAR_7<((*VAR_4)>>2); VAR_7++)
    {
        VAR_3[VAR_7] = VAR_8->cmdQ[VAR_8->cmdHead].cmd[VAR_7];
    }

    VAR_8->cmdHead = (VAR_8->cmdHead+1) & (VAR_0-1);

    return 0;
}
