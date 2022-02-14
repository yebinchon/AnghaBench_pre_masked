
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
typedef int msg_t ;
struct TYPE_4__ {int netchan; } ;
typedef TYPE_1__ client_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;

qboolean FUNC_2( client_t *VAR_2, msg_t *VAR_3 ) {
 int VAR_4;
 VAR_4 = FUNC_0( &VAR_2->netchan, VAR_3 );
 if (!VAR_4)
  return VAR_0;
 FUNC_1( VAR_2, VAR_3 );
 return VAR_1;
}
