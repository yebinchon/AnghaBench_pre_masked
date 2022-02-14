
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct unity_map_entry {int address_start; int address_end; int prot; } ;
struct dma_ops_domain {int aperture_size; TYPE_1__** aperture; int domain; } ;
struct TYPE_2__ {int bitmap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dma_ops_domain *VAR_3,
        struct unity_map_entry *VAR_4)
{
 u64 VAR_5;
 int VAR_6;

 for (VAR_5 = VAR_4->address_start; VAR_5 < VAR_4->address_end;
      VAR_5 += VAR_1) {
  VAR_6 = FUNC_1(&VAR_3->domain, VAR_5, VAR_5, VAR_4->prot,
         VAR_2);
  if (VAR_6)
   return VAR_6;




  if (VAR_5 < VAR_3->aperture_size)
   FUNC_0(VAR_5 >> VAR_0,
      VAR_3->aperture[0]->bitmap);
 }

 return 0;
}
