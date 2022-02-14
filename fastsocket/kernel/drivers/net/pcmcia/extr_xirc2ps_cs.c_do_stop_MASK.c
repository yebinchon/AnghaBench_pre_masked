
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcmcia_device {int open; } ;
struct net_device {unsigned int base_addr; } ;
struct TYPE_3__ {struct pcmcia_device* p_dev; } ;
typedef TYPE_1__ local_info_t ;


 int FUNC_0 (int ,char*,struct net_device*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int
FUNC_5(struct net_device *VAR_4)
{
    unsigned int VAR_5 = VAR_4->base_addr;
    local_info_t *VAR_6 = FUNC_3(VAR_4);
    struct pcmcia_device *VAR_7 = VAR_6->p_dev;

    FUNC_0(0, "do_stop(%p)\n", VAR_4);

    if (!VAR_7)
 return -VAR_0;

    FUNC_4(VAR_4);

    FUNC_2(0);
    FUNC_1(VAR_3, 0);
    FUNC_2(0x01);
    FUNC_1(VAR_1, 0x00);
    FUNC_2(4);
    FUNC_1(VAR_2, 0);
    FUNC_2(0);

    VAR_7->open--;
    return 0;
}
