
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mt9p012_i2c_reg_conf {int wdata; int waddr; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {int addr; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int32_t FUNC_1(
 struct mt9p012_i2c_reg_conf *VAR_2, int VAR_3)
{
 int VAR_4;
 int32_t VAR_5 = -VAR_0;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(VAR_1->addr,
   VAR_2->waddr, VAR_2->wdata);
  if (VAR_5 < 0)
   break;
  VAR_2++;
 }

 return VAR_5;
}
