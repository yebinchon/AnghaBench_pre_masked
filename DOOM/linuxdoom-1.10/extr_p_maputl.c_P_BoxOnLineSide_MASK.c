
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int slopetype; int dy; TYPE_1__* v1; int dx; } ;
typedef TYPE_2__ line_t ;
typedef int fixed_t ;
struct TYPE_5__ {int x; int y; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ,TYPE_2__*) ;





int
FUNC_1
( fixed_t* VAR_4,
  line_t* VAR_5 )
{
    int VAR_6;
    int VAR_7;

    switch (VAR_5->slopetype)
    {
      case 131:
 VAR_6 = VAR_4[VAR_3] > VAR_5->v1->y;
 VAR_7 = VAR_4[VAR_0] > VAR_5->v1->y;
 if (VAR_5->dx < 0)
 {
     VAR_6 ^= 1;
     VAR_7 ^= 1;
 }
 break;

      case 128:
 VAR_6 = VAR_4[VAR_2] < VAR_5->v1->x;
 VAR_7 = VAR_4[VAR_1] < VAR_5->v1->x;
 if (VAR_5->dy < 0)
 {
     VAR_6 ^= 1;
     VAR_7 ^= 1;
 }
 break;

      case 129:
 VAR_6 = FUNC_0 (VAR_4[VAR_1], VAR_4[VAR_3], VAR_5);
 VAR_7 = FUNC_0 (VAR_4[VAR_2], VAR_4[VAR_0], VAR_5);
 break;

      case 130:
 VAR_6 = FUNC_0 (VAR_4[VAR_2], VAR_4[VAR_3], VAR_5);
 VAR_7 = FUNC_0 (VAR_4[VAR_1], VAR_4[VAR_0], VAR_5);
 break;
    }

    if (VAR_6 == VAR_7)
 return VAR_6;
    return -1;
}
