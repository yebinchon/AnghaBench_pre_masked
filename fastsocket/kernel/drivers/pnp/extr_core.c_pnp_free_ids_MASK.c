
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_id {struct pnp_id* next; } ;
struct pnp_dev {struct pnp_id* id; } ;


 int FUNC_0 (struct pnp_id*) ;

__attribute__((used)) static void FUNC_1(struct pnp_dev *VAR_0)
{
 struct pnp_id *VAR_1;
 struct pnp_id *VAR_2;

 VAR_1 = VAR_0->id;
 while (VAR_1) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
  VAR_1 = VAR_2;
 }
}
