
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {scalar_t__ used; scalar_t__ mite_phys_addr; int pcidev; int * daq_io_addr; int * mite_io_addr; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct mite_struct *VAR_0)
{


 if (!VAR_0)
  return;

 if (VAR_0->mite_io_addr) {
  FUNC_1(VAR_0->mite_io_addr);
  VAR_0->mite_io_addr = ((void*)0);
 }
 if (VAR_0->daq_io_addr) {
  FUNC_1(VAR_0->daq_io_addr);
  VAR_0->daq_io_addr = ((void*)0);
 }
 if (VAR_0->mite_phys_addr) {
  FUNC_0(VAR_0->pcidev);
  VAR_0->mite_phys_addr = 0;
 }

 VAR_0->used = 0;
}
