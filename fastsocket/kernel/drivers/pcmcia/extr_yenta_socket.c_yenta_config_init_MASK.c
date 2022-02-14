
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct yenta_socket {struct pci_dev* dev; } ;
struct pci_dev {TYPE_1__* subordinate; int * resource; } ;
struct pci_bus_region {int start; } ;
struct TYPE_2__ {int subordinate; int secondary; int primary; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct yenta_socket*,int ) ;
 int FUNC_1 (struct yenta_socket*,int ,int) ;
 int FUNC_2 (struct yenta_socket*,int ,int) ;
 int FUNC_3 (struct yenta_socket*,int ,int) ;
 int FUNC_4 (struct pci_dev*,struct pci_bus_region*,int *) ;

__attribute__((used)) static void FUNC_5(struct yenta_socket *VAR_18)
{
 u16 VAR_19;
 struct pci_dev *VAR_20 = VAR_18->dev;
 struct pci_bus_region VAR_21;

 FUNC_4(VAR_18->dev, &VAR_21, &VAR_20->resource[0]);

 FUNC_2(VAR_18, VAR_7, 0);
 FUNC_2(VAR_18, VAR_9, VAR_21.start);
 FUNC_3(VAR_18, VAR_11,
   VAR_12 |
   VAR_14 |
   VAR_13 |
   VAR_15);


 FUNC_1(VAR_18, VAR_10, VAR_8 / 4);
 FUNC_1(VAR_18, VAR_16, 168);
 FUNC_2(VAR_18, VAR_17,
  (176 << 24) |
  (VAR_20->subordinate->subordinate << 16) |
  (VAR_20->subordinate->secondary << 8) |
  VAR_20->subordinate->primary);







 VAR_19 = FUNC_0(VAR_18, VAR_0);
 VAR_19 &= ~(VAR_1 | VAR_5 | VAR_2 | VAR_6);
 VAR_19 |= VAR_4 | VAR_3;
 FUNC_3(VAR_18, VAR_0, VAR_19);
}
