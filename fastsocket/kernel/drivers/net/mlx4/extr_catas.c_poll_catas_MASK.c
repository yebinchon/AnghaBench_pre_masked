
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int timer; int list; int map; } ;
struct mlx4_priv {TYPE_1__ catas_err; } ;
struct mlx4_dev {int pdev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mlx4_dev*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct mlx4_dev*,int ,int ) ;
 struct mlx4_priv* FUNC_3 (struct mlx4_dev*) ;
 int VAR_7 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_8)
{
 struct mlx4_dev *VAR_9 = (struct mlx4_dev *) VAR_8;
 struct mlx4_priv *VAR_10 = FUNC_3(VAR_9);

 if (FUNC_7(VAR_10->catas_err.map)) {

  if (FUNC_5(VAR_9->pdev))
   FUNC_4(&VAR_10->catas_err.timer,
      FUNC_8(VAR_6 + VAR_0));
  else {
   FUNC_0(VAR_9);
   FUNC_2(VAR_9, VAR_1, 0);

   if (VAR_5) {
    FUNC_9(&VAR_3);
    FUNC_1(&VAR_10->catas_err.list, &VAR_2);
    FUNC_10(&VAR_3);

    FUNC_6(VAR_7, &VAR_4);
   }
  }
 } else
  FUNC_4(&VAR_10->catas_err.timer,
     FUNC_8(VAR_6 + VAR_0));
}
