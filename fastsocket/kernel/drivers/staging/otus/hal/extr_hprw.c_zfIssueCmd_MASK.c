
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct zsHpPriv {int cmdPending; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

u16_t FUNC_8(zdev_t* VAR_2, u32_t* VAR_3, u16_t VAR_4, u16_t VAR_5, u8_t* VAR_6)
{
    u16_t VAR_7 = 0;
    u16_t VAR_8;
    struct zsHpPriv* VAR_9;

    FUNC_6(VAR_2);
    VAR_9=VAR_1->hpPrivate;

    FUNC_4();

    FUNC_3(VAR_0, "cmdLen=", VAR_4);

    FUNC_5(VAR_2);
    if (VAR_9->cmdPending == 0)
    {
        VAR_9->cmdPending = 1;
        VAR_7 = 1;
    }
    VAR_8 = FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

    FUNC_7(VAR_2);

    if (VAR_8 != 0)
    {
        return 1;
    }

    if (VAR_7 == 1)
    {
        FUNC_0(VAR_2, VAR_3, VAR_4);
    }

    return 0;
}
