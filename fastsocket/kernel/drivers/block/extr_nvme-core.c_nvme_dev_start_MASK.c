
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvme_dev {int node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvme_dev*) ;
 int FUNC_3 (struct nvme_dev*) ;
 int FUNC_4 (struct nvme_dev*) ;
 int FUNC_5 (struct nvme_dev*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct nvme_dev *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  goto unmap;

 FUNC_6(&VAR_2);
 FUNC_0(&VAR_3->node, &VAR_1);
 FUNC_7(&VAR_2);

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 && VAR_4 != -VAR_0)
  goto disable;

 return VAR_4;

 disable:
 FUNC_6(&VAR_2);
 FUNC_1(&VAR_3->node);
 FUNC_7(&VAR_2);
 unmap:
 FUNC_4(VAR_3);
 return VAR_4;
}
