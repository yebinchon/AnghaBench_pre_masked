
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neighbour {int dummy; } ;
struct l2t_entry {struct neighbour* neigh; } ;


 int FUNC_0 (struct neighbour*) ;
 int FUNC_1 (struct neighbour*) ;

__attribute__((used)) static void FUNC_2(struct l2t_entry *VAR_0, struct neighbour *VAR_1)
{
 FUNC_0(VAR_1);
 if (VAR_0->neigh)
  FUNC_1(VAR_0->neigh);
 VAR_0->neigh = VAR_1;
}
