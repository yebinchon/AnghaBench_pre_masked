
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ surfaceType; } ;
typedef TYPE_1__ q3_dsurface_t ;
struct TYPE_7__ {int dist; int normal; } ;
typedef TYPE_2__ q3_dplane_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;

void FUNC_3(void)
{
 int VAR_4;
 q3_dsurface_t *VAR_5;

 FUNC_1("creating planar surface planes...\n");
 VAR_3 = (q3_dplane_t *) FUNC_0(VAR_2 * sizeof(q3_dplane_t));

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++)
 {
  VAR_5 = &VAR_1[VAR_4];
  if (VAR_5->surfaceType != VAR_0) continue;
  FUNC_2(VAR_5, VAR_3[VAR_4].normal, &VAR_3[VAR_4].dist);



 }
}
