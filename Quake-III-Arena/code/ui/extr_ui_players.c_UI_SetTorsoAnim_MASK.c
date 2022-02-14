
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pendingTorsoAnim; } ;
typedef TYPE_1__ playerInfo_t ;


 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1( playerInfo_t *VAR_0, int VAR_1 ) {
 if ( VAR_0->pendingTorsoAnim ) {
  VAR_1 = VAR_0->pendingTorsoAnim;
  VAR_0->pendingTorsoAnim = 0;
 }

 FUNC_0( VAR_0, VAR_1 );
}
