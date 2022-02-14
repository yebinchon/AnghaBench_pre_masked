
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct musb_hw_ep {int max_packet_sz_tx; int max_packet_sz_rx; int is_shared_fifo; } ;
struct musb {int epmask; int nr_endpoints; void* mregs; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;
 int FUNC_1 (void*,int ) ;

__attribute__((used)) static inline int FUNC_2(struct musb *VAR_2,
  struct musb_hw_ep *VAR_3, u8 VAR_4)
{
 void *VAR_5 = VAR_2->mregs;
 u8 VAR_6 = 0;


 VAR_6 = FUNC_1(VAR_5, FUNC_0(VAR_4, VAR_1));

 if (!VAR_6)
  return -VAR_0;

 VAR_2->nr_endpoints++;
 VAR_2->epmask |= (1 << VAR_4);

 VAR_3->max_packet_sz_tx = 1 << (VAR_6 & 0x0f);


 if ((VAR_6 & 0xf0) == 0xf0) {
  VAR_3->max_packet_sz_rx = VAR_3->max_packet_sz_tx;
  VAR_3->is_shared_fifo = 1;
  return 0;
 } else {
  VAR_3->max_packet_sz_rx = 1 << ((VAR_6 & 0xf0) >> 4);
  VAR_3->is_shared_fifo = 0;
 }

 return 0;
}
