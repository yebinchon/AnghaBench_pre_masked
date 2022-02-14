
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int flags; void* end; void* start; } ;
struct pnp_resource {struct resource res; } ;
struct pnp_dev {int dev; } ;
typedef void* resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned long long,unsigned long long) ;
 int FUNC_1 (int ,int *,char*,struct resource*) ;
 struct pnp_resource* FUNC_2 (struct pnp_dev*) ;

struct pnp_resource *FUNC_3(struct pnp_dev *VAR_2,
      resource_size_t VAR_3,
      resource_size_t VAR_4, int VAR_5)
{
 struct pnp_resource *VAR_6;
 struct resource *VAR_7;

 VAR_6 = FUNC_2(VAR_2);
 if (!VAR_6) {
  FUNC_0(&VAR_2->dev, "can't add resource for IO %#llx-%#llx\n",
   (unsigned long long) VAR_3,
   (unsigned long long) VAR_4);
  return ((void*)0);
 }

 VAR_7 = &VAR_6->res;
 VAR_7->flags = VAR_0 | VAR_5;
 VAR_7->start = VAR_3;
 VAR_7->end = VAR_4;

 FUNC_1(VAR_1, &VAR_2->dev, "%pR\n", VAR_7);
 return VAR_6;
}
