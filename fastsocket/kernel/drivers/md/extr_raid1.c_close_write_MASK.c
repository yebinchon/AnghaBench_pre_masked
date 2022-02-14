
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r1bio {int behind_page_count; TYPE_1__* mddev; int state; int sectors; int sector; TYPE_2__* behind_bvecs; } ;
struct TYPE_4__ {int bv_page; } ;
struct TYPE_3__ {int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct r1bio *VAR_2)
{

 if (FUNC_4(VAR_0, &VAR_2->state)) {

  int VAR_3 = VAR_2->behind_page_count;
  while (VAR_3--)
   FUNC_3(VAR_2->behind_bvecs[VAR_3].bv_page);
  FUNC_1(VAR_2->behind_bvecs);
  VAR_2->behind_bvecs = ((void*)0);
 }

 FUNC_0(VAR_2->mddev->bitmap, VAR_2->sector,
   VAR_2->sectors,
   !FUNC_4(VAR_1, &VAR_2->state),
   FUNC_4(VAR_0, &VAR_2->state));
 FUNC_2(VAR_2->mddev);
}
