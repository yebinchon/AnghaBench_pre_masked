
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u64_t ;
typedef int u32_t ;
struct zsHpPriv {int camRollCallTable; } ;
struct TYPE_2__ {struct zsHpPriv* hpPrivate; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_3)
{
    struct zsHpPriv* VAR_4;

    FUNC_2(VAR_3);
    VAR_4=VAR_2->hpPrivate;

    if (VAR_4->camRollCallTable != (u64_t) 0)
    {
        FUNC_0(VAR_3, VAR_1, (u32_t)(VAR_4->camRollCallTable & 0xffffffff));
        FUNC_0(VAR_3, VAR_0, (u32_t)((VAR_4->camRollCallTable >> 32) & 0xffffffff));
        FUNC_1(VAR_3);
    }
}
