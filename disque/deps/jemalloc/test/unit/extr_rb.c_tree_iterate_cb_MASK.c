
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int tree_t ;
struct TYPE_12__ {int magic; } ;
typedef TYPE_1__ node_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,char*) ;
 int FUNC_1 (int ,int ,char*) ;
 TYPE_1__* FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int *,TYPE_1__*) ;

__attribute__((used)) static node_t *
FUNC_5(tree_t *VAR_1, node_t *VAR_2, void *VAR_3)
{
 unsigned *VAR_4 = (unsigned *)VAR_3;
 node_t *VAR_5;

 FUNC_1(VAR_2->magic, VAR_0, "Bad magic");


 VAR_5 = FUNC_4(VAR_1, VAR_2);
 FUNC_0(VAR_5, VAR_2,
     "tree_search() returned unexpected node");


 VAR_5 = FUNC_2(VAR_1, VAR_2);
 FUNC_0(VAR_5, VAR_2,
     "tree_nsearch() returned unexpected node");


 VAR_5 = FUNC_3(VAR_1, VAR_2);
 FUNC_0(VAR_5, VAR_2,
     "tree_psearch() returned unexpected node");

 (*VAR_4)++;

 return (((void*)0));
}
