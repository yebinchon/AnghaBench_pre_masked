
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct node_entry {unsigned int generation; int nodeid; int host; } ;
typedef int quadlet_t ;


 int FUNC_0 (int ,int ,unsigned int,int ,int *,size_t) ;
 int FUNC_1 () ;

int FUNC_2(struct node_entry *VAR_0, u64 VAR_1,
      quadlet_t *VAR_2, size_t VAR_3)
{
 unsigned int VAR_4 = VAR_0->generation;

 FUNC_1();
 return FUNC_0(VAR_0->host, VAR_0->nodeid, VAR_4,
     VAR_1, VAR_2, VAR_3);
}
