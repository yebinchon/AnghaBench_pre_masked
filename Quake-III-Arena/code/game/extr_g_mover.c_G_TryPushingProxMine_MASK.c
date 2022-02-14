
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int * vec3_t ;
typedef int qboolean ;
struct TYPE_11__ {int * currentOrigin; } ;
struct TYPE_9__ {int * trBase; } ;
struct TYPE_10__ {TYPE_1__ pos; } ;
struct TYPE_12__ {TYPE_3__ r; TYPE_2__ s; } ;
typedef TYPE_4__ gentity_t ;


 int FUNC_0 (int *,int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int * VAR_0 ;

qboolean FUNC_7( gentity_t *VAR_1, gentity_t *VAR_2, vec3_t VAR_3, vec3_t VAR_4 ) {
 vec3_t VAR_5, VAR_6, VAR_7;
 vec3_t VAR_8, VAR_9, VAR_10;
 int VAR_11;


 FUNC_5 (VAR_0, VAR_4, VAR_8);
 FUNC_0 (VAR_8, VAR_5, VAR_6, VAR_7);


 FUNC_3 (VAR_1->s.pos.trBase, VAR_3, VAR_1->s.pos.trBase);


 FUNC_5 (VAR_1->s.pos.trBase, VAR_2->r.currentOrigin, VAR_8);
 VAR_9[0] = FUNC_1 (VAR_8, VAR_5);
 VAR_9[1] = -FUNC_1 (VAR_8, VAR_6);
 VAR_9[2] = FUNC_1 (VAR_8, VAR_7);
 FUNC_5 (VAR_9, VAR_8, VAR_10);
 FUNC_3 (VAR_1->s.pos.trBase, VAR_10, VAR_1->s.pos.trBase);

 VAR_11 = FUNC_2( VAR_1 );
 if (VAR_11) {
  FUNC_4( VAR_1->s.pos.trBase, VAR_1->r.currentOrigin );
  FUNC_6 (VAR_1);
 }
 return VAR_11;
}
