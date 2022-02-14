
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int extent_node_t ;


 int FUNC_0 (int *,int) ;
 int * VAR_0 ;

__attribute__((used)) static extent_node_t *
FUNC_1(void)
{
 extent_node_t *VAR_1;

 if (VAR_0 == ((void*)0))
  return (((void*)0));
 VAR_1 = VAR_0;
 VAR_0 = *(extent_node_t **)VAR_1;
 FUNC_0(VAR_1, sizeof(extent_node_t));
 return (VAR_1);
}
