
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct super_block {TYPE_2__* s_bdev; int * s_bdi; int s_dev; } ;
struct TYPE_4__ {int bd_dev; } ;
struct TYPE_3__ {int backing_dev_info; } ;


 TYPE_1__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, void *VAR_1)
{
 VAR_0->s_bdev = VAR_1;
 VAR_0->s_dev = VAR_0->s_bdev->bd_dev;





 VAR_0->s_bdi = &FUNC_0(VAR_0->s_bdev)->backing_dev_info;
 return 0;
}
