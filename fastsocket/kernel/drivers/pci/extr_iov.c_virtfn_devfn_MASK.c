
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pci_dev {int devfn; TYPE_1__* sriov; } ;
struct TYPE_2__ {int offset; int stride; } ;



__attribute__((used)) static inline u8 FUNC_0(struct pci_dev *VAR_0, int VAR_1)
{
 return (VAR_0->devfn + VAR_0->sriov->offset +
  VAR_0->sriov->stride * VAR_1) & 0xff;
}
