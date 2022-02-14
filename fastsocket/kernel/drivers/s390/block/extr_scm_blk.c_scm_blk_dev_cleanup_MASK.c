
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct scm_blk_dev {TYPE_1__* gendisk; int tasklet; } ;
struct TYPE_3__ {int queue; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct scm_blk_dev *VAR_0)
{
 FUNC_3(&VAR_0->tasklet);
 FUNC_1(VAR_0->gendisk);
 FUNC_0(VAR_0->gendisk->queue);
 FUNC_2(VAR_0->gendisk);
}
