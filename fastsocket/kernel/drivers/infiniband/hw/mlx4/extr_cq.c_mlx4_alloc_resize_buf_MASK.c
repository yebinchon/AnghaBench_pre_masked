
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_dev {int dummy; } ;
struct mlx4_ib_cq {TYPE_1__* resize_buf; } ;
struct TYPE_3__ {int cqe; int buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx4_ib_dev*,int *,int) ;

__attribute__((used)) static int FUNC_3(struct mlx4_ib_dev *VAR_3, struct mlx4_ib_cq *VAR_4,
      int VAR_5)
{
 int VAR_6;

 if (VAR_4->resize_buf)
  return -VAR_0;

 VAR_4->resize_buf = FUNC_1(sizeof *VAR_4->resize_buf, VAR_2);
 if (!VAR_4->resize_buf)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_3, &VAR_4->resize_buf->buf, VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_4->resize_buf);
  VAR_4->resize_buf = ((void*)0);
  return VAR_6;
 }

 VAR_4->resize_buf->cqe = VAR_5 - 1;

 return 0;
}
