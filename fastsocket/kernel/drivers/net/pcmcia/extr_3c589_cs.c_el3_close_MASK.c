
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int open; } ;
struct net_device {unsigned int base_addr; int if_port; int name; } ;
struct el3_private {int media; struct pcmcia_device* p_dev; } ;


 int FUNC_0 (int,char*,int ) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 struct el3_private* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (struct pcmcia_device*) ;
 int FUNC_8 (struct net_device*) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_8)
{
    struct el3_private *VAR_9 = FUNC_4(VAR_8);
    struct pcmcia_device *VAR_10 = VAR_9->p_dev;
    unsigned int VAR_11 = VAR_8->base_addr;

    FUNC_0(1, "%s: shutting down ethercard.\n", VAR_8->name);

    if (FUNC_7(VAR_10)) {

 FUNC_6(VAR_3, VAR_11 + VAR_0);


 FUNC_6(VAR_2, VAR_11 + VAR_0);
 FUNC_6(VAR_5, VAR_11 + VAR_0);

 if (VAR_8->if_port == 2)

     FUNC_6(VAR_4, VAR_11 + VAR_0);
 else if (VAR_8->if_port == 1) {

     FUNC_1(4);
     FUNC_6(0, VAR_11 + VAR_7);
 }


 FUNC_1(0);

 FUNC_6(0x0f00, VAR_11 + VAR_6);


 if ((FUNC_3(VAR_11+VAR_1) & 0xe000) == 0x2000)
     FUNC_8(VAR_8);
    }

    VAR_10->open--;
    FUNC_5(VAR_8);
    FUNC_2(&VAR_9->media);

    return 0;
}
