
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {struct net_device* priv; } ;
struct net_device {scalar_t__* dev_addr; } ;
typedef int hw_info_t ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;

__attribute__((used)) static hw_info_t *FUNC_0(struct pcmcia_device *VAR_2)
{
    struct net_device *VAR_3 = VAR_2->priv;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
 if (VAR_1[VAR_4] != 0) break;
    if (VAR_4 == 6)
 return ((void*)0);

    for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
 VAR_3->dev_addr[VAR_4] = VAR_1[VAR_4];

    return &VAR_0;
}
