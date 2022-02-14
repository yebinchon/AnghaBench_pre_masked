
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnx4008_dma_ch_config {int halt; int active; int lock; int itc; int ie; int flow_cntrl; int dest_per; int src_per; } ;


 int VAR_0 ;
int FUNC_0(const struct pnx4008_dma_ch_config * VAR_1,
       unsigned long *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2 || !VAR_1) {
  VAR_3 = -VAR_0;
  goto out;
 }

 *VAR_2 = 0;

 switch (VAR_1->halt) {
 case 0:
  break;
 case 1:
  *VAR_2 |= (1 << 18);
  break;

 default:
  VAR_3 = -VAR_0;
  goto out;
 }
 switch (VAR_1->active) {
 case 0:
  break;
 case 1:
  *VAR_2 |= (1 << 17);
  break;

 default:
  VAR_3 = -VAR_0;
  goto out;
 }
 switch (VAR_1->lock) {
 case 0:
  break;
 case 1:
  *VAR_2 |= (1 << 16);
  break;

 default:
  VAR_3 = -VAR_0;
  goto out;
 }
 switch (VAR_1->itc) {
 case 0:
  break;
 case 1:
  *VAR_2 |= (1 << 15);
  break;

 default:
  VAR_3 = -VAR_0;
  goto out;
 }
 switch (VAR_1->ie) {
 case 0:
  break;
 case 1:
  *VAR_2 |= (1 << 14);
  break;

 default:
  VAR_3 = -VAR_0;
  goto out;
 }
 switch (VAR_1->flow_cntrl) {
 case 135:
  *VAR_2 &= ~(7 << 11);
  break;
 case 134:
  *VAR_2 &= ~(7 << 11);
  *VAR_2 |= (1 << 11);
  break;
 case 132:
  *VAR_2 &= ~(7 << 11);
  *VAR_2 |= (2 << 11);
  break;
 case 130:
  *VAR_2 &= ~(7 << 11);
  *VAR_2 |= (3 << 11);
  break;
 case 129:
  *VAR_2 &= ~(7 << 11);
  *VAR_2 |= (4 << 11);
  break;
 case 133:
  *VAR_2 &= ~(7 << 11);
  *VAR_2 |= (5 << 11);
  break;
 case 131:
  *VAR_2 &= ~(7 << 11);
  *VAR_2 |= (6 << 11);
  break;
 case 128:
  *VAR_2 |= (7 << 11);
  break;

 default:
  VAR_3 = -VAR_0;
  goto out;
 }
 *VAR_2 &= ~(0x1f << 6);
 *VAR_2 |= ((VAR_1->dest_per & 0x1f) << 6);

 *VAR_2 &= ~(0x1f << 1);
 *VAR_2 |= ((VAR_1->src_per & 0x1f) << 1);

out:
 return VAR_3;
}
