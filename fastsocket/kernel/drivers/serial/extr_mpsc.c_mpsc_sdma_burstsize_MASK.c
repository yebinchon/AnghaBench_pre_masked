
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int line; } ;
struct mpsc_port_info {scalar_t__ sdma_base; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct mpsc_port_info *VAR_1, u32 VAR_2)
{
 u32 VAR_3;

 FUNC_0("mpsc_sdma_burstsize[%d]: burst_size: %d\n",
   VAR_1->port.line, VAR_2);

 VAR_2 >>= 3;

 if (VAR_2 < 2)
  VAR_3 = 0x0;
 else if (VAR_2 < 4)
  VAR_3 = 0x1;
 else if (VAR_2 < 8)
  VAR_3 = 0x2;
 else
  VAR_3 = 0x3;

 FUNC_2((FUNC_1(VAR_1->sdma_base + VAR_0) & (0x3 << 12)) | (VAR_3 << 12),
  VAR_1->sdma_base + VAR_0);
}
