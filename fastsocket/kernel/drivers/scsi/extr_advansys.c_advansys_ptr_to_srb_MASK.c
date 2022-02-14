
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct asc_dvc_var {int ptr_map_count; void** ptr_map; } ;


 int FUNC_0 (int,char*,void*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void** FUNC_1 (void**,int,int ) ;

__attribute__((used)) static u32 FUNC_2(struct asc_dvc_var *VAR_2, void *VAR_3)
{
 int VAR_4;
 void **VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->ptr_map_count; VAR_4++) {
  if (!VAR_2->ptr_map[VAR_4])
   goto out;
 }

 if (VAR_2->ptr_map_count == 0)
  VAR_2->ptr_map_count = 1;
 else
  VAR_2->ptr_map_count *= 2;

 VAR_5 = FUNC_1(VAR_2->ptr_map,
   VAR_2->ptr_map_count * sizeof(void *), VAR_1);
 if (!VAR_5)
  return VAR_0;
 VAR_2->ptr_map = VAR_5;
 out:
 FUNC_0(3, "Putting ptr %p into array offset %d\n", VAR_3, VAR_4);
 VAR_2->ptr_map[VAR_4] = VAR_3;
 return VAR_4 + 1;
}
