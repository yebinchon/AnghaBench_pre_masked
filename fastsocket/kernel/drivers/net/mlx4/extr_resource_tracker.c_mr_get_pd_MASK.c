
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_mpt_entry {int pd_flags; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(struct mlx4_mpt_entry *VAR_0)
{
 return FUNC_0(VAR_0->pd_flags) & 0x00ffffff;
}
