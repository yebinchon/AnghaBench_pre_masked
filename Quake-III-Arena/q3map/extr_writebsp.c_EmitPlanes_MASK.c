
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dist; int normal; } ;
typedef TYPE_1__ plane_t ;
struct TYPE_6__ {int dist; int normal; } ;
typedef TYPE_2__ dplane_t ;


 int FUNC_0 (int ,int ) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;

void FUNC_1 (void)
{
 int VAR_4;
 dplane_t *VAR_5;
 plane_t *VAR_6;

 VAR_6 = VAR_1;
 for (VAR_4=0 ; VAR_4<VAR_2 ; VAR_4++, VAR_6++)
 {
  VAR_5 = &VAR_0[VAR_3];
  FUNC_0 ( VAR_6->normal, VAR_5->normal);
  VAR_5->dist = VAR_6->dist;
  VAR_3++;
 }
}
