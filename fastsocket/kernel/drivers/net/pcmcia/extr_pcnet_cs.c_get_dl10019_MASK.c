
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct pcmcia_device {struct net_device* priv; } ;
struct net_device {scalar_t__ base_addr; scalar_t__* dev_addr; } ;
typedef int hw_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static hw_info_t *FUNC_2(struct pcmcia_device *VAR_2)
{
    struct net_device *VAR_3 = VAR_2->priv;
    int VAR_4;
    u_char VAR_5;

    for (VAR_5 = 0, VAR_4 = 0x14; VAR_4 < 0x1c; VAR_4++)
 VAR_5 += FUNC_1(VAR_3->base_addr + VAR_4);
    if (VAR_5 != 0xff)
 return ((void*)0);
    for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
 VAR_3->dev_addr[VAR_4] = FUNC_1(VAR_3->base_addr + 0x14 + VAR_4);
    VAR_4 = FUNC_0(VAR_3->base_addr + 0x1f);
    return ((VAR_4 == 0x91)||(VAR_4 == 0x99)) ? &VAR_1 : &VAR_0;
}
