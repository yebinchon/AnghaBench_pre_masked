
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {unsigned int v_depth; unsigned int v_rowbytes; scalar_t__ v_baseaddr; } ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_0(unsigned int VAR_2, unsigned int VAR_3)
{
 uint32_t *VAR_4;
 int VAR_5, VAR_6;

 if(!VAR_1.v_depth)
  return;

 VAR_4 = (uint32_t*)(VAR_1.v_baseaddr +
   (VAR_3 * VAR_0 * VAR_1.v_rowbytes) +
   (VAR_2 * VAR_1.v_depth));
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  switch (VAR_1.v_depth) {
   case 8:
    VAR_4[0] = ~VAR_4[0];
    VAR_4[1] = ~VAR_4[1];
    break;
   case 16:
    for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
     VAR_4[VAR_6] = ~VAR_4[VAR_6];
    break;
   case 32:
    for (VAR_6 = 0; VAR_6 < 8; VAR_6++)
     VAR_4[VAR_6] = ~VAR_4[VAR_6];
    break;
  }
  VAR_4 = (uint32_t*)(((unsigned char*)VAR_4)+VAR_1.v_rowbytes);
 }
}
