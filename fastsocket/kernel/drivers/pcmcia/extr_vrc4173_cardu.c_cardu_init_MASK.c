
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int features; int map_size; int pci_irq; scalar_t__ irq_mask; } ;
struct TYPE_7__ {int event_lock; scalar_t__ events; TYPE_5__* dev; TYPE_1__ cap; } ;
typedef TYPE_2__ vrc4173_socket_t ;
struct TYPE_8__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_5__*) ;
 TYPE_2__* VAR_8 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(unsigned int VAR_9)
{
 vrc4173_socket_t *VAR_10 = &VAR_8[VAR_9];

 FUNC_0(VAR_10->dev);


 FUNC_1(VAR_10, VAR_4, 0);

 VAR_10->cap.features |= VAR_7 | VAR_6;
 VAR_10->cap.irq_mask = 0;
 VAR_10->cap.map_size = 0x1000;
 VAR_10->cap.pci_irq = VAR_10->dev->irq;
 VAR_10->events = 0;
 FUNC_2(VAR_10->event_lock);


 FUNC_1(VAR_10, VAR_3, VAR_2|VAR_5|VAR_1|VAR_0);

 return 0;
}
