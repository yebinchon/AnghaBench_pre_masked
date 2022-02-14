
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct res_qp {int mcg_spl; } ;
struct res_gid {int prot; int steer; int list; int reg_id; } ;
struct mlx4_dev {int dummy; } ;
typedef enum mlx4_steer_type { ____Placeholder_mlx4_steer_type } mlx4_steer_type ;
typedef enum mlx4_protocol { ____Placeholder_mlx4_protocol } mlx4_protocol ;


 int VAR_0 ;
 struct res_gid* FUNC_0 (struct mlx4_dev*,int,struct res_qp*,int *) ;
 int FUNC_1 (struct res_gid*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct mlx4_dev *VAR_1, int VAR_2, struct res_qp *VAR_3,
         u8 *VAR_4, enum mlx4_protocol VAR_5,
         enum mlx4_steer_type VAR_6, u64 *VAR_7)
{
 struct res_gid *VAR_8;
 int VAR_9;

 FUNC_3(&VAR_3->mcg_spl);
 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (!VAR_8 || VAR_8->prot != VAR_5 || VAR_8->steer != VAR_6)
  VAR_9 = -VAR_0;
 else {
  *VAR_7 = VAR_8->reg_id;
  FUNC_2(&VAR_8->list);
  FUNC_1(VAR_8);
  VAR_9 = 0;
 }
 FUNC_4(&VAR_3->mcg_spl);

 return VAR_9;
}
