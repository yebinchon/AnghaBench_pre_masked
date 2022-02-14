
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ pict_res; } ;
struct TYPE_3__ {int size_h; int blk_l; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static uint32_t FUNC_0(void)
{
 uint32_t VAR_4;

 if (VAR_2->pict_res == VAR_0)
  VAR_4 =
  VAR_3[VAR_1].size_h +
  VAR_3[VAR_1].blk_l;
 else
  VAR_4 = 3961 * 3;

 return VAR_4;
}
