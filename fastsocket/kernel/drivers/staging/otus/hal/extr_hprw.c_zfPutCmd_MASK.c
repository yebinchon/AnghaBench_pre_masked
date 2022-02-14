
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
struct zsHpPriv {int cmdTail; int cmdHead; TYPE_1__* cmdQ; } ;
struct TYPE_4__ {struct zsHpPriv* hpPrivate; } ;
struct TYPE_3__ {int cmdLen; int src; int * cmd; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;

u16_t FUNC_3(zdev_t* VAR_3, u32_t* VAR_4, u16_t VAR_5, u16_t VAR_6, u8_t* VAR_7)
{
    u16_t VAR_8;
    struct zsHpPriv* VAR_9;

    FUNC_2(VAR_3);
    VAR_9=VAR_2->hpPrivate;


    FUNC_0(VAR_5 <= VAR_1);


    if (((VAR_9->cmdTail+1) & (VAR_0-1)) == VAR_9->cmdHead ) {
        FUNC_1("CMD queue full!!");
        return 0;
    }

    VAR_9->cmdQ[VAR_9->cmdTail].cmdLen = VAR_5;
    VAR_9->cmdQ[VAR_9->cmdTail].src = VAR_6;
    VAR_9->cmdQ[VAR_9->cmdTail].buf = VAR_7;
    for (VAR_8=0; VAR_8<(VAR_5>>2); VAR_8++)
    {
        VAR_9->cmdQ[VAR_9->cmdTail].cmd[VAR_8] = VAR_4[VAR_8];
    }

    VAR_9->cmdTail = (VAR_9->cmdTail+1) & (VAR_0-1);

    return 0;
}
