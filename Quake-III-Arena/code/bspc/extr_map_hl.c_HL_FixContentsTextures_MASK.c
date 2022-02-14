
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ side; int numsides; TYPE_1__* sides; struct TYPE_6__* next; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_7__ {int texture; } ;
struct TYPE_5__ {int texinfo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,scalar_t__) ;
 int VAR_3 ;
 TYPE_3__* VAR_4 ;

void FUNC_2(bspbrush_t *VAR_5)
{
 int VAR_6, VAR_7;
 bspbrush_t *VAR_8;

 for (VAR_8 = VAR_5; VAR_8; VAR_8 = VAR_8->next)
 {

  if (VAR_8->side != VAR_2 &&
   VAR_8->side != VAR_1 &&
   VAR_8->side != VAR_0) continue;

  for (VAR_6 = 0; VAR_6 < VAR_8->numsides; VAR_6++)
  {
   VAR_7 = VAR_8->sides[VAR_6].texinfo;
   if (FUNC_0(VAR_4[VAR_7].texture) == VAR_8->side) break;
  }

  if (VAR_6 >= VAR_8->numsides)
  {
   VAR_7 = -1;
   for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
   {
    if (FUNC_0(VAR_4[VAR_6].texture) == VAR_8->side)
    {
     VAR_7 = VAR_6;
     break;
    }
   }
  }

  if (VAR_7 >= 0)
  {

   for (VAR_6 = 0; VAR_6 < VAR_8->numsides; VAR_6++)
   {
    VAR_8->sides[VAR_6].texinfo = VAR_7;
   }
  }
  else FUNC_1("brush contents %d with wrong textures\n", VAR_8->side);

 }
}
