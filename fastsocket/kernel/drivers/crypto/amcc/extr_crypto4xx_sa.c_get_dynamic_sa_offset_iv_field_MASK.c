
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int key_size; int inner_size; int outer_size; int spi; int seq_num0; int seq_num1; int seq_num_mask0; int seq_num_mask1; int seq_num_mask2; int seq_num_mask3; } ;
union dynamic_sa_contents {TYPE_1__ bf; int w; } ;
typedef int u32 ;
struct dynamic_sa_ctl {int sa_contents; } ;
struct crypto4xx_ctx {scalar_t__ direction; scalar_t__ sa_out; scalar_t__ sa_in; } ;


 scalar_t__ VAR_0 ;

u32 FUNC_0(struct crypto4xx_ctx *VAR_1)
{
 u32 VAR_2;
 union dynamic_sa_contents VAR_3;

 if (VAR_1->direction == VAR_0)
  VAR_3.w = ((struct dynamic_sa_ctl *)(VAR_1->sa_in))->sa_contents;
 else
  VAR_3.w = ((struct dynamic_sa_ctl *)(VAR_1->sa_out))->sa_contents;
 VAR_2 = VAR_3.bf.key_size
  + VAR_3.bf.inner_size
  + VAR_3.bf.outer_size
  + VAR_3.bf.spi
  + VAR_3.bf.seq_num0
  + VAR_3.bf.seq_num1
  + VAR_3.bf.seq_num_mask0
  + VAR_3.bf.seq_num_mask1
  + VAR_3.bf.seq_num_mask2
  + VAR_3.bf.seq_num_mask3;

 return sizeof(struct dynamic_sa_ctl) + VAR_2 * 4;
}
