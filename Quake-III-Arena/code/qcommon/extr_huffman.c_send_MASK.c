
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* parent; } ;
typedef TYPE_1__ node_t ;
typedef int byte ;


 int FUNC_0 (int,int *) ;

__attribute__((used)) static void FUNC_1(node_t *VAR_0, node_t *VAR_1, byte *VAR_2) {
 if (VAR_0->parent) {
  FUNC_1(VAR_0->parent, VAR_0, VAR_2);
 }
 if (VAR_1) {
  if (VAR_0->right == VAR_1) {
   FUNC_0(1, VAR_2);
  } else {
   FUNC_0(0, VAR_2);
  }
 }
}
