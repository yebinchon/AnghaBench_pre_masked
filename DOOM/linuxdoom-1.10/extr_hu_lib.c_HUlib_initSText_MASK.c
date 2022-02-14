
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int height; } ;
typedef TYPE_1__ patch_t ;
struct TYPE_7__ {int h; int laston; int * l; scalar_t__ cl; int * on; } ;
typedef TYPE_2__ hu_stext_t ;
typedef int boolean ;


 int FUNC_0 (int *,int,int,TYPE_1__**,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2
( hu_stext_t* VAR_0,
  int VAR_1,
  int VAR_2,
  int VAR_3,
  patch_t** VAR_4,
  int VAR_5,
  boolean* VAR_6 )
{

    int VAR_7;

    VAR_0->h = VAR_3;
    VAR_0->on = VAR_6;
    VAR_0->laston = 1;
    VAR_0->cl = 0;
    for (VAR_7=0;VAR_7<VAR_3;VAR_7++)
 FUNC_0(&VAR_0->l[VAR_7],
      VAR_1, VAR_2 - VAR_7*(FUNC_1(VAR_4[0]->height)+1),
      VAR_4, VAR_5);

}
