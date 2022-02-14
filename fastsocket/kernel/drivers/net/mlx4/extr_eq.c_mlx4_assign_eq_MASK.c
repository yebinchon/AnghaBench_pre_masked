
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned long long pool_bm; int pool_lock; } ;
struct TYPE_6__ {TYPE_4__* eq; int * irq_names; } ;
struct mlx4_priv {TYPE_2__ msix_ctl; TYPE_1__ eq_table; } ;
struct TYPE_8__ {int comp_pool; int num_comp_vectors; } ;
struct mlx4_dev {TYPE_3__ caps; } ;
struct cpu_rmap {int dummy; } ;
struct TYPE_9__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (struct cpu_rmap*,int ) ;
 int VAR_2 ;
 struct mlx4_priv* FUNC_2 (struct mlx4_dev*) ;
 int FUNC_3 (struct mlx4_dev*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int *,TYPE_4__*) ;
 int FUNC_7 (int *,int,char*,char*) ;

int FUNC_8(struct mlx4_dev *VAR_3, char *VAR_4, struct cpu_rmap *VAR_5,
     int *VAR_6)
{

 struct mlx4_priv *VAR_7 = FUNC_2(VAR_3);
 int VAR_8 = 0, VAR_9 = 0, VAR_10;

 FUNC_4(&VAR_7->msix_ctl.pool_lock);
 for (VAR_10 = 0; !VAR_8 && VAR_10 < VAR_3->caps.comp_pool; VAR_10++) {
  if (~VAR_7->msix_ctl.pool_bm & 1ULL << VAR_10) {
   VAR_7->msix_ctl.pool_bm |= 1ULL << VAR_10;
   VAR_8 = VAR_3->caps.num_comp_vectors + 1 + VAR_10;
   FUNC_7(VAR_7->eq_table.irq_names +
     VAR_8 * VAR_1,
     VAR_1, "%s", VAR_4);
   VAR_9 = FUNC_6(VAR_7->eq_table.eq[VAR_8].irq,
       VAR_2, 0,
       &VAR_7->eq_table.irq_names[VAR_8<<5],
       VAR_7->eq_table.eq + VAR_8);
   if (VAR_9) {

    VAR_7->msix_ctl.pool_bm ^= 1 << VAR_10;
    VAR_8 = 0;
    continue;

   }
   FUNC_0(&VAR_7->eq_table.eq[VAR_8], 1);
  }
 }
 FUNC_5(&VAR_7->msix_ctl.pool_lock);

 if (VAR_8) {
  *VAR_6 = VAR_8;
 } else {
  *VAR_6 = 0;
  VAR_9 = (VAR_10 == VAR_3->caps.comp_pool) ? -VAR_0 : VAR_9;
 }
 return VAR_9;
}
