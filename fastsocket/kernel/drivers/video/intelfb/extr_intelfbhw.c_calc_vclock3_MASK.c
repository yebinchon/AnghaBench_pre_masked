
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ref_clk; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
 if (VAR_4 == 0 || VAR_3 == 0)
  return 0;
 return VAR_0[VAR_1].ref_clk * VAR_2 / VAR_3 / VAR_4;
}
