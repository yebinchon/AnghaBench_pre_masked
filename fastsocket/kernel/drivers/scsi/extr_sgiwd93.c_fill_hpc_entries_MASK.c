
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long this_residual; unsigned long dma_handle; void* ptr; } ;
struct scsi_cmnd {TYPE_1__ SCp; } ;
struct ip22_hostdata {struct hpc_chunk* cpu; int dev; } ;
struct TYPE_4__ {unsigned long pbuf; unsigned long cntinfo; } ;
struct hpc_chunk {TYPE_2__ desc; } ;
typedef unsigned long dma_addr_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ,struct hpc_chunk*,unsigned long,int ) ;
 unsigned long FUNC_2 (int ,void*,unsigned long,int ) ;

__attribute__((used)) static inline
void FUNC_3(struct ip22_hostdata *VAR_2, struct scsi_cmnd *VAR_3, int VAR_4)
{
 unsigned long VAR_5 = VAR_3->SCp.this_residual;
 void *VAR_6 = VAR_3->SCp.ptr;
 dma_addr_t VAR_7;
 unsigned long VAR_8;
 struct hpc_chunk *VAR_9;

 VAR_7 = FUNC_2(VAR_2->dev, VAR_6, VAR_5, FUNC_0(VAR_4));
 VAR_3->SCp.dma_handle = VAR_7;
 VAR_9 = VAR_2->cpu;

 while (VAR_5) {




  VAR_8 = VAR_5 > 8192 ? 8192 : VAR_5;
  VAR_9->desc.pbuf = VAR_7;
  VAR_9->desc.cntinfo = VAR_8;
  VAR_9++;
  VAR_5 -= VAR_8;
  VAR_7 += VAR_8;
 }






 VAR_9->desc.pbuf = 0;
 VAR_9->desc.cntinfo = VAR_1;
 FUNC_1(VAR_2->dev, VAR_2->cpu,
         (unsigned long)(VAR_9 + 1) - (unsigned long)VAR_2->cpu,
         VAR_0);
}
