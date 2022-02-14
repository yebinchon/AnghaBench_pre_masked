
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct TYPE_3__ {unsigned long long block_size; } ;
struct se_device {TYPE_2__* transport; TYPE_1__ dev_attrib; } ;
struct se_cmd {unsigned long long data_length; unsigned long long t_task_lba; struct se_device* se_dev; } ;
struct TYPE_4__ {int (* get_blocks ) (struct se_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned long long,unsigned long long,unsigned long long) ;
 int FUNC_1 (struct se_device*) ;

__attribute__((used)) static int FUNC_2(struct se_cmd *VAR_1)
{
 struct se_device *VAR_2 = VAR_1->se_dev;
 unsigned long long VAR_3;
 u32 VAR_4;

 VAR_4 = VAR_1->data_length / VAR_2->dev_attrib.block_size;
 VAR_3 = VAR_2->transport->get_blocks(VAR_2) + 1;

 if (VAR_1->t_task_lba + VAR_4 > VAR_3) {
  FUNC_0("target: lba %llu, sectors %u exceeds end lba %llu\n",
   VAR_1->t_task_lba, VAR_4, VAR_3);
  return -VAR_0;
 }

 return 0;
}
