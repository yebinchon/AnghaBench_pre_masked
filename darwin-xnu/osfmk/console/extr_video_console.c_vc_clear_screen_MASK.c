
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int v_rowbytes; int v_rowscanbytes; unsigned int v_rows; int v_height; scalar_t__ v_baseaddr; int v_depth; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,unsigned int,int) ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void
FUNC_1(unsigned int VAR_3, unsigned int VAR_4, unsigned int VAR_5,
  unsigned int VAR_6, int VAR_7)
{
 uint32_t *VAR_8, *VAR_9, *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if(!VAR_2.v_depth)
  return;

 VAR_11 = VAR_2.v_rowbytes * (VAR_0 >> 2);
 VAR_13 = VAR_2.v_rowscanbytes >> 2;
 VAR_14 = VAR_2.v_rowbytes >> 2;

 VAR_8 = (uint32_t*) VAR_2.v_baseaddr;
 VAR_9 = (uint32_t*) VAR_2.v_baseaddr;

 switch (VAR_7) {
 case 0:
  FUNC_0(VAR_3, VAR_4, 0);
  if (VAR_4 < VAR_6 - 1) {
   VAR_8 += (VAR_4 + 1) * VAR_11;
   VAR_9 += VAR_6 * VAR_11;
  }
  break;
 case 1:
  FUNC_0(VAR_3, VAR_4, 1);
  if (VAR_4 > VAR_5) {
   VAR_8 += VAR_5 * VAR_11;
   VAR_9 += VAR_4 * VAR_11;
  }
  break;
 case 2:
  VAR_8 += VAR_5 * VAR_11;
  if (VAR_6 == VAR_2.v_rows) {
   VAR_9 += VAR_14 * VAR_2.v_height;
  } else {
   VAR_9 += VAR_6 * VAR_11;
  }
  break;
 }

 for (VAR_10 = VAR_8 ; VAR_10 < VAR_9 ; VAR_10 += VAR_14) {
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   *(VAR_10+VAR_12) = VAR_1;
 }
}
