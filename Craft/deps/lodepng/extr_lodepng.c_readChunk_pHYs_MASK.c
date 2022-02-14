
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int phys_defined; int phys_x; int phys_y; unsigned char phys_unit; } ;
typedef TYPE_1__ LodePNGInfo ;



__attribute__((used)) static unsigned FUNC_0(LodePNGInfo* VAR_0, const unsigned char* VAR_1, size_t VAR_2)
{
  if(VAR_2 != 9) return 74;

  VAR_0->phys_defined = 1;
  VAR_0->phys_x = 16777216 * VAR_1[0] + 65536 * VAR_1[1] + 256 * VAR_1[2] + VAR_1[3];
  VAR_0->phys_y = 16777216 * VAR_1[4] + 65536 * VAR_1[5] + 256 * VAR_1[6] + VAR_1[7];
  VAR_0->phys_unit = VAR_1[8];

  return 0;
}
