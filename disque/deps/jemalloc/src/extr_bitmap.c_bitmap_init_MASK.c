
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t bitmap_t ;
struct TYPE_5__ {size_t nlevels; size_t nbits; TYPE_1__* levels; } ;
typedef TYPE_2__ bitmap_info_t ;
struct TYPE_4__ {int group_offset; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t*,int,int) ;

void
FUNC_1(bitmap_t *VAR_3, const bitmap_info_t *VAR_4)
{
 size_t VAR_5;
 unsigned VAR_6;
 FUNC_0(VAR_3, 0xffU, VAR_4->levels[VAR_4->nlevels].group_offset <<
     VAR_2);
 VAR_5 = (VAR_0 - (VAR_4->nbits & VAR_1))
     & VAR_1;
 if (VAR_5 != 0)
  VAR_3[VAR_4->levels[1].group_offset - 1] >>= VAR_5;
 for (VAR_6 = 1; VAR_6 < VAR_4->nlevels; VAR_6++) {
  size_t VAR_7 = VAR_4->levels[VAR_6].group_offset -
      VAR_4->levels[VAR_6-1].group_offset;
  VAR_5 = (VAR_0 - (VAR_7 &
      VAR_1)) & VAR_1;
  if (VAR_5 != 0)
   VAR_3[VAR_4->levels[VAR_6+1].group_offset - 1] >>= VAR_5;
 }
}
