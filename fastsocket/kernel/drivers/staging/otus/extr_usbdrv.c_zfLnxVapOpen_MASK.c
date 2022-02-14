
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16_t ;
struct net_device {int name; } ;
struct TYPE_2__ {int openFlag; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (char*,size_t,...) ;
 TYPE_1__* VAR_0 ;
 size_t FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*,char*,int) ;

int FUNC_5(struct net_device *VAR_1)
{
    u16_t VAR_2;

    VAR_2 = FUNC_2(VAR_1);

    if (VAR_0[VAR_2].openFlag == 0)
    {
        VAR_0[VAR_2].openFlag = 1;
     FUNC_1("zfLnxVapOpen : device name=%s, vap ID=%d\n", VAR_1->name, VAR_2);
     FUNC_4(VAR_1, "vap1", 4);
     FUNC_3(VAR_1);
     FUNC_0(VAR_1);
    }
    else
    {
        FUNC_1("VAP opened error : vap ID=%d\n", VAR_2);
    }
 return 0;
}
