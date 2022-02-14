
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct se_cmd {TYPE_2__* se_dev; } ;
struct TYPE_3__ {int block_size; } ;
struct TYPE_4__ {TYPE_1__ dev_attrib; } ;



__attribute__((used)) static inline u32 FUNC_0(struct se_cmd *VAR_0, u32 VAR_1)
{
 return VAR_0->se_dev->dev_attrib.block_size * VAR_1;
}
