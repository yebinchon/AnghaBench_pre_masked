
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ contents; } ;
typedef TYPE_1__ face_t ;
struct TYPE_7__ {int* v; } ;
typedef TYPE_2__ dedge_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__*** VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;

int FUNC_2 (int VAR_7, int VAR_8, face_t *VAR_9)
{
 dedge_t *VAR_10;
 int VAR_11;

 VAR_1++;

 if (!VAR_5)
 {
  for (VAR_11=VAR_4 ; VAR_11 < VAR_6 ; VAR_11++)
  {
   VAR_10 = &VAR_2[VAR_11];
   if (VAR_7 == VAR_10->v[1] && VAR_8 == VAR_10->v[0]
   && VAR_3[VAR_11][0]->contents == VAR_9->contents)
   {
    if (VAR_3[VAR_11][1])

     continue;
    VAR_3[VAR_11][1] = VAR_9;
    return -VAR_11;
   }







  }
 }


 if (VAR_6 >= VAR_0)
  FUNC_0 ("numedges == MAX_MAP_EDGES");
 VAR_10 = &VAR_2[VAR_6];
 VAR_6++;
 VAR_10->v[0] = VAR_7;
 VAR_10->v[1] = VAR_8;
 VAR_3[VAR_6-1][0] = VAR_9;

 return VAR_6-1;
}
