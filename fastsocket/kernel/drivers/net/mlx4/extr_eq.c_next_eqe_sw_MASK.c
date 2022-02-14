
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx4_eqe {int owner; } ;
struct mlx4_eq {int cons_index; int nent; } ;


 struct mlx4_eqe* FUNC_0 (struct mlx4_eq*,int,int ) ;

__attribute__((used)) static struct mlx4_eqe *FUNC_1(struct mlx4_eq *VAR_0, u8 VAR_1)
{
 struct mlx4_eqe *VAR_2 = FUNC_0(VAR_0, VAR_0->cons_index, VAR_1);
 return !!(VAR_2->owner & 0x80) ^ !!(VAR_0->cons_index & VAR_0->nent) ? ((void*)0) : VAR_2;
}
