
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long owner; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;

int FUNC_1(unsigned long VAR_4)
{
 int VAR_5;

 VAR_5 = VAR_4 >> 12;

 if (VAR_2[VAR_5].owner != VAR_4) {
  FUNC_0
      ("vdma_free: trying to free other's dma pages, laddr=%8lx\n",
       VAR_4);
  return -1;
 }

 while (VAR_5 < VAR_1 && VAR_2[VAR_5].owner == VAR_4) {
  VAR_2[VAR_5].owner = VAR_0;
  VAR_5++;
 }

 if (VAR_3 > 1)
  FUNC_0("vdma_free: freed %ld pages starting from %08lx\n",
         VAR_5 - (VAR_4 >> 12), VAR_4);

 return 0;
}
