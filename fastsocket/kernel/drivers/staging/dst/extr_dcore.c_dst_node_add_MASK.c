
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_node {int node_entry; int name; } ;


 unsigned int FUNC_0 (int ,int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct dst_node *VAR_2)
{
 unsigned VAR_3 = FUNC_0(VAR_2->name, sizeof(VAR_2->name));

 FUNC_2(&VAR_0);
 FUNC_1(&VAR_2->node_entry, &VAR_1[VAR_3]);
 FUNC_3(&VAR_0);
}
