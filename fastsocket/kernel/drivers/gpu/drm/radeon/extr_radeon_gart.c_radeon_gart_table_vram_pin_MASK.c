
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int table_addr; int robj; int ptr; } ;
struct radeon_device {TYPE_1__ gart; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct radeon_device *VAR_1)
{
 uint64_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_2(VAR_1->gart.robj, 0);
 if (FUNC_5(VAR_3 != 0))
  return VAR_3;
 VAR_3 = FUNC_1(VAR_1->gart.robj,
    VAR_0, &VAR_2);
 if (VAR_3) {
  FUNC_4(VAR_1->gart.robj);
  return VAR_3;
 }
 VAR_3 = FUNC_0(VAR_1->gart.robj, &VAR_1->gart.ptr);
 if (VAR_3)
  FUNC_3(VAR_1->gart.robj);
 FUNC_4(VAR_1->gart.robj);
 VAR_1->gart.table_addr = VAR_2;
 return VAR_3;
}
