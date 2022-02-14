
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int medium_changed; } ;
struct tape_device {TYPE_1__ blk_data; } ;
struct gendisk {scalar_t__ private_data; } ;


 int FUNC_0 (int,char*,struct tape_device*,int) ;

__attribute__((used)) static int
FUNC_1(struct gendisk *VAR_0)
{
 struct tape_device *VAR_1;

 VAR_1 = (struct tape_device *) VAR_0->private_data;
 FUNC_0(6, "tapeblock_medium_changed(%p) = %d\n",
  VAR_1, VAR_1->blk_data.medium_changed);

 return VAR_1->blk_data.medium_changed;
}
