
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* a; void* b; void* g; void* r; } ;
typedef TYPE_1__ video_layout_color_t ;
typedef int scope_t ;
typedef int rxml_node_t ;


 void* FUNC_0 (char const*) ;
 TYPE_1__ FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int ) ;

__attribute__((used)) static video_layout_color_t FUNC_4(scope_t *VAR_0, rxml_node_t *VAR_1)
{
   const char *VAR_2;
   video_layout_color_t VAR_3 = FUNC_1();

   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "red")))) VAR_3.r = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "green")))) VAR_3.g = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "blue")))) VAR_3.b = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "alpha")))) VAR_3.a = FUNC_0(VAR_2);

   return VAR_3;
}
