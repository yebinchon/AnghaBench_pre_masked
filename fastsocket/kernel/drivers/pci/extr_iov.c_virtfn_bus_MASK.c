
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {int devfn; TYPE_2__* sriov; TYPE_1__* bus; } ;
struct TYPE_4__ {int offset; int stride; } ;
struct TYPE_3__ {scalar_t__ number; } ;



__attribute__((used)) static inline u8 FUNC_0(struct pci_dev *VAR_0, int VAR_1)
{
 return VAR_0->bus->number + ((VAR_0->devfn + VAR_0->sriov->offset +
        VAR_0->sriov->stride * VAR_1) >> 8);
}
