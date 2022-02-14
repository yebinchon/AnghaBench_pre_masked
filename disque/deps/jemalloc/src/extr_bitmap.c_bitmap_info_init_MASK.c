
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int nlevels; size_t nbits; TYPE_1__* levels; } ;
typedef TYPE_2__ bitmap_info_t ;
struct TYPE_4__ {scalar_t__ group_offset; } ;


 size_t FUNC_0 (size_t) ;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 size_t FUNC_1 (int) ;
 int FUNC_2 (int) ;

void
FUNC_3(bitmap_info_t *VAR_3, size_t VAR_4)
{
 unsigned VAR_5;
 size_t VAR_6;

 FUNC_2(VAR_4 > 0);
 FUNC_2(VAR_4 <= (FUNC_1(1) << VAR_2));






 VAR_3->levels[0].group_offset = 0;
 VAR_6 = FUNC_0(VAR_4);
 for (VAR_5 = 1; VAR_6 > 1; VAR_5++) {
  FUNC_2(VAR_5 < VAR_1);
  VAR_3->levels[VAR_5].group_offset = VAR_3->levels[VAR_5-1].group_offset
      + VAR_6;
  VAR_6 = FUNC_0(VAR_6);
 }
 VAR_3->levels[VAR_5].group_offset = VAR_3->levels[VAR_5-1].group_offset
     + VAR_6;
 FUNC_2(VAR_3->levels[VAR_5].group_offset <= VAR_0);
 VAR_3->nlevels = VAR_5;
 VAR_3->nbits = VAR_4;
}
