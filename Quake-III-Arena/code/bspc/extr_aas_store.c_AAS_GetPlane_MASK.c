
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* vec_t ;
typedef int vec3_t ;
typedef int qboolean ;
struct TYPE_4__ {scalar_t__* normal; int type; void* dist; } ;
typedef TYPE_1__ aas_plane_t ;
struct TYPE_6__ {int numplanes; TYPE_1__* planes; } ;
struct TYPE_5__ {int max_planes; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,void*,int*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;

qboolean FUNC_7(vec3_t VAR_2, vec_t VAR_3, int *VAR_4)
{
 aas_plane_t *VAR_5, VAR_6;


 if (FUNC_1(VAR_2, VAR_3, VAR_4)) return 1;

 if (VAR_0.numplanes >= VAR_1.max_planes-1)
 {
  FUNC_3("AAS_MAX_PLANES = %d", VAR_1.max_planes);
 }
 VAR_5 = &VAR_0.planes[VAR_0.numplanes];
 FUNC_5(VAR_2, VAR_5->normal);
 VAR_5->dist = VAR_3;
 VAR_5->type = FUNC_2(VAR_2);

 *VAR_4 = VAR_0.numplanes;
 VAR_0.numplanes++;

 FUNC_0(VAR_0.numplanes - 1);
 return 0;

}
