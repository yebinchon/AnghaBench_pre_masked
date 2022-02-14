
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int node_t ;
struct TYPE_7__ {TYPE_1__* w; scalar_t__* split; scalar_t__ merged; } ;
typedef TYPE_2__ face_t ;
struct TYPE_8__ {int point; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 size_t FUNC_2 (int ) ;
 size_t VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t* VAR_7 ;

void FUNC_4 (node_t *VAR_8, face_t *VAR_9)
{
 winding_t *VAR_10;
 int VAR_11;

 if (VAR_9->merged || VAR_9->split[0] || VAR_9->split[1])
  return;

 VAR_10 = VAR_9->w;
 for (VAR_11=0 ; VAR_11<VAR_10->numpoints ; VAR_11++)
 {
  if (VAR_4)
  {
   if (VAR_6 == VAR_0)
    FUNC_0 ("MAX_MAP_VERTS");
   VAR_7[VAR_11] = VAR_6;
   FUNC_3 (VAR_10->p[VAR_11], VAR_3[VAR_6].point);
   VAR_6++;
   VAR_2++;
   VAR_1++;
  }
  else
   VAR_7[VAR_11] = FUNC_2 (VAR_10->p[VAR_11]);
 }
 VAR_5 = VAR_10->numpoints;


 FUNC_1 (VAR_8, VAR_9, 0);
}
