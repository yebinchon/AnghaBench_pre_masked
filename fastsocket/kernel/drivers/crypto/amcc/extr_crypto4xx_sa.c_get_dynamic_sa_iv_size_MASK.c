
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iv0; int iv1; int iv2; int iv3; } ;
union dynamic_sa_contents {TYPE_1__ bf; int w; } ;
typedef int u32 ;
struct dynamic_sa_ctl {int sa_contents; } ;
struct crypto4xx_ctx {scalar_t__ direction; scalar_t__ sa_out; scalar_t__ sa_in; } ;


 scalar_t__ VAR_0 ;

u32 FUNC_0(struct crypto4xx_ctx *VAR_1)
{
 union dynamic_sa_contents VAR_2;

 if (VAR_1->direction == VAR_0)
  VAR_2.w = ((struct dynamic_sa_ctl *) VAR_1->sa_in)->sa_contents;
 else
  VAR_2.w = ((struct dynamic_sa_ctl *) VAR_1->sa_out)->sa_contents;
 return (VAR_2.bf.iv0 + VAR_2.bf.iv1 + VAR_2.bf.iv2 + VAR_2.bf.iv3) * 4;
}
