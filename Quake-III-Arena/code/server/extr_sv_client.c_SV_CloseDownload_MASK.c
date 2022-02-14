
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ** downloadBlocks; scalar_t__* downloadName; scalar_t__ download; } ;
typedef TYPE_1__ client_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2( client_t *VAR_1 ) {
 int VAR_2;


 if (VAR_1->download) {
  FUNC_0( VAR_1->download );
 }
 VAR_1->download = 0;
 *VAR_1->downloadName = 0;


 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  if (VAR_1->downloadBlocks[VAR_2]) {
   FUNC_1( VAR_1->downloadBlocks[VAR_2] );
   VAR_1->downloadBlocks[VAR_2] = ((void*)0);
  }
 }

}
