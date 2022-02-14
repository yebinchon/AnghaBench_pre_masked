
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int spmr; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static unsigned long FUNC_0(void)
{



 static int VAR_1[] = {
  68, 1, 12, 16,
  20, 24, 28, 32,
  36, 40, 44, 48,
  52, 56, 60, 64
 };
 int VAR_2 = (VAR_0->spmr >> 24) & 0xf;
 return VAR_1[VAR_2];
}
