
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * buf; } ;
union mthca_buf {TYPE_2__* page_list; TYPE_2__ direct; } ;
typedef int u64 ;
struct mthca_pd {int pd_num; } ;
struct mthca_mr {int dummy; } ;
struct mthca_dev {TYPE_1__* pdev; } ;
typedef int dma_addr_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int *,int,int*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*) ;
 void* FUNC_4 (int,int ) ;
 int VAR_6 ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct mthca_dev*,int,union mthca_buf*,int,int *) ;
 int FUNC_7 (struct mthca_dev*,int ,int*,int,int,int ,int,int,struct mthca_mr*) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;

int FUNC_9(struct mthca_dev *VAR_7, int VAR_8, int VAR_9,
      union mthca_buf *VAR_10, int *VAR_11, struct mthca_pd *VAR_12,
      int VAR_13, struct mthca_mr *VAR_14)
{
 int VAR_15 = -VAR_0;
 int VAR_16, VAR_17;
 u64 *VAR_18 = ((void*)0);
 dma_addr_t VAR_19;
 int VAR_20;

 if (VAR_8 <= VAR_9) {
  *VAR_11 = 1;
  VAR_16 = 1;
  VAR_17 = FUNC_2(VAR_8) + VAR_4;

  VAR_10->direct.buf = FUNC_1(&VAR_7->pdev->dev,
           VAR_8, &VAR_19, VAR_1);
  if (!VAR_10->direct.buf)
   return -VAR_0;

  FUNC_8(&VAR_10->direct, VAR_6, VAR_19);

  FUNC_5(VAR_10->direct.buf, 0, VAR_8);

  while (VAR_19 & ((1 << VAR_17) - 1)) {
   --VAR_17;
   VAR_16 *= 2;
  }

  VAR_18 = FUNC_4(VAR_16 * sizeof *VAR_18, VAR_1);
  if (!VAR_18)
   goto err_free;

  for (VAR_20 = 0; VAR_20 < VAR_16; ++VAR_20)
   VAR_18[VAR_20] = VAR_19 + VAR_20 * (1 << VAR_17);
 } else {
  *VAR_11 = 0;
  VAR_16 = (VAR_8 + VAR_5 - 1) / VAR_5;
  VAR_17 = VAR_4;

  VAR_18 = FUNC_4(VAR_16 * sizeof *VAR_18, VAR_1);
  if (!VAR_18)
   return -VAR_0;

  VAR_10->page_list = FUNC_4(VAR_16 * sizeof *VAR_10->page_list,
      VAR_1);
  if (!VAR_10->page_list)
   goto err_out;

  for (VAR_20 = 0; VAR_20 < VAR_16; ++VAR_20)
   VAR_10->page_list[VAR_20].buf = ((void*)0);

  for (VAR_20 = 0; VAR_20 < VAR_16; ++VAR_20) {
   VAR_10->page_list[VAR_20].buf =
    FUNC_1(&VAR_7->pdev->dev, VAR_5,
         &VAR_19, VAR_1);
   if (!VAR_10->page_list[VAR_20].buf)
    goto err_free;

   VAR_18[VAR_20] = VAR_19;
   FUNC_8(&VAR_10->page_list[VAR_20], VAR_6, VAR_19);

   FUNC_0(VAR_10->page_list[VAR_20].buf);
  }
 }

 VAR_15 = FUNC_7(VAR_7, VAR_12->pd_num,
      VAR_18, VAR_17, VAR_16,
      0, VAR_8,
      VAR_2 |
      (VAR_13 ? VAR_3 : 0),
      VAR_14);
 if (VAR_15)
  goto err_free;

 FUNC_3(VAR_18);

 return 0;

err_free:
 FUNC_6(VAR_7, VAR_8, VAR_10, *VAR_11, ((void*)0));

err_out:
 FUNC_3(VAR_18);

 return VAR_15;
}
