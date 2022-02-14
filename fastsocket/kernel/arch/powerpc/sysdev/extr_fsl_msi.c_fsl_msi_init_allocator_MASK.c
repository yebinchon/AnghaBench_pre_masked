
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_msi {int bitmap; TYPE_1__* irqhost; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct fsl_msi *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_1->bitmap, VAR_0,
         VAR_1->irqhost->of_node);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_2(&VAR_1->bitmap);
 if (VAR_2 < 0) {
  FUNC_1(&VAR_1->bitmap);
  return VAR_2;
 }

 return 0;
}
