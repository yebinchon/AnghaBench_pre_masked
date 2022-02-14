
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct pci_pbm_info {unsigned long devhandle; } ;
struct iommu_batch {unsigned long prot; unsigned long entry; unsigned long npages; int * pglist; TYPE_2__* dev; } ;
struct TYPE_3__ {struct pci_pbm_info* host_controller; } ;
struct TYPE_4__ {TYPE_1__ archdata; } ;


 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int *) ;
 long FUNC_2 (unsigned long,int ,unsigned long,unsigned long,int ) ;
 int FUNC_3 (char*,unsigned long,int ,unsigned long,unsigned long,int ,long) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static long FUNC_6(struct iommu_batch *VAR_0)
{
 struct pci_pbm_info *VAR_1 = VAR_0->dev->archdata.host_controller;
 unsigned long VAR_2 = VAR_1->devhandle;
 unsigned long VAR_3 = VAR_0->prot;
 unsigned long VAR_4 = VAR_0->entry;
 u64 *VAR_5 = VAR_0->pglist;
 unsigned long VAR_6 = VAR_0->npages;

 while (VAR_6 != 0) {
  long VAR_7;

  VAR_7 = FUNC_2(VAR_2, FUNC_0(0, VAR_4),
       VAR_6, VAR_3, FUNC_1(VAR_5));
  if (FUNC_5(VAR_7 < 0)) {
   if (FUNC_4())
    FUNC_3("iommu_batch_flush: IOMMU map of "
           "[%08lx:%08llx:%lx:%lx:%lx] failed with "
           "status %ld\n",
           VAR_2, FUNC_0(0, VAR_4),
           VAR_6, VAR_3, FUNC_1(VAR_5), VAR_7);
   return -1;
  }

  VAR_4 += VAR_7;
  VAR_6 -= VAR_7;
  VAR_5 += VAR_7;
 }

 VAR_0->entry = VAR_4;
 VAR_0->npages = 0;

 return 0;
}
