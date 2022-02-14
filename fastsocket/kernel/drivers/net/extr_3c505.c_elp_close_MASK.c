
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dma; int irq; int name; } ;
struct TYPE_3__ {scalar_t__ dma_buffer; } ;
typedef TYPE_1__ elp_device ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct net_device*) ;
 int FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ,struct net_device*) ;
 int FUNC_8 (char*,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_2)
{
 elp_device *VAR_3 = FUNC_5(VAR_2);

 if (VAR_1 >= 3)
  FUNC_8("%s: request to close device\n", VAR_2->name);

 FUNC_6(VAR_2);





 (void) FUNC_0(VAR_2);




 FUNC_7(0, VAR_2);




 FUNC_2(VAR_2->irq, VAR_2);

 FUNC_1(VAR_2->dma);
 FUNC_3((unsigned long) VAR_3->dma_buffer, FUNC_4(VAR_0));

 return 0;
}
