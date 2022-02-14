
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int vec_t ;
struct TYPE_16__ {int flags; int surf; int texinfo; int winding; } ;
typedef TYPE_1__ side_t ;
struct TYPE_17__ {int name; } ;
typedef TYPE_2__ q1_miptex_t ;
struct TYPE_18__ {int* dataofs; } ;
typedef TYPE_3__ q1_dmiptexlump_t ;
typedef int defaultvec ;
typedef int byte ;
struct TYPE_19__ {int numsides; struct TYPE_19__* next; TYPE_1__* sides; } ;
typedef TYPE_4__ bspbrush_t ;
struct TYPE_23__ {int nexttexinfo; int texture; scalar_t__ value; int flags; int ** vecs; } ;
struct TYPE_22__ {scalar_t__ planenum; int texinfo; } ;
struct TYPE_21__ {scalar_t__ planenum; } ;
struct TYPE_20__ {size_t miptex; int flags; int ** vecs; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (char*,int) ;
 float FUNC_2 (TYPE_7__*,int ) ;
 TYPE_4__* FUNC_3 (TYPE_4__*,TYPE_7__*) ;
 int VAR_0 ;
 int VAR_1 ;
 double FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_8__* VAR_4 ;
 int FUNC_5 (int *,int*,int) ;
 TYPE_7__* VAR_5 ;
 TYPE_6__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_5__* VAR_10 ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ,int ) ;

bspbrush_t *FUNC_8(bspbrush_t *VAR_11, int VAR_12)
{
 float VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20;
 int VAR_21, VAR_22;
 side_t *VAR_23;
 q1_dmiptexlump_t *VAR_24;
 q1_miptex_t *VAR_25;
 bspbrush_t *VAR_26, *VAR_27, *VAR_28, *VAR_29, *VAR_30;
 vec_t VAR_31[4] = {1, 0, 0, 0};

 if (!VAR_12) FUNC_6("texturing brushes\n");
 if (!VAR_12) FUNC_6("%5d brushes", VAR_19 = 0);

 for (VAR_30 = VAR_11; VAR_30; VAR_30 = VAR_30->next)
 {
  if (!VAR_30->next) break;
 }

 VAR_28 = ((void*)0);

 for (VAR_26 = VAR_11; VAR_26; VAR_26 = VAR_27)
 {
  VAR_27 = VAR_26->next;

  for (VAR_18 = 0; VAR_18 < VAR_26->numsides; VAR_18++)
  {
   VAR_23 = &VAR_26->sides[VAR_18];

   if (VAR_23->flags & VAR_0) continue;

   VAR_22 = VAR_23->surf;

   VAR_21 = -1;

   VAR_14 = 1;


   if (!VAR_2)
   {
    for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
    {


     if (VAR_5[VAR_15].planenum == VAR_6[VAR_22].planenum)
     {

      VAR_13 = FUNC_2(&VAR_5[VAR_15], VAR_23->winding);

      if (VAR_13 > VAR_14)
      {


       if (VAR_21 >= 0 &&
         (VAR_5[VAR_21].texinfo != VAR_5[VAR_15].texinfo))
       {

        VAR_29 = FUNC_3(VAR_26, &VAR_5[VAR_15]);

        if (VAR_29)
        {

         if (VAR_28) VAR_28->next = VAR_26->next;
         else VAR_11 = VAR_26->next;
         if (VAR_30 == VAR_26)
         {
          VAR_30 = VAR_28;
          VAR_27 = VAR_29;
         }

         if (VAR_30) VAR_30->next = VAR_29;
         else VAR_11 = VAR_29;

         FUNC_0(VAR_26);


         VAR_26 = VAR_28;

         for (VAR_30 = VAR_11; VAR_30; VAR_30 = VAR_30->next)
         {
          if (!VAR_30->next) break;
         }
         break;
        }
        else
        {
         FUNC_1("brush %d: no real texture split", VAR_19);
        }
       }
       else
       {

        VAR_21 = VAR_15;
       }
      }
     }
    }


    if (VAR_15 < VAR_8) break;
   }
   else
   {


    for (VAR_15 = 0; VAR_15 < VAR_8; VAR_15++)
    {


     if (VAR_5[VAR_15].planenum == VAR_6[VAR_22].planenum)
     {

      VAR_13 = FUNC_2(&VAR_5[VAR_15], VAR_23->winding);

      if (VAR_13 > VAR_14)
      {
       VAR_14 = VAR_13;
       VAR_21 = VAR_15;
      }
     }
    }
   }

   if (VAR_21 >= 0)
   {

    VAR_17 = VAR_5[VAR_21].texinfo;
    for (VAR_16 = 0; VAR_16 < 4; VAR_16++)
    {
     VAR_4[VAR_17].vecs[0][VAR_16] = VAR_10[VAR_17].vecs[0][VAR_16];
     VAR_4[VAR_17].vecs[1][VAR_16] = VAR_10[VAR_17].vecs[1][VAR_16];
    }


    if (FUNC_4(VAR_4[VAR_17].vecs[0]) < 0.01)
     FUNC_5(VAR_4[VAR_17].vecs[0], VAR_31, sizeof(VAR_31));
    if (FUNC_4(VAR_4[VAR_17].vecs[1]) < 0.01)
     FUNC_5(VAR_4[VAR_17].vecs[1], VAR_31, sizeof(VAR_31));

    VAR_4[VAR_17].flags = VAR_10[VAR_17].flags;
    VAR_4[VAR_17].value = 0;

    VAR_24 = (q1_dmiptexlump_t *) VAR_7;
    VAR_20 = VAR_24->dataofs[VAR_10[VAR_17].miptex];
    if ( VAR_20 > VAR_9 ) {
     VAR_20 = VAR_24->dataofs[0];
    }
    VAR_25 = (q1_miptex_t *)((byte *)VAR_24 + VAR_20);

    FUNC_7(VAR_4[VAR_17].texture, VAR_25->name);

    VAR_4[VAR_17].nexttexinfo = -1;

    VAR_23->texinfo = VAR_17;

    if (VAR_17 > VAR_3) VAR_3 = VAR_17;

    VAR_23->flags |= VAR_0;
   }
   else
   {

    VAR_23->texinfo = VAR_1;

    VAR_23->flags |= VAR_0;
   }
  }

  if (!VAR_12 && VAR_28 != VAR_26) FUNC_6("\r%5d", ++VAR_19);

  VAR_28 = VAR_26;
 }
 if (!VAR_12) FUNC_6("\n");

 return VAR_11;
}
