
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ttm_tt {int num_pages; } ;
struct radeon_ttm_tt {int offset; int rdev; } ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct ttm_tt *VAR_0)
{
 struct radeon_ttm_tt *VAR_1 = (void *)VAR_0;

 FUNC_0(VAR_1->rdev, VAR_1->offset, VAR_0->num_pages);
 return 0;
}
