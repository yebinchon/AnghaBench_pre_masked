
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ optimal_sectors; scalar_t__ max_unmap_lba_count; scalar_t__ max_unmap_block_desc_count; scalar_t__ unmap_granularity; scalar_t__ unmap_granularity_alignment; int max_write_same_len; int hw_max_sectors; int fabric_max_sectors; scalar_t__ emulate_tpws; scalar_t__ emulate_tpu; } ;
struct se_device {TYPE_2__ dev_attrib; TYPE_1__* transport; } ;
struct se_cmd {struct se_device* se_dev; } ;
typedef int sense_reason_t ;
struct TYPE_3__ {unsigned char (* get_device_type ) (struct se_device*) ;} ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int,unsigned char*) ;
 int FUNC_2 (scalar_t__,unsigned char*) ;
 int FUNC_3 (int ,unsigned char*) ;
 unsigned char FUNC_4 (struct se_device*) ;

__attribute__((used)) static sense_reason_t
FUNC_5(struct se_cmd *VAR_0, unsigned char *VAR_1)
{
 struct se_device *VAR_2 = VAR_0->se_dev;
 u32 VAR_3;
 int VAR_4 = 0;






 if (VAR_2->dev_attrib.emulate_tpu || VAR_2->dev_attrib.emulate_tpws)
  VAR_4 = 1;

 VAR_1[0] = VAR_2->transport->get_device_type(VAR_2);
 VAR_1[3] = VAR_4 ? 0x3c : 0x10;


 VAR_1[4] = 0x01;




 FUNC_1(1, &VAR_1[6]);




 VAR_3 = FUNC_0(VAR_2->dev_attrib.fabric_max_sectors,
     VAR_2->dev_attrib.hw_max_sectors);
 FUNC_2(VAR_3, &VAR_1[8]);




 FUNC_2(VAR_2->dev_attrib.optimal_sectors, &VAR_1[12]);




 if (!VAR_4)
  goto max_write_same;




 FUNC_2(VAR_2->dev_attrib.max_unmap_lba_count, &VAR_1[20]);




 FUNC_2(VAR_2->dev_attrib.max_unmap_block_desc_count,
      &VAR_1[24]);




 FUNC_2(VAR_2->dev_attrib.unmap_granularity, &VAR_1[28]);




 FUNC_2(VAR_2->dev_attrib.unmap_granularity_alignment,
      &VAR_1[32]);
 if (VAR_2->dev_attrib.unmap_granularity_alignment != 0)
  VAR_1[32] |= 0x80;




max_write_same:
 FUNC_3(VAR_2->dev_attrib.max_write_same_len, &VAR_1[36]);

 return 0;
}
