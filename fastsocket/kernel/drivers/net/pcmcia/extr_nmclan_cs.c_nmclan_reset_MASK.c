
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_long ;
struct pcmcia_device {int dummy; } ;
struct net_device {int base_addr; int dev_addr; } ;
struct TYPE_7__ {void* tx_free_frames; struct pcmcia_device link; } ;
typedef TYPE_1__ mace_private ;
struct TYPE_8__ {int Value; void* Offset; int Action; scalar_t__ Function; } ;
typedef TYPE_2__ conf_reg_t ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;
 TYPE_1__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct pcmcia_device*,TYPE_2__*) ;
 int FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_9)
{
  mace_private *VAR_10 = FUNC_3(VAR_9);
  VAR_10->tx_free_frames=VAR_0;


  FUNC_1(VAR_10, VAR_9->base_addr, VAR_9->dev_addr);
  FUNC_2(VAR_10, VAR_9->base_addr, VAR_7, VAR_8);


  FUNC_5(VAR_9);
}
