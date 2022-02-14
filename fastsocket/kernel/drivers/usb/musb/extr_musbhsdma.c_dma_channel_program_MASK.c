
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
typedef void* u16 ;
struct musb_dma_channel {void* max_packet_sz; void* len; int start_addr; scalar_t__ transmit; int epnum; } ;
struct dma_channel {scalar_t__ status; scalar_t__ actual_len; struct musb_dma_channel* private_data; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int ,char*,void*,int ,void*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct dma_channel*,void*,int,int ,void*) ;

__attribute__((used)) static int FUNC_3(struct dma_channel *VAR_2,
    u16 VAR_3, u8 VAR_4,
    dma_addr_t VAR_5, u32 VAR_6)
{
 struct musb_dma_channel *VAR_7 = VAR_2->private_data;

 FUNC_1(2, "ep%d-%s pkt_sz %d, dma_addr 0x%x length %d, mode %d\n",
  VAR_7->epnum,
  VAR_7->transmit ? "Tx" : "Rx",
  VAR_3, VAR_5, VAR_6, VAR_4);

 FUNC_0(VAR_2->status == VAR_1 ||
  VAR_2->status == VAR_0);

 VAR_2->actual_len = 0;
 VAR_7->start_addr = VAR_5;
 VAR_7->len = VAR_6;
 VAR_7->max_packet_sz = VAR_3;
 VAR_2->status = VAR_0;

 if ((VAR_4 == 1) && (VAR_6 >= VAR_3))
  FUNC_2(VAR_2, VAR_3, 1, VAR_5, VAR_6);
 else
  FUNC_2(VAR_2, VAR_3, 0, VAR_5, VAR_6);

 return 1;
}
