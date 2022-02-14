
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pdev; } ;
typedef TYPE_2__ ctlr_info_t ;
struct TYPE_4__ {int dev; } ;
typedef int SGDescriptor_struct ;


 int VAR_0 ;
 int FUNC_0 (int **,int) ;
 int FUNC_1 (int *,char*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static SGDescriptor_struct **FUNC_3(
 ctlr_info_t *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4;
 SGDescriptor_struct **VAR_5;

 if (VAR_2 <= 0)
  return ((void*)0);

 VAR_5 = FUNC_2(sizeof(*VAR_5) * VAR_3, VAR_0);
 if (!VAR_5)
  return ((void*)0);


 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {

  VAR_5[VAR_4] = FUNC_2((VAR_2 *
   sizeof(*VAR_5[VAR_4])), VAR_0);
  if (!VAR_5[VAR_4]) {
   FUNC_1(&VAR_1->pdev->dev, "Cannot get memory "
    "for s/g chains.\n");
   goto clean;
  }
 }
 return VAR_5;
clean:
 FUNC_0(VAR_5, VAR_3);
 return ((void*)0);
}
