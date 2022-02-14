
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct controller {int num_slots; int mmio_size; int mmio_base; int creg; TYPE_1__* pci_dev; int poll_timer; } ;
struct TYPE_2__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct controller*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,struct controller*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct controller*,int ) ;
 int FUNC_10 (struct controller*,int ,int) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_11(struct controller *VAR_17)
{
 int VAR_18;
 u32 VAR_19, VAR_20;




 for (VAR_18 = 0; VAR_18 < VAR_17->num_slots; VAR_18++) {
  VAR_19 = FUNC_9(VAR_17, FUNC_0(VAR_18));
  VAR_19 |= (VAR_10 | VAR_7 |
        VAR_1 | VAR_8 |
        VAR_3 | VAR_9 |
        VAR_4);
  VAR_19 &= ~VAR_13;
  FUNC_10(VAR_17, FUNC_0(VAR_18), VAR_19);
 }

 FUNC_2(VAR_17);




 VAR_20 = FUNC_9(VAR_17, VAR_11);
 VAR_20 |= (VAR_5 | VAR_6 |
       VAR_2 | VAR_0);
 VAR_20 &= ~VAR_12;
 FUNC_10(VAR_17, VAR_11, VAR_20);

 if (VAR_15)
  FUNC_3(&VAR_17->poll_timer);
 else {
  FUNC_5(VAR_17->pci_dev->irq, VAR_17);
  FUNC_7(VAR_17->pci_dev);
 }

 FUNC_6(VAR_17->creg);
 FUNC_8(VAR_17->mmio_base, VAR_17->mmio_size);





 if (FUNC_1(&VAR_14))
  FUNC_4(VAR_16);
}
