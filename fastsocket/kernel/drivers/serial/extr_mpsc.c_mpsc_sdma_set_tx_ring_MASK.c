
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mpsc_tx_desc {int dummy; } ;
struct mpsc_port_info {scalar_t__ sdma_base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mpsc_port_info *VAR_2,
  struct mpsc_tx_desc *VAR_3)
{
 FUNC_0((u32)VAR_3, VAR_2->sdma_base + VAR_1);
 FUNC_0((u32)VAR_3, VAR_2->sdma_base + VAR_0);
}
