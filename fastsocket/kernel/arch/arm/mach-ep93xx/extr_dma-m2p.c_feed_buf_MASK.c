
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct m2p_channel {int next_slot; scalar_t__ base; } ;
struct ep93xx_dma_buffer {int bus_addr; int size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct m2p_channel *VAR_4, struct ep93xx_dma_buffer *VAR_5)
{
 if (VAR_4->next_slot == 0) {
  FUNC_0(VAR_5->size, VAR_4->base + VAR_2);
  FUNC_0(VAR_5->bus_addr, VAR_4->base + VAR_0);
 } else {
  FUNC_0(VAR_5->size, VAR_4->base + VAR_3);
  FUNC_0(VAR_5->bus_addr, VAR_4->base + VAR_1);
 }
 VAR_4->next_slot ^= 1;
}
