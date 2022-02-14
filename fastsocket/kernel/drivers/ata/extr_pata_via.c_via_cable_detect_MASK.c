
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct via_isa_bridge {int flags; } ;
struct pci_dev {int dummy; } ;
struct ata_port {int port_no; TYPE_1__* host; } ;
struct TYPE_2__ {int dev; struct via_isa_bridge* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct ata_port*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct ata_port*) ;
 int FUNC_2 (struct pci_dev*,int,int*) ;
 struct pci_dev* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_5(struct ata_port *VAR_9) {
 const struct via_isa_bridge *VAR_10 = VAR_9->host->private_data;
 struct pci_dev *VAR_11 = FUNC_3(VAR_9->host->dev);
 u32 VAR_12;

 if (FUNC_4(VAR_11))
  return VAR_1;

 if ((VAR_10->flags & VAR_5) && VAR_9->port_no == 0)
  return VAR_4;


 if ((VAR_10->flags & VAR_6) < VAR_8)
  return VAR_0;

 else if ((VAR_10->flags & VAR_6) < VAR_7)
  return VAR_3;

 FUNC_2(VAR_11, 0x50, &VAR_12);


 if (VAR_12 & (0x10100000 >> (16 * VAR_9->port_no)))
  return VAR_2;

 if (FUNC_1(VAR_9) &&
     FUNC_0(VAR_9, FUNC_1(VAR_9)))
  return VAR_2;
 return VAR_0;
}
