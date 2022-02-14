
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct asc_dvc_var {size_t ptr_map_count; int ** ptr_map; } ;


 int FUNC_0 (int,char*,void*,size_t) ;
 int FUNC_1 (char*,size_t,size_t) ;

__attribute__((used)) static void * FUNC_2(struct asc_dvc_var *VAR_0, u32 VAR_1)
{
 void *VAR_2;

 VAR_1--;
 if (VAR_1 >= VAR_0->ptr_map_count) {
  FUNC_1("advansys: bad SRB %u, max %u\n", VAR_1,
       VAR_0->ptr_map_count);
  return ((void*)0);
 }
 VAR_2 = VAR_0->ptr_map[VAR_1];
 VAR_0->ptr_map[VAR_1] = ((void*)0);
 FUNC_0(3, "Returning ptr %p from array offset %d\n", VAR_2, VAR_1);
 return VAR_2;
}
