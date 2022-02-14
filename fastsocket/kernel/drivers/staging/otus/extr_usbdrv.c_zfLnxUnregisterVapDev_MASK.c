
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32_t ;
typedef size_t u16_t ;
struct net_device {int dummy; } ;
struct TYPE_4__ {size_t name; } ;
struct TYPE_3__ {TYPE_2__* dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* VAR_1 ;

int FUNC_2(struct net_device* VAR_2, u16_t VAR_3)
{
    int VAR_4 = 0;

    FUNC_0("Unregister VAP dev : %s\n", VAR_1[VAR_3].dev->name);

    if(VAR_1[VAR_3].dev != ((void*)0)) {
        FUNC_0("Unregister vap dev=%x\n", (u32_t)VAR_1[VAR_3].dev);


        FUNC_1(VAR_1[VAR_3].dev);

        FUNC_0("VAP unregister_netdevice\n");
        VAR_1[VAR_3].dev = ((void*)0);
    }
    else {
        FUNC_0("unregister VAP device: %d fail\n", VAR_3);
        VAR_4 = -VAR_0;
    }

    return VAR_4;
}
