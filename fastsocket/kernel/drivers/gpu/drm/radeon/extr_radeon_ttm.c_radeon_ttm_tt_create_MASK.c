
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct ttm_tt {int * func; } ;
struct ttm_bo_device {int dummy; } ;
struct TYPE_6__ {struct ttm_tt ttm; } ;
struct radeon_ttm_tt {TYPE_3__ ttm; struct radeon_device* rdev; } ;
struct radeon_device {int flags; TYPE_2__* ddev; } ;
struct page {int dummy; } ;
struct TYPE_5__ {TYPE_1__* agp; } ;
struct TYPE_4__ {int bridge; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radeon_ttm_tt*) ;
 struct radeon_ttm_tt* FUNC_1 (int,int ) ;
 int VAR_2 ;
 struct radeon_device* FUNC_2 (struct ttm_bo_device*) ;
 struct ttm_tt* FUNC_3 (struct ttm_bo_device*,int ,unsigned long,int ,struct page*) ;
 scalar_t__ FUNC_4 (TYPE_3__*,struct ttm_bo_device*,unsigned long,int ,struct page*) ;

__attribute__((used)) static struct ttm_tt *FUNC_5(struct ttm_bo_device *VAR_3,
        unsigned long VAR_4, uint32_t VAR_5,
        struct page *VAR_6)
{
 struct radeon_device *VAR_7;
 struct radeon_ttm_tt *VAR_8;

 VAR_7 = FUNC_2(VAR_3);







 VAR_8 = FUNC_1(sizeof(struct radeon_ttm_tt), VAR_0);
 if (VAR_8 == ((void*)0)) {
  return ((void*)0);
 }
 VAR_8->ttm.ttm.func = &VAR_2;
 VAR_8->rdev = VAR_7;
 if (FUNC_4(&VAR_8->ttm, VAR_3, VAR_4, VAR_5, VAR_6)) {
  FUNC_0(VAR_8);
  return ((void*)0);
 }
 return &VAR_8->ttm.ttm;
}
