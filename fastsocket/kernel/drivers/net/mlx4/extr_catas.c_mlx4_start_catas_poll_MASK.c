
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {unsigned long data; int expires; int function; } ;
struct TYPE_6__ {TYPE_3__ timer; int * map; int list; } ;
struct TYPE_5__ {int catas_size; scalar_t__ catas_offset; int catas_bar; } ;
struct mlx4_priv {TYPE_2__ catas_err; TYPE_1__ fw; } ;
struct mlx4_dev {int pdev; } ;
typedef scalar_t__ phys_addr_t ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ VAR_1 ;
 int * FUNC_3 (scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,char*,unsigned long long) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int VAR_3 ;
 int FUNC_8 (scalar_t__) ;

void FUNC_9(struct mlx4_dev *VAR_4)
{
 struct mlx4_priv *VAR_5 = FUNC_5(VAR_4);
 phys_addr_t VAR_6;


 if (FUNC_4(VAR_4))
  VAR_1 = 0;

 FUNC_0(&VAR_5->catas_err.list);
 FUNC_2(&VAR_5->catas_err.timer);
 VAR_5->catas_err.map = ((void*)0);

 VAR_6 = FUNC_7(VAR_4->pdev, VAR_5->fw.catas_bar) +
  VAR_5->fw.catas_offset;

 VAR_5->catas_err.map = FUNC_3(VAR_6, VAR_5->fw.catas_size * 4);
 if (!VAR_5->catas_err.map) {
  FUNC_6(VAR_4, "Failed to map internal error buffer at 0x%llx\n",
     (unsigned long long) VAR_6);
  return;
 }

 VAR_5->catas_err.timer.data = (unsigned long) VAR_4;
 VAR_5->catas_err.timer.function = VAR_3;
 VAR_5->catas_err.timer.expires =
  FUNC_8(VAR_2 + VAR_0);
 FUNC_1(&VAR_5->catas_err.timer);
}
