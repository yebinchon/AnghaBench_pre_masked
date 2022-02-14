
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int planenum; scalar_t__ texinfo; int winding; } ;
typedef TYPE_1__ side_t ;
struct TYPE_13__ {int dist; int normal; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_14__ {scalar_t__* mins; scalar_t__* maxs; int numsides; TYPE_1__* sides; int original; } ;
typedef TYPE_3__ bspbrush_t ;


 TYPE_3__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ,int ) ;
 TYPE_2__* VAR_1 ;

bspbrush_t *FUNC_6(bspbrush_t *VAR_2, bspbrush_t *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 side_t *VAR_9, *VAR_10, *VAR_11;
 plane_t *VAR_12, *VAR_13;
 bspbrush_t *VAR_14;


 for (VAR_4 = 0; VAR_4 < 3; VAR_4++)
 {
  if (VAR_2->mins[VAR_4] > VAR_3->maxs[VAR_4] + 2
    || VAR_2->maxs[VAR_4] < VAR_3->mins[VAR_4] - 2)
  {
   return ((void*)0);
  }
 }

 VAR_8 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_2->numsides; VAR_4++)
 {
  VAR_9 = &VAR_2->sides[VAR_4];

  for (VAR_6 = 0; VAR_6 < VAR_3->numsides; VAR_6++)
  {
   VAR_10 = &VAR_3->sides[VAR_6];
   if (VAR_9->planenum == (VAR_10->planenum^1))
   {
    VAR_8++;

    if (VAR_8 > 1) return ((void*)0);
    break;
   }
  }
  if (VAR_6 < VAR_3->numsides) continue;

  for (VAR_5 = 0; VAR_5 < VAR_3->numsides; VAR_5++)
  {
   VAR_10 = &VAR_3->sides[VAR_5];

   for (VAR_7 = 0; VAR_7 < VAR_2->numsides; VAR_7++)
   {
    VAR_9 = &VAR_2->sides[VAR_7];
    if (VAR_9->planenum == (VAR_10->planenum^1)) break;
   }
   if (VAR_7 < VAR_2->numsides) continue;

   VAR_9 = &VAR_2->sides[VAR_4];


   if (VAR_9->planenum == VAR_10->planenum)
   {
    if (VAR_9->texinfo != VAR_0 &&
     VAR_10->texinfo != VAR_0 &&
     VAR_9->texinfo != VAR_10->texinfo) return ((void*)0);
    continue;
   }

   VAR_12 = &VAR_1[VAR_9->planenum];
   VAR_13 = &VAR_1[VAR_10->planenum];

   if (FUNC_5(VAR_9->winding, VAR_10->winding,
         VAR_12->normal, VAR_13->normal,
         VAR_12->dist, VAR_13->dist))
   {
    return ((void*)0);
   }
  }
 }
 VAR_14 = FUNC_0(VAR_2->numsides + VAR_3->numsides);
 VAR_14->original = VAR_2->original;
 VAR_14->numsides = 0;


 for (VAR_4 = 0; VAR_4 < VAR_2->numsides; VAR_4++)
 {
  VAR_9 = &VAR_2->sides[VAR_4];

  for (VAR_7 = 0; VAR_7 < VAR_3->numsides; VAR_7++)
  {
   VAR_10 = &VAR_3->sides[VAR_7];

   if (VAR_9->planenum == VAR_10->planenum)
   {
    if (VAR_9->texinfo == VAR_0) VAR_9->texinfo = VAR_10->texinfo;
    if (VAR_10->texinfo == VAR_0) VAR_10->texinfo = VAR_9->texinfo;
   }
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->numsides; VAR_4++)
 {
  VAR_9 = &VAR_2->sides[VAR_4];

  for (VAR_7 = 0; VAR_7 < VAR_3->numsides; VAR_7++)
  {
   VAR_10 = &VAR_3->sides[VAR_7];
   if (VAR_9->planenum == (VAR_10->planenum ^ 1)) break;
  }
  if (VAR_7 < VAR_3->numsides) continue;

  for (VAR_7 = 0; VAR_7 < VAR_14->numsides; VAR_7++)
  {
   VAR_11 = &VAR_14->sides[VAR_7];
   if (VAR_11->planenum == VAR_9->planenum)
   {
    FUNC_4("brush duplicate plane\n");
    break;
   }
  }
  if (VAR_7 < VAR_14->numsides) continue;

  VAR_11 = &VAR_14->sides[VAR_14->numsides];
  VAR_14->numsides++;
  *VAR_11 = *VAR_9;
 }
 for (VAR_5 = 0; VAR_5 < VAR_3->numsides; VAR_5++)
 {
  VAR_10 = &VAR_3->sides[VAR_5];
  for (VAR_7 = 0; VAR_7 < VAR_2->numsides; VAR_7++)
  {
   VAR_9 = &VAR_2->sides[VAR_7];

   if (VAR_10->planenum == VAR_9->planenum) break;

   if (VAR_10->planenum == (VAR_9->planenum ^ 1)) break;
  }
  if (VAR_7 < VAR_2->numsides) continue;

  for (VAR_7 = 0; VAR_7 < VAR_14->numsides; VAR_7++)
  {
   VAR_11 = &VAR_14->sides[VAR_7];
   if (VAR_11->planenum == VAR_10->planenum)
   {
    FUNC_4("brush duplicate plane\n");
    break;
   }
  }
  if (VAR_7 < VAR_14->numsides) continue;

  VAR_11 = &VAR_14->sides[VAR_14->numsides];
  VAR_14->numsides++;
  *VAR_11 = *VAR_10;
 }
 FUNC_1(VAR_14);
 FUNC_2(VAR_14);
 FUNC_3(VAR_14);
 return VAR_14;
}
