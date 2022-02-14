
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct rd_dev {int rd_page_count; } ;
typedef unsigned long long sector_t ;


 int VAR_0 ;
 struct rd_dev* FUNC_0 (struct se_device*) ;

__attribute__((used)) static sector_t FUNC_1(struct se_device *VAR_1)
{
 struct rd_dev *VAR_2 = FUNC_0(VAR_1);

 unsigned long long VAR_3 = ((VAR_2->rd_page_count * VAR_0) /
   VAR_1->dev_attrib.block_size) - 1;

 return VAR_3;
}
