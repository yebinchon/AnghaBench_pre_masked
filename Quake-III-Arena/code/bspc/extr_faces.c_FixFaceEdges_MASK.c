
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec_t ;
typedef int vec3_t ;
typedef int node_t ;
struct TYPE_5__ {int numpoints; int* vertexnums; int badstartvert; scalar_t__* split; scalar_t__ merged; } ;
typedef TYPE_1__ face_t ;
struct TYPE_6__ {int point; } ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_6 (node_t *VAR_7, face_t *VAR_8)
{
 int VAR_9, VAR_10;
 int VAR_11;
 vec3_t VAR_12;
 vec_t VAR_13;
 int VAR_14[VAR_0], VAR_15[VAR_0];
 int VAR_16;

 if (VAR_8->merged || VAR_8->split[0] || VAR_8->split[1])
  return;

 VAR_6 = 0;

 for (VAR_11=0 ; VAR_11<VAR_8->numpoints ; VAR_11++)
 {
  VAR_9 = VAR_8->vertexnums[VAR_11];
  VAR_10 = VAR_8->vertexnums[(VAR_11+1)%VAR_8->numpoints];

  FUNC_3 (VAR_3[VAR_9].point, VAR_5);
  FUNC_3 (VAR_3[VAR_10].point, VAR_12);

  FUNC_1 (VAR_5, VAR_12);

  FUNC_5 (VAR_12, VAR_5, VAR_4);
  VAR_13 = FUNC_4(VAR_4);

  VAR_15[VAR_11] = VAR_6;
  FUNC_2 (0, VAR_13, VAR_9, VAR_10, 0);

  VAR_14[VAR_11] = VAR_6 - VAR_15[VAR_11];
 }

 if (VAR_6 < 3)
 {
  VAR_8->numpoints = 0;
  VAR_2++;
  return;
 }




 for (VAR_11=0 ; VAR_11<VAR_8->numpoints ; VAR_11++)
 {
  if (VAR_14[VAR_11] == 1 && VAR_14[(VAR_11+VAR_8->numpoints-1)%VAR_8->numpoints] == 1)
   break;
 }
 if (VAR_11 == VAR_8->numpoints)
 {
  VAR_8->badstartvert = 1;
  VAR_1++;
  VAR_16 = 0;
 }
 else
 {
  VAR_16 = VAR_15[VAR_11];
 }


 FUNC_0 (VAR_7, VAR_8, VAR_16);
}
