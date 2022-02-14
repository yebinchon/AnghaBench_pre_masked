
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnx4008_dma_ch_ctrl {unsigned long tr_size; int sbsize; int dbsize; unsigned long src_ahb1; unsigned long dest_ahb1; unsigned long si; unsigned long di; unsigned long priv_mode; unsigned long bufferable; unsigned long cacheable; unsigned long tc_mask; void* dwidth; void* swidth; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;

int FUNC_0(unsigned long VAR_4,
         struct pnx4008_dma_ch_ctrl * VAR_5)
{
 int VAR_6 = 0;

 if (!VAR_5) {
  VAR_6 = -VAR_0;
  goto out;
 }

 VAR_5->tr_size = VAR_4 & 0x7ff;
 VAR_4 >>= 12;

 VAR_5->sbsize = 1 << (VAR_4 & 7);
 if (VAR_5->sbsize > 1)
  VAR_5->sbsize <<= 1;
 VAR_4 >>= 3;

 VAR_5->dbsize = 1 << (VAR_4 & 7);
 if (VAR_5->dbsize > 1)
  VAR_5->dbsize <<= 1;
 VAR_4 >>= 3;

 switch (VAR_4 & 7) {
 case 0:
  VAR_5->swidth = VAR_1;
  break;
 case 1:
  VAR_5->swidth = VAR_2;
  break;
 case 2:
  VAR_5->swidth = VAR_3;
  break;
 default:
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_4 >>= 3;

 switch (VAR_4 & 7) {
 case 0:
  VAR_5->dwidth = VAR_1;
  break;
 case 1:
  VAR_5->dwidth = VAR_2;
  break;
 case 2:
  VAR_5->dwidth = VAR_3;
  break;
 default:
  VAR_6 = -VAR_0;
  goto out;
 }
 VAR_4 >>= 3;

 VAR_5->src_ahb1 = VAR_4 & 1;
 VAR_4 >>= 1;

 VAR_5->dest_ahb1 = VAR_4 & 1;
 VAR_4 >>= 1;

 VAR_5->si = VAR_4 & 1;
 VAR_4 >>= 1;

 VAR_5->di = VAR_4 & 1;
 VAR_4 >>= 1;

 VAR_5->priv_mode = VAR_4 & 1;
 VAR_4 >>= 1;

 VAR_5->bufferable = VAR_4 & 1;
 VAR_4 >>= 1;

 VAR_5->cacheable = VAR_4 & 1;
 VAR_4 >>= 1;

 VAR_5->tc_mask = VAR_4 & 1;

out:
 return VAR_6;
}
