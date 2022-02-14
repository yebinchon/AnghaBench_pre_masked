
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int svFlags; int linked; } ;
struct TYPE_5__ {int s; TYPE_1__ r; int inuse; } ;
typedef TYPE_2__ gentity_t ;
typedef int entityState_t ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2( int VAR_4, entityState_t *VAR_5 ) {
 gentity_t *VAR_6;

 VAR_6 = &VAR_1[VAR_4];
 FUNC_1( VAR_5, 0, sizeof(entityState_t) );
 if (!VAR_6->inuse) return VAR_2;
 if (!VAR_6->r.linked) return VAR_2;
 if (VAR_6->r.svFlags & VAR_0) return VAR_2;
 FUNC_0( VAR_5, &VAR_6->s, sizeof(entityState_t) );
 return VAR_3;
}
