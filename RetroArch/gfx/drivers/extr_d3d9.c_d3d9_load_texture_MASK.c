
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct d3d9_texture_info {int type; void* data; void* userdata; } ;
typedef enum texture_filter_type { ____Placeholder_texture_filter_type } texture_filter_type ;


 int FUNC_0 (struct d3d9_texture_info*,uintptr_t*) ;
 int VAR_0 ;
 uintptr_t FUNC_1 (struct d3d9_texture_info*,int ) ;

__attribute__((used)) static uintptr_t FUNC_2(void *VAR_1, void *VAR_2,
      bool VAR_3, enum texture_filter_type VAR_4)
{
   uintptr_t VAR_5 = 0;
   struct d3d9_texture_info VAR_6;

   VAR_6.userdata = VAR_1;
   VAR_6.data = VAR_2;
   VAR_6.type = VAR_4;







   FUNC_0(&VAR_6, &VAR_5);
   return VAR_5;
}
