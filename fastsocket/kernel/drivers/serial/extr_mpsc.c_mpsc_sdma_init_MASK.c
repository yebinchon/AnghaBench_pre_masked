
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int line; } ;
struct mpsc_port_info {scalar_t__ sdma_base; TYPE_1__ port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct mpsc_port_info*,int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct mpsc_port_info *VAR_1, u32 VAR_2)
{
 FUNC_1("mpsc_sdma_init[%d]: burst_size: %d\n", VAR_1->port.line,
  VAR_2);

 FUNC_3((FUNC_2(VAR_1->sdma_base + VAR_0) & 0x3ff) | 0x03f,
  VAR_1->sdma_base + VAR_0);
 FUNC_0(VAR_1, VAR_2);
}
