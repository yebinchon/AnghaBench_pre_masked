
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int dma_addr; int * addr; } ;
struct efx_nic {TYPE_1__ stats_buffer; } ;
typedef int __le64 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct efx_nic*,int ,int,int,int ) ;

__attribute__((used)) static void FUNC_1(struct efx_nic *VAR_3)
{
 __le64 *VAR_4 = VAR_3->stats_buffer.addr;

 VAR_4[VAR_0] = VAR_2;

 FUNC_0(VAR_3, VAR_3->stats_buffer.dma_addr,
      VAR_1 * sizeof(u64), 1, 0);
}
