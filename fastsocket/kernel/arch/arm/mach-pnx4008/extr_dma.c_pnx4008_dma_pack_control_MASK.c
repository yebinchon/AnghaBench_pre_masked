
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnx4008_dma_ch_ctrl {int tc_mask; int cacheable; int bufferable; int priv_mode; int di; int si; int dest_ahb1; int src_ahb1; int dwidth; int swidth; int dbsize; int sbsize; int tr_size; } ;


 int VAR_0 ;
 int VAR_1 ;




int FUNC_0(const struct pnx4008_dma_ch_ctrl * VAR_2,
        unsigned long *VAR_3)
{
 int VAR_4 = 0, VAR_5, VAR_6, VAR_7 = 0;

 if (!VAR_3 || !VAR_2) {
  VAR_7 = -VAR_1;
  goto out;
 }

 *VAR_3 = 0;

 switch (VAR_2->tc_mask) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 31);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }

 switch (VAR_2->cacheable) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 30);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->bufferable) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 29);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->priv_mode) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 28);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->di) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 27);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->si) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 26);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->dest_ahb1) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 25);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->src_ahb1) {
 case 0:
  break;
 case 1:
  *VAR_3 |= (1 << 24);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->dwidth) {
 case 130:
  *VAR_3 &= ~(7 << 21);
  break;
 case 129:
  *VAR_3 &= ~(7 << 21);
  *VAR_3 |= (1 << 21);
  break;
 case 128:
  *VAR_3 &= ~(7 << 21);
  *VAR_3 |= (2 << 21);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 switch (VAR_2->swidth) {
 case 130:
  *VAR_3 &= ~(7 << 18);
  break;
 case 129:
  *VAR_3 &= ~(7 << 18);
  *VAR_3 |= (1 << 18);
  break;
 case 128:
  *VAR_3 &= ~(7 << 18);
  *VAR_3 |= (2 << 18);
  break;

 default:
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_5 = VAR_2->dbsize;
 while (!(VAR_5 & 1)) {
  VAR_4++;
  VAR_5 >>= 1;
 }
 if (VAR_2->dbsize != 1 || VAR_4 > 8 || VAR_4 == 1) {
  VAR_7 = -VAR_1;
  goto out;
 } else if (VAR_4 > 1)
  VAR_4--;
 *VAR_3 &= ~(7 << 15);
 *VAR_3 |= (VAR_4 << 15);

 VAR_6 = VAR_2->sbsize;
 while (!(VAR_6 & 1)) {
  VAR_4++;
  VAR_6 >>= 1;
 }
 if (VAR_2->sbsize != 1 || VAR_4 > 8 || VAR_4 == 1) {
  VAR_7 = -VAR_1;
  goto out;
 } else if (VAR_4 > 1)
  VAR_4--;
 *VAR_3 &= ~(7 << 12);
 *VAR_3 |= (VAR_4 << 12);

 if (VAR_2->tr_size > 0x7ff) {
  VAR_7 = -VAR_0;
  goto out;
 }
 *VAR_3 &= ~0x7ff;
 *VAR_3 |= VAR_2->tr_size & 0x7ff;

out:
 return VAR_7;
}
