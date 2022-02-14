
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int* faceoptimizeindex; size_t numfaces; int edgeindexsize; int* edgeindex; TYPE_2__* faces; } ;
typedef TYPE_1__ optimized_t ;
struct TYPE_10__ {int numedges; int firstedge; } ;
typedef TYPE_2__ aas_face_t ;
struct TYPE_11__ {int* edgeindex; TYPE_2__* faces; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;
 TYPE_3__ VAR_0 ;
 size_t FUNC_3 (int) ;

int FUNC_4(optimized_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 aas_face_t *VAR_7, *VAR_8;

 VAR_7 = &VAR_0.faces[FUNC_3(VAR_2)];
 if (!FUNC_0(VAR_7)) return 0;

 VAR_6 = VAR_1->faceoptimizeindex[FUNC_3(VAR_2)];
 if (VAR_6)
 {

  if (VAR_2 > 0) return VAR_6;
  else return -VAR_6;
 }

 VAR_8 = &VAR_1->faces[VAR_1->numfaces];
 FUNC_2(VAR_8, VAR_7, sizeof(aas_face_t));

 VAR_8->numedges = 0;
 VAR_8->firstedge = VAR_1->edgeindexsize;
 for (VAR_3 = 0; VAR_3 < VAR_7->numedges; VAR_3++)
 {
  VAR_4 = VAR_0.edgeindex[VAR_7->firstedge + VAR_3];
  VAR_5 = FUNC_1(VAR_1, VAR_4);
  if (VAR_5)
  {
   VAR_1->edgeindex[VAR_8->firstedge + VAR_8->numedges] = VAR_5;
   VAR_8->numedges++;
   VAR_1->edgeindexsize++;
  }
 }
 VAR_1->faceoptimizeindex[FUNC_3(VAR_2)] = VAR_1->numfaces;
 VAR_6 = VAR_1->numfaces;
 VAR_1->numfaces++;

 if (VAR_2 > 0) return VAR_6;
 else return -VAR_6;
}
