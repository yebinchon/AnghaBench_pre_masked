
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory {int type; int num_scratch_pages; scalar_t__ page_count; scalar_t__* pages; } ;


 size_t VAR_0 ;
 struct agp_memory* FUNC_0 (size_t) ;

struct agp_memory *FUNC_1(size_t VAR_1, int VAR_2)
{
 struct agp_memory *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_5 = (VAR_1 + VAR_0 - 1) / VAR_0;
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  VAR_3->pages[VAR_4] = 0;
 VAR_3->page_count = 0;
 VAR_3->type = VAR_2;
 VAR_3->num_scratch_pages = VAR_5;

 return VAR_3;
}
