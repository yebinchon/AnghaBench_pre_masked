
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_restdata; } ;


 int FUNC_0 (char*,...) ;
 unsigned long FUNC_1 (int ) ;
 int VAR_0 ;
 char* FUNC_2 (unsigned long) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_2;
 char *VAR_3, *VAR_4;
 unsigned long VAR_5;


 VAR_5 = FUNC_1(VAR_0);
 VAR_2 = VAR_5 & 3;
 if (VAR_2) {


  VAR_5 ^= VAR_2;
  FUNC_0("SCSI DMA: there are %d rest bytes for phys addr 0x%08lx",
      VAR_2, VAR_5);

  VAR_4 = FUNC_2(VAR_5);
  FUNC_0(" = virt addr %p\n", VAR_4);
  for (VAR_3 = (char *)&VAR_1.dma_restdata; VAR_2 != 0; --VAR_2)
   *VAR_4++ = *VAR_3++;
 }
}
