
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnx4008_dma_ch_config {unsigned long src_per; unsigned long dest_per; unsigned long ie; unsigned long itc; unsigned long lock; unsigned long active; unsigned long halt; int flow_cntrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

int FUNC_0(unsigned long VAR_9,
        struct pnx4008_dma_ch_config * VAR_10)
{
 int VAR_11 = 0;

 if (!VAR_10) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_9 >>= 1;

 VAR_10->src_per = VAR_9 & 0x1f;
 VAR_9 >>= 5;

 VAR_10->dest_per = VAR_9 & 0x1f;
 VAR_9 >>= 5;

 switch (VAR_9 & 7) {
 case 0:
  VAR_10->flow_cntrl = VAR_1;
  break;
 case 1:
  VAR_10->flow_cntrl = VAR_2;
  break;
 case 2:
  VAR_10->flow_cntrl = VAR_4;
  break;
 case 3:
  VAR_10->flow_cntrl = VAR_6;
  break;
 case 4:
  VAR_10->flow_cntrl = VAR_7;
  break;
 case 5:
  VAR_10->flow_cntrl = VAR_3;
  break;
 case 6:
  VAR_10->flow_cntrl = VAR_5;
  break;
 case 7:
  VAR_10->flow_cntrl = VAR_8;
 }
 VAR_9 >>= 3;

 VAR_10->ie = VAR_9 & 1;
 VAR_9 >>= 1;

 VAR_10->itc = VAR_9 & 1;
 VAR_9 >>= 1;

 VAR_10->lock = VAR_9 & 1;
 VAR_9 >>= 1;

 VAR_10->active = VAR_9 & 1;
 VAR_9 >>= 1;

 VAR_10->halt = VAR_9 & 1;

out:
 return VAR_11;
}
