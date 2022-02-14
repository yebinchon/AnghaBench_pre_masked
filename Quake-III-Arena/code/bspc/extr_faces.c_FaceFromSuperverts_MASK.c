
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* faces; } ;
typedef TYPE_1__ node_t ;
struct TYPE_7__ {int numpoints; void** vertexnums; struct TYPE_7__* next; struct TYPE_7__** split; } ;
typedef TYPE_2__ face_t ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 void** VAR_3 ;

void FUNC_1 (node_t *VAR_4, face_t *VAR_5, int VAR_6)
{
 face_t *VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = VAR_2;
 while (VAR_8 > VAR_0)
 {
  VAR_1++;

  VAR_7 = VAR_5->split[0] = FUNC_0 (VAR_5);
  VAR_7 = VAR_5->split[0];
  VAR_7->next = VAR_4->faces;
  VAR_4->faces = VAR_7;

  VAR_7->numpoints = VAR_0;
  for (VAR_9=0 ; VAR_9<VAR_0 ; VAR_9++)
   VAR_7->vertexnums[VAR_9] = VAR_3[(VAR_9+VAR_6)%VAR_2];

  VAR_5->split[1] = FUNC_0 (VAR_5);
  VAR_5 = VAR_5->split[1];
  VAR_5->next = VAR_4->faces;
  VAR_4->faces = VAR_5;

  VAR_8 -= (VAR_0-2);
  VAR_6 = (VAR_6+VAR_0-1)%VAR_2;
 }


 VAR_5->numpoints = VAR_8;
 for (VAR_9=0 ; VAR_9<VAR_8 ; VAR_9++)
  VAR_5->vertexnums[VAR_9] = VAR_3[(VAR_9+VAR_6)%VAR_2];
}
