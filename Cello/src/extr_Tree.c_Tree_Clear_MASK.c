
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct Tree* var ;
struct Tree {int * root; scalar_t__ nitems; } ;


 int FUNC_0 (struct Tree*,int *) ;

__attribute__((used)) static void FUNC_1(var VAR_0) {
  struct Tree* VAR_1 = VAR_0;
  FUNC_0(VAR_1, VAR_1->root);
  VAR_1->nitems = 0;
  VAR_1->root = ((void*)0);
}
