
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tioca_kernel {int ca_closest_node; } ;
struct page {int dummy; } ;
struct agp_bridge_data {scalar_t__ dev_private_data; } ;
struct TYPE_2__ {int current_memory_agp; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct page* FUNC_0 (int,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct page*) ;

__attribute__((used)) static struct page *FUNC_3(struct agp_bridge_data *VAR_2)
{
 struct page *VAR_3;
 int VAR_4;
 struct tioca_kernel *VAR_5 =
     (struct tioca_kernel *)VAR_2->dev_private_data;

 VAR_4 = VAR_5->ca_closest_node;
 VAR_3 = FUNC_0(VAR_4, VAR_0, 0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(VAR_3);
 FUNC_1(&VAR_1->current_memory_agp);
 return VAR_3;
}
