
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_11__ {int planenum; int texinfo; } ;
typedef TYPE_1__ sin_dface_t ;
struct TYPE_12__ {int planenum; int texinfo; } ;
typedef TYPE_2__ sin_dbrushside_t ;
struct TYPE_13__ {int numsides; int firstside; } ;
typedef TYPE_3__ sin_dbrush_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int*,int,int ) ;
 TYPE_3__* VAR_4 ;
 TYPE_2__* VAR_5 ;
 int* VAR_6 ;
 TYPE_1__* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_8(void)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 sin_dbrushside_t *VAR_14;
 sin_dbrush_t *VAR_15;
 sin_dface_t *VAR_16;
 winding_t *VAR_17;

 FUNC_7(VAR_6, 0, VAR_0);

   for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
   {
  VAR_15 = &VAR_4[VAR_10];

  if (FUNC_3(VAR_15)) continue;

  for (VAR_11 = 0; VAR_11 < VAR_15->numsides; VAR_11++)
  {
   VAR_14 = &VAR_5[VAR_15->firstside + VAR_11];

   VAR_17 = FUNC_1(VAR_15, VAR_14);
   if (!VAR_17)
   {
    VAR_6[VAR_15->firstside + VAR_11] = 1;
    continue;
   }
   else
   {

    if (FUNC_6(VAR_17))
    {
     FUNC_0(VAR_17);
     VAR_6[VAR_15->firstside + VAR_11] = 1;
     continue;
    }
    else
    {
     VAR_13 = FUNC_5(VAR_17);
     if (VAR_13 == VAR_1
      || VAR_13 == VAR_3
      || VAR_13 == VAR_2

      )
     {
      FUNC_0(VAR_17);
      VAR_6[VAR_15->firstside + VAR_11] = 1;
      continue;
     }
    }
   }
   if (FUNC_4(VAR_17) < 20)
   {
    VAR_6[VAR_15->firstside + VAR_11] = 1;
   }

   for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++)
   {
    VAR_16 = &VAR_7[VAR_12];

    if ((VAR_16->planenum&~1) != (VAR_14->planenum&~1)) continue;

    if (FUNC_2(VAR_16, VAR_17))
    {
     VAR_14->texinfo = VAR_16->texinfo;
     VAR_6[VAR_15->firstside + VAR_11] = 1;
     break;
    }
   }
   FUNC_0(VAR_17);
  }
 }
}
