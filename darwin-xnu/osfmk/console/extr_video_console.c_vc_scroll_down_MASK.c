
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int uint32_t ;
struct TYPE_2__ {int v_rowbytes; int v_rowscanbytes; scalar_t__ v_baseaddr; int v_depth; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 uint32_t *VAR_5, *VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if(!VAR_1.v_depth)
  return;

 VAR_7 = VAR_1.v_rowbytes * (VAR_0 >> 2);
 VAR_10 = VAR_1.v_rowbytes >> 2;
 VAR_11 = VAR_1.v_rowscanbytes >> 2;

 VAR_6 = (uint32_t *) VAR_1.v_baseaddr + (VAR_7 * VAR_4)
  - (VAR_10 - VAR_11);
 VAR_5 = VAR_6 - (VAR_7 * VAR_2);

 VAR_8 = (VAR_4 - VAR_3) - VAR_2;

 while (VAR_8-- > 0) {
  for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {



   FUNC_0(VAR_5,
     (VAR_5-(VAR_1.v_rowscanbytes >> 2)),
     VAR_6);

   VAR_5 -= VAR_10;
   VAR_6 -= VAR_10;
  }
 }
}
