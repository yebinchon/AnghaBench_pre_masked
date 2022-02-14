
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int symbol; struct TYPE_3__* left; struct TYPE_3__* right; } ;
typedef TYPE_1__ node_t ;
typedef int byte ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;

void FUNC_1 (node_t *VAR_2, int *VAR_3, byte *VAR_4, int *VAR_5) {
 VAR_1 = *VAR_5;
 while (VAR_2 && VAR_2->symbol == VAR_0) {
  if (FUNC_0(VAR_4)) {
   VAR_2 = VAR_2->right;
  } else {
   VAR_2 = VAR_2->left;
  }
 }
 if (!VAR_2) {
  *VAR_3 = 0;
  return;

 }
 *VAR_3 = VAR_2->symbol;
 *VAR_5 = VAR_1;
}
