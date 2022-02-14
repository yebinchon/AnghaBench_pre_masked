
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
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_1) {
    netwave_private *VAR_2 = FUNC_1(VAR_1);
    struct pcmcia_device *VAR_3 = VAR_2->p_dev;

    FUNC_0(1, "netwave_open: starting.\n");

    if (!FUNC_4(VAR_3))
 return -VAR_0;

    VAR_3->open++;

    FUNC_2(VAR_1);
    FUNC_3(VAR_1);

    return 0;
}
