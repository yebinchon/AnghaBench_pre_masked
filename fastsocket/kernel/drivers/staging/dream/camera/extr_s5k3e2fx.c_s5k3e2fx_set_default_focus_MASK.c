
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {scalar_t__ curr_lens_pos; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;

__attribute__((used)) static int32_t FUNC_1(void)
{
 int32_t VAR_2 = 0;

 VAR_2 = FUNC_0(VAR_0->addr,
   0x3131, 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_0(VAR_0->addr,
   0x3132, 0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_1->curr_lens_pos = 0;

 return VAR_2;
}
