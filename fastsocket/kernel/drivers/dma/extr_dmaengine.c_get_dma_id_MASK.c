
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_device {int dev_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dma_device *VAR_5)
{
 int VAR_6;

 idr_retry:
 if (!FUNC_1(&VAR_3, VAR_2))
  return -VAR_1;
 FUNC_2(&VAR_4);
 VAR_6 = FUNC_0(&VAR_3, ((void*)0), &VAR_5->dev_id);
 FUNC_3(&VAR_4);
 if (VAR_6 == -VAR_0)
  goto idr_retry;
 else if (VAR_6 != 0)
  return VAR_6;

 return 0;
}
