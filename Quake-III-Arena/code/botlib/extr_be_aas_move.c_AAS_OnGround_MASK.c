
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_6__ {double fraction; int* endpos; int planenum; scalar_t__ startsolid; } ;
typedef TYPE_1__ aas_trace_t ;
struct TYPE_7__ {int normal; } ;
typedef TYPE_2__ aas_plane_t ;
struct TYPE_8__ {scalar_t__ phys_maxsteepness; } ;


 TYPE_2__* FUNC_0 (int ) ;
 TYPE_1__ FUNC_1 (int*,int*,int,int) ;
 scalar_t__ FUNC_2 (int ,int*) ;
 int FUNC_3 (int*,int*) ;
 TYPE_3__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(vec3_t VAR_3, int VAR_4, int VAR_5)
{
 aas_trace_t VAR_6;
 vec3_t VAR_7, VAR_8 = {0, 0, 1};
 aas_plane_t *VAR_9;

 FUNC_3(VAR_3, VAR_7);
 VAR_7[2] -= 10;

 VAR_6 = FUNC_1(VAR_3, VAR_7, VAR_4, VAR_5);


 if (VAR_6.startsolid) return VAR_1;

 if (VAR_6.fraction >= 1.0) return VAR_1;

 if (VAR_3[2] - VAR_6.endpos[2] > 10) return VAR_1;

 VAR_9 = FUNC_0(VAR_6.planenum);
 if (FUNC_2(VAR_9->normal, VAR_8) < VAR_0.phys_maxsteepness) return VAR_1;

 return VAR_2;
}
