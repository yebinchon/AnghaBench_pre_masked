
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
struct TYPE_3__ {int uapsdQ; } ;
struct TYPE_4__ {scalar_t__ wlanMode; int tick; TYPE_1__ ap; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int,int) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_2)
{
    u32_t VAR_3;
    FUNC_2(VAR_2);


    if (VAR_1->wlanMode == VAR_0)
    {


        VAR_3 = VAR_1->tick & 0x7f;
        if (VAR_3 == 0x0)
        {
            FUNC_0(VAR_2);
        }
        else if (VAR_3 == 0x1f)
        {
            FUNC_1(VAR_2, VAR_1->ap.uapsdQ, VAR_1->tick, 10000);
        }


        else if (VAR_3 == 0x3f)
        {

        }
    }
}
