
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* x; void* y; void* h; void* w; } ;
typedef TYPE_1__ video_layout_bounds_t ;
typedef int scope_t ;
typedef int rxml_node_t ;


 void* FUNC_0 (char const*) ;
 TYPE_1__ FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,int ) ;

__attribute__((used)) static video_layout_bounds_t FUNC_4(scope_t *VAR_0, rxml_node_t *VAR_1)
{
   const char *VAR_2;
   video_layout_bounds_t VAR_3 = FUNC_1();

   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "x")))) VAR_3.x = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "y")))) VAR_3.y = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "width")))) VAR_3.w = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "height")))) VAR_3.h = FUNC_0(VAR_2);

   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "left")))) VAR_3.x = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "top")))) VAR_3.y = FUNC_0(VAR_2);
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "right")))) VAR_3.w = FUNC_0(VAR_2) - VAR_3.x;
   if ((VAR_2 = FUNC_3(VAR_0, FUNC_2(VAR_1, "bottom")))) VAR_3.h = FUNC_0(VAR_2) - VAR_3.y;

   return VAR_3;
}
