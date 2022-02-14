
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int buf; } ;
union mthca_buf {TYPE_2__* page_list; TYPE_2__ direct; } ;
struct mthca_mr {int dummy; } ;
struct mthca_dev {TYPE_1__* pdev; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (struct mthca_dev*,struct mthca_mr*) ;
 int FUNC_3 (TYPE_2__*,int ) ;

void FUNC_4(struct mthca_dev *VAR_2, int VAR_3, union mthca_buf *VAR_4,
      int VAR_5, struct mthca_mr *VAR_6)
{
 int VAR_7;

 if (VAR_6)
  FUNC_2(VAR_2, VAR_6);

 if (VAR_5)
  FUNC_0(&VAR_2->pdev->dev, VAR_3, VAR_4->direct.buf,
      FUNC_3(&VAR_4->direct, VAR_1));
 else {
  for (VAR_7 = 0; VAR_7 < (VAR_3 + VAR_0 - 1) / VAR_0; ++VAR_7)
   FUNC_0(&VAR_2->pdev->dev, VAR_0,
       VAR_4->page_list[VAR_7].buf,
       FUNC_3(&VAR_4->page_list[VAR_7],
        VAR_1));
  FUNC_1(VAR_4->page_list);
 }
}
