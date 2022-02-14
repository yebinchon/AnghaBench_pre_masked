
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t shmem_pgport; int shmem_magic; int lock; int reset_timer; int devicename; scalar_t__ StartOnReset; scalar_t__ rambase; int * ioport; } ;


 scalar_t__ VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (char*,int ,...) ;
 TYPE_1__** VAR_4 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int) ;

void FUNC_8(unsigned long VAR_5)
{
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8 = (unsigned int) VAR_5;

 FUNC_3("%s: check_timer timer called\n",
  VAR_4[VAR_8]->devicename);


 FUNC_4(VAR_8);

 FUNC_5(&VAR_4[VAR_8]->lock, VAR_6);
 FUNC_2(VAR_4[VAR_8]->ioport[VAR_4[VAR_8]->shmem_pgport],
  (VAR_4[VAR_8]->shmem_magic>>14) | 0x80);
 VAR_7 = (unsigned long) *((unsigned long *)(VAR_4[VAR_8]->rambase + VAR_2));


 if(VAR_7 == VAR_1) {
  FUNC_0(VAR_8);
  FUNC_6(&VAR_4[VAR_8]->lock, VAR_6);

  if (VAR_4[VAR_8]->StartOnReset)
   FUNC_7(VAR_8);
 } else {
  FUNC_3("%s: No signature yet, waiting another %lu jiffies.\n",
   VAR_4[VAR_8]->devicename, VAR_0);
  FUNC_1(&VAR_4[VAR_8]->reset_timer, VAR_3+VAR_0);
  FUNC_6(&VAR_4[VAR_8]->lock, VAR_6);
 }
}
