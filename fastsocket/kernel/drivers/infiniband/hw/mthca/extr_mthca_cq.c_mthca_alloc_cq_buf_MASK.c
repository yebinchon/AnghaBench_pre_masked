
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mthca_dev {int driver_pd; } ;
struct mthca_cq_buf {int mr; int is_direct; int queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mthca_cq_buf*,int) ;
 int FUNC_1 (struct mthca_dev*,int,int ,int *,int *,int *,int,int *) ;
 int FUNC_2 (int ) ;

int FUNC_3(struct mthca_dev *VAR_2, struct mthca_cq_buf *VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_1(VAR_2, VAR_4 * VAR_0,
         VAR_1,
         &VAR_3->queue, &VAR_3->is_direct,
         &VAR_2->driver_pd, 1, &VAR_3->mr);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6)
  FUNC_2(FUNC_0(VAR_3, VAR_6));

 return 0;
}
