
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_resource {int list; } ;
struct pnp_dev {int resources; } ;


 int VAR_0 ;
 struct pnp_resource* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static struct pnp_resource *FUNC_2(struct pnp_dev *VAR_1)
{
 struct pnp_resource *VAR_2;

 VAR_2 = FUNC_0(sizeof(struct pnp_resource), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_1(&VAR_2->list, &VAR_1->resources);
 return VAR_2;
}
