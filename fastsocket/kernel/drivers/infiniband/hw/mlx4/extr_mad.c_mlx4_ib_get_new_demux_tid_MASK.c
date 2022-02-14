
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_ib_demux_ctx {int tid; } ;
typedef int __be64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

__be64 FUNC_2(struct mlx4_ib_demux_ctx *VAR_0)
{
 return FUNC_1(FUNC_0(&VAR_0->tid)) |
  FUNC_1(0xff00000000000000LL);
}
