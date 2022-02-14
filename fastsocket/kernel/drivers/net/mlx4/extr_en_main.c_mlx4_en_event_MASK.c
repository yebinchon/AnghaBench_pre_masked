
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {int link_state; int linkstate_task; } ;
struct mlx4_en_dev {int * pndev; int workqueue; } ;
struct TYPE_2__ {unsigned long num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_dev_event { ____Placeholder_mlx4_dev_event } mlx4_dev_event ;





 int FUNC_0 (struct mlx4_en_dev*,char*) ;
 int FUNC_1 (struct mlx4_en_dev*,char*,int,int) ;
 struct mlx4_en_priv* FUNC_2 (int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct mlx4_dev *VAR_0, void *VAR_1,
     enum mlx4_dev_event VAR_2, unsigned long VAR_3)
{
 struct mlx4_en_dev *VAR_4 = (struct mlx4_en_dev *) VAR_1;
 struct mlx4_en_priv *VAR_5;

 switch (VAR_2) {
 case 128:
 case 129:
  if (!VAR_4->pndev[VAR_3])
   return;
  VAR_5 = FUNC_2(VAR_4->pndev[VAR_3]);


  VAR_5->link_state = VAR_2;
  FUNC_3(VAR_4->workqueue, &VAR_5->linkstate_task);
  break;

 case 130:
  FUNC_0(VAR_4, "Internal error detected, restarting device\n");
  break;

 default:
  if (VAR_3 < 1 || VAR_3 > VAR_0->caps.num_ports ||
      !VAR_4->pndev[VAR_3])
   return;
  FUNC_1(VAR_4, "Unhandled event %d for port %d\n", VAR_2,
     (int) VAR_3);
 }
}
