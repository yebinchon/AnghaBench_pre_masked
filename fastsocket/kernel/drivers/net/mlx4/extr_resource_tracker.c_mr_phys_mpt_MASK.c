
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_mpt_entry {int flags; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct mlx4_mpt_entry *VAR_0)
{
 return (FUNC_0(VAR_0->flags) >> 9) & 1;
}
