
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
struct TYPE_3__ {int flagKeyChanging; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u32_t FUNC_6(zdev_t* VAR_1, u8_t VAR_2, u8_t VAR_3, u8_t VAR_4,
        u16_t* VAR_5, u32_t* VAR_6)
{
    u32_t VAR_7;

    FUNC_4(VAR_1);
    FUNC_2();

    FUNC_3(VAR_1);
    VAR_0->sta.flagKeyChanging++;
    FUNC_1("   zfCoreSetKey++++ ", VAR_0->sta.flagKeyChanging);
    FUNC_5(VAR_1);

    VAR_7 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
    return VAR_7;
}
