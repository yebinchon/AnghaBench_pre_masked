
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hd_geometry {int start; } ;
struct dasd_device {TYPE_2__* block; TYPE_1__* discipline; } ;
struct block_device {int bd_disk; } ;
struct TYPE_4__ {int s2b_shift; } ;
struct TYPE_3__ {int (* fill_geometry ) (TYPE_2__*,struct hd_geometry*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dasd_device* FUNC_0 (int ) ;
 int FUNC_1 (struct dasd_device*) ;
 int FUNC_2 (struct block_device*) ;
 int FUNC_3 (TYPE_2__*,struct hd_geometry*) ;

__attribute__((used)) static int FUNC_4(struct block_device *VAR_2, struct hd_geometry *VAR_3)
{
 struct dasd_device *VAR_4;

 VAR_4 = FUNC_0(VAR_2->bd_disk);
 if (!VAR_4)
  return -VAR_1;

 if (!VAR_4->discipline ||
     !VAR_4->discipline->fill_geometry) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }
 VAR_4->discipline->fill_geometry(VAR_4->block, VAR_3);
 VAR_3->start = FUNC_2(VAR_2) >> VAR_4->block->s2b_shift;
 FUNC_1(VAR_4);
 return 0;
}
