
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_priv {int ctx_lock; int ctx_list; int dev; } ;
struct mlx4_interface {scalar_t__ (* add ) (int *) ;} ;
struct mlx4_device_context {int list; scalar_t__ context; struct mlx4_interface* intf; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx4_device_context*) ;
 struct mlx4_device_context* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct mlx4_interface *VAR_1, struct mlx4_priv *VAR_2)
{
 struct mlx4_device_context *VAR_3;

 VAR_3 = FUNC_1(sizeof *VAR_3, VAR_0);
 if (!VAR_3)
  return;

 VAR_3->intf = VAR_1;
 VAR_3->context = VAR_1->add(&VAR_2->dev);

 if (VAR_3->context) {
  FUNC_3(&VAR_2->ctx_lock);
  FUNC_2(&VAR_3->list, &VAR_2->ctx_list);
  FUNC_4(&VAR_2->ctx_lock);
 } else
  FUNC_0(VAR_3);
}
