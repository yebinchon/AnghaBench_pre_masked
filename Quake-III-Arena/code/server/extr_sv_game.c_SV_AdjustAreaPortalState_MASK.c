
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int areanum2; int areanum; } ;
typedef TYPE_1__ svEntity_t ;
typedef int sharedEntity_t ;
typedef int qboolean ;


 int FUNC_0 (int ,int,int ) ;
 TYPE_1__* FUNC_1 (int *) ;

void FUNC_2( sharedEntity_t *VAR_0, qboolean VAR_1 ) {
 svEntity_t *VAR_2;

 VAR_2 = FUNC_1( VAR_0 );
 if ( VAR_2->areanum2 == -1 ) {
  return;
 }
 FUNC_0( VAR_2->areanum, VAR_2->areanum2, VAR_1 );
}
