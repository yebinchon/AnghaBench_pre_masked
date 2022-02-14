
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int vendor; unsigned int device; unsigned int subvendor; unsigned int subdevice; unsigned int class; unsigned int class_mask; unsigned long driver_data; } ;
struct pci_dynid {int node; TYPE_1__ id; } ;
struct TYPE_4__ {int lock; int list; } ;
struct pci_driver {int driver; TYPE_2__ dynids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct pci_dynid* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct pci_driver *VAR_2,
    unsigned int VAR_3, unsigned int VAR_4,
    unsigned int VAR_5, unsigned int VAR_6,
    unsigned int VAR_7, unsigned int VAR_8,
    unsigned long VAR_9)
{
 struct pci_dynid *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->id.vendor = VAR_3;
 VAR_10->id.device = VAR_4;
 VAR_10->id.subvendor = VAR_5;
 VAR_10->id.subdevice = VAR_6;
 VAR_10->id.class = VAR_7;
 VAR_10->id.class_mask = VAR_8;
 VAR_10->id.driver_data = VAR_9;

 FUNC_5(&VAR_2->dynids.lock);
 FUNC_3(&VAR_10->node, &VAR_2->dynids.list);
 FUNC_6(&VAR_2->dynids.lock);

 FUNC_1(&VAR_2->driver);
 VAR_11 = FUNC_0(&VAR_2->driver);
 FUNC_4(&VAR_2->driver);

 return VAR_11;
}
