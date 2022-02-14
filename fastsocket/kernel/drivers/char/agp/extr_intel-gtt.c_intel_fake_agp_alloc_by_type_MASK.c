
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct agp_memory {int type; size_t page_count; scalar_t__ num_scratch_pages; } ;
struct TYPE_2__ {size_t num_dcache_entries; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct agp_memory* FUNC_0 (int) ;
 int FUNC_1 (struct agp_memory*) ;
 struct agp_memory* FUNC_2 (size_t,int) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static struct agp_memory *FUNC_3(size_t VAR_4,
             int VAR_5)
{
 struct agp_memory *VAR_6;

 if (VAR_5 == VAR_0 && VAR_2 == 1) {
  if (VAR_4 != VAR_3.num_dcache_entries)
   return ((void*)0);

  VAR_6 = FUNC_0(1);
  if (VAR_6 == ((void*)0))
   return ((void*)0);

  VAR_6->type = VAR_0;
  VAR_6->page_count = VAR_4;
  VAR_6->num_scratch_pages = 0;
  FUNC_1(VAR_6);
  return VAR_6;
 }
 if (VAR_5 == VAR_1)
  return FUNC_2(VAR_4, VAR_5);

 return ((void*)0);
}
