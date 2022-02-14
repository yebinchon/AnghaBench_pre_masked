
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_dev {TYPE_2__* pdev; } ;
struct TYPE_4__ {scalar_t__ buf; int map; } ;
struct mlx4_buf {int nbufs; TYPE_3__* page_list; TYPE_1__ direct; } ;
struct TYPE_6__ {int map; scalar_t__ buf; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,scalar_t__,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (scalar_t__) ;

void FUNC_3(struct mlx4_dev *VAR_2, int VAR_3, struct mlx4_buf *VAR_4)
{
 int VAR_5;

 if (VAR_4->nbufs == 1)
  FUNC_0(&VAR_2->pdev->dev, VAR_3, VAR_4->direct.buf,
      VAR_4->direct.map);
 else {
  if (VAR_0 == 64 && VAR_4->direct.buf)
   FUNC_2(VAR_4->direct.buf);

  for (VAR_5 = 0; VAR_5 < VAR_4->nbufs; ++VAR_5)
   if (VAR_4->page_list[VAR_5].buf)
    FUNC_0(&VAR_2->pdev->dev, VAR_1,
        VAR_4->page_list[VAR_5].buf,
        VAR_4->page_list[VAR_5].map);
  FUNC_1(VAR_4->page_list);
 }
}
