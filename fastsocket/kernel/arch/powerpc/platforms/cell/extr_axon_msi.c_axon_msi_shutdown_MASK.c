
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct of_device {int dev; } ;
struct axon_msic {int dcr_host; TYPE_2__* irq_host; } ;
struct TYPE_4__ {TYPE_1__* of_node; } ;
struct TYPE_3__ {int full_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct axon_msic* FUNC_1 (int *) ;
 int FUNC_2 (struct axon_msic*,int ,int) ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int FUNC_4(struct of_device *VAR_3)
{
 struct axon_msic *VAR_4 = FUNC_1(&VAR_3->dev);
 u32 VAR_5;

 FUNC_3("axon_msi: disabling %s\n",
    VAR_4->irq_host->of_node->full_name);
 VAR_5 = FUNC_0(VAR_4->dcr_host, VAR_2);
 VAR_5 &= ~VAR_0 & ~VAR_1;
 FUNC_2(VAR_4, VAR_2, VAR_5);

 return 0;
}
