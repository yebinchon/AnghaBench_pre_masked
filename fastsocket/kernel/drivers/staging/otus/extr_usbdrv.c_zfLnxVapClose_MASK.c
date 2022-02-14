
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16_t ;
struct net_device {int name; } ;
struct TYPE_2__ {int openFlag; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,int,...) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (struct net_device*) ;

int FUNC_3(struct net_device *VAR_1)
{
    u16_t VAR_2;

    VAR_2 = FUNC_2(VAR_1);

    if (VAR_2 != 0xffff)
    {
        if (VAR_0[VAR_2].openFlag == 1)
        {
            FUNC_1("zfLnxVapClose: device name=%s, vap ID=%d\n", VAR_1->name, VAR_2);

            FUNC_0(VAR_1);
            VAR_0[VAR_2].openFlag = 0;
        }
        else
        {
            FUNC_1("VAP port was not opened : vap ID=%d\n", VAR_2);
        }
    }
 return 0;
}
