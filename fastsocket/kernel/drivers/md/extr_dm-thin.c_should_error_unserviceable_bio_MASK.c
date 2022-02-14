
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int error_if_no_space; } ;
struct pool {TYPE_1__ pf; } ;
typedef enum pool_mode { ____Placeholder_pool_mode } pool_mode ;


 int FUNC_0 (char*) ;




 int FUNC_1 (struct pool*) ;

__attribute__((used)) static bool FUNC_2(struct pool *VAR_0)
{
 enum pool_mode VAR_1 = FUNC_1(VAR_0);

 switch (VAR_1) {
 case 128:

  FUNC_0("bio unserviceable, yet pool is in PM_WRITE mode");
  return 1;

 case 130:
  return VAR_0->pf.error_if_no_space;

 case 129:
 case 131:
  return 1;
 default:

  FUNC_0("bio unserviceable, yet pool has an unknown mode");
  return 1;
 }
}
