
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct node_entry {unsigned int generation; int nodeid; int host; } ;
typedef int quadlet_t ;


 int FUNC_0 (int ,int ,unsigned int,int ,int,int *,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static inline int FUNC_2(struct node_entry *VAR_0, u64 VAR_1, int VAR_2,
     quadlet_t *VAR_3, quadlet_t VAR_4)
{
 unsigned int VAR_5 = VAR_0->generation;

 FUNC_1();
 return FUNC_0(VAR_0->host, VAR_0->nodeid, VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}
