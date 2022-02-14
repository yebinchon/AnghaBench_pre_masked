
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int type; scalar_t__ dist; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_9__ {scalar_t__* mins; scalar_t__* maxs; int numsides; TYPE_1__* sides; } ;
typedef TYPE_3__ bspbrush_t ;
struct TYPE_7__ {int planenum; } ;


 int FUNC_0 (scalar_t__*,scalar_t__*,TYPE_2__*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;

int FUNC_2 (bspbrush_t *VAR_7, int VAR_8, int *VAR_9)
{
 int VAR_10, VAR_11;
 plane_t *VAR_12;
 int VAR_13;

 *VAR_9 = 0;

 VAR_12 = &VAR_6[VAR_8];
 for (VAR_10 = 0; VAR_10 < VAR_7->numsides; VAR_10++)
 {
  VAR_11 = VAR_7->sides[VAR_10].planenum;
  if (VAR_11 >= VAR_0)
   FUNC_1 ("bad planenum");
  if (VAR_11 == VAR_8)
   return VAR_2|VAR_4;
  if (VAR_11 == (VAR_8 ^ 1) )
   return VAR_5|VAR_4;

 }


 VAR_13 = FUNC_0 (VAR_7->mins, VAR_7->maxs, VAR_12);


 if (VAR_13 == VAR_3)
 {
  *VAR_9 += 3;
 }

 return VAR_13;
}
