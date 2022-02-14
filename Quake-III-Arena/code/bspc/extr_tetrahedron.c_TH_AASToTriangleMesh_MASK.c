
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {struct TYPE_11__* next; } ;
typedef TYPE_2__ th_triangle_t ;
struct TYPE_12__ {int faceflags; } ;
typedef TYPE_3__ aas_face_t ;
struct TYPE_13__ {int numareas; TYPE_3__* faces; TYPE_1__* areas; int * faceindex; } ;
struct TYPE_10__ {int numfaces; int firstface; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__**,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (TYPE_3__*) ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (int ) ;

th_triangle_t *FUNC_3(void)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;
 aas_face_t *VAR_6;
 th_triangle_t *VAR_7, *VAR_8, *VAR_9;

 VAR_9 = ((void*)0);
 for (VAR_2 = 1; VAR_2 < VAR_1.numareas; VAR_2++)
 {

  for (VAR_3 = 0; VAR_3 < VAR_1.areas[VAR_2].numfaces; VAR_3++)
  {
   VAR_4 = FUNC_2(VAR_1.faceindex[VAR_1.areas[VAR_2].firstface + VAR_3]);
   VAR_6 = &VAR_1.faces[VAR_4];

   if (!(VAR_6->faceflags & VAR_0))
   {





    continue;
   }

   VAR_7 = FUNC_1(VAR_6);
   for (; VAR_7; VAR_7 = VAR_8)
   {
    VAR_8 = VAR_7->next;
    FUNC_0(&VAR_9, VAR_7);
   }
  }
 }
 return VAR_9;
}
