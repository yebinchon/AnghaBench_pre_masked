
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r10bio {TYPE_1__* mddev; int state; int sectors; int sector; } ;
struct TYPE_2__ {int bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct r10bio *VAR_1)
{

 FUNC_0(VAR_1->mddev->bitmap, VAR_1->sector,
   VAR_1->sectors,
   !FUNC_2(VAR_0, &VAR_1->state),
   0);
 FUNC_1(VAR_1->mddev);
}
