
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_mtt {scalar_t__ offset; } ;
struct TYPE_2__ {int mtt_entry_sz; } ;
struct mlx4_dev {TYPE_1__ caps; } ;



u64 FUNC_0(struct mlx4_dev *VAR_0, struct mlx4_mtt *VAR_1)
{
 return (u64) VAR_1->offset * VAR_0->caps.mtt_entry_sz;
}
