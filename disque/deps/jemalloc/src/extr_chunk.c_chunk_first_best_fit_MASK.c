
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_tree_t ;
typedef int extent_node_t ;
typedef int arena_t ;


 size_t FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,size_t,int,int) ;
 int * FUNC_3 (int *,int *) ;

__attribute__((used)) static extent_node_t *
FUNC_4(arena_t *VAR_0, extent_tree_t *VAR_1,
    extent_tree_t *VAR_2, size_t VAR_3)
{
 extent_node_t VAR_4;

 FUNC_1(VAR_3 == FUNC_0(VAR_3));

 FUNC_2(&VAR_4, VAR_0, ((void*)0), VAR_3, 0, 0);
 return (FUNC_3(VAR_1, &VAR_4));
}
