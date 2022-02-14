
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_5__ {int faceflags; int planenum; } ;
typedef TYPE_1__ tmp_face_t ;
struct TYPE_7__ {scalar_t__ phys_maxsteepness; int phys_gravitydirection; } ;
struct TYPE_6__ {int normal; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 TYPE_3__ VAR_2 ;
 TYPE_2__* VAR_3 ;

int FUNC_3(tmp_face_t *VAR_4, int VAR_5)
{
 vec3_t VAR_6;


 if (VAR_4->faceflags & (VAR_0 | VAR_1)) return 0;

 FUNC_1(VAR_2.phys_gravitydirection, VAR_6);
 FUNC_2(VAR_6);

 return (FUNC_0(VAR_6, VAR_3[VAR_4->planenum ^ VAR_5].normal) > VAR_2.phys_maxsteepness);
}
