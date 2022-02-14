
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * robj; int table_size; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_device*,int ,int ,int,int ,int *,int **) ;

int FUNC_1(struct radeon_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->gart.robj == ((void*)0)) {
  VAR_3 = FUNC_0(VAR_2, VAR_2->gart.table_size,
         VAR_0, 1, VAR_1,
         ((void*)0), &VAR_2->gart.robj);
  if (VAR_3) {
   return VAR_3;
  }
 }
 return 0;
}
