
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int open; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ netwave_private ;


 int FUNC_0 (int,char*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_0) {
    netwave_private *VAR_1 = FUNC_1(VAR_0);
    struct pcmcia_device *VAR_2 = VAR_1->p_dev;

    FUNC_0(1, "netwave_close: finishing.\n");

    VAR_2->open--;
    FUNC_2(VAR_0);

    return 0;
}
