
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int flags; } ;
struct TYPE_17__ {TYPE_7__ generic; } ;
struct TYPE_14__ {int flags; } ;
struct TYPE_15__ {TYPE_5__ generic; } ;
struct TYPE_18__ {int modelpage; int nummodels; int selectedmodel; int numpages; TYPE_8__ right; TYPE_6__ left; TYPE_4__* picbuttons; TYPE_2__* pics; int ** modelnames; } ;
struct TYPE_12__ {int flags; } ;
struct TYPE_13__ {TYPE_3__ generic; } ;
struct TYPE_10__ {int flags; int * name; } ;
struct TYPE_11__ {TYPE_1__ generic; scalar_t__ shader; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_9__ VAR_6 ;

__attribute__((used)) static void FUNC_0( void )
{
 int VAR_7;
    int VAR_8;

 VAR_8 = VAR_6.modelpage * VAR_0;
 for (VAR_7=0; VAR_7<VAR_2*VAR_1; VAR_7++,VAR_8++)
 {
  if (VAR_8 < VAR_6.nummodels)
  {

    VAR_6.pics[VAR_7].generic.name = VAR_6.modelnames[VAR_8];
   VAR_6.picbuttons[VAR_7].generic.flags &= ~VAR_4;
  }
  else
  {

    VAR_6.pics[VAR_7].generic.name = ((void*)0);
   VAR_6.picbuttons[VAR_7].generic.flags |= VAR_4;
  }

   VAR_6.pics[VAR_7].generic.flags &= ~VAR_3;
   VAR_6.pics[VAR_7].shader = 0;
   VAR_6.picbuttons[VAR_7].generic.flags |= VAR_5;
 }

 if (VAR_6.selectedmodel/VAR_0 == VAR_6.modelpage)
 {

  VAR_7 = VAR_6.selectedmodel % VAR_0;

  VAR_6.pics[VAR_7].generic.flags |= VAR_3;
  VAR_6.picbuttons[VAR_7].generic.flags &= ~VAR_5;
 }

 if (VAR_6.numpages > 1)
 {
  if (VAR_6.modelpage > 0)
   VAR_6.left.generic.flags &= ~VAR_4;
  else
   VAR_6.left.generic.flags |= VAR_4;

  if (VAR_6.modelpage < VAR_6.numpages-1)
   VAR_6.right.generic.flags &= ~VAR_4;
  else
   VAR_6.right.generic.flags |= VAR_4;
 }
 else
 {

  VAR_6.left.generic.flags |= VAR_4;
  VAR_6.right.generic.flags |= VAR_4;
 }
}
