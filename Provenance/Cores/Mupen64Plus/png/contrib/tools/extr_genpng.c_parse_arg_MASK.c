
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg {void* y2; void* x2; void* y1; void* x1; int width; void* check_fn; void* inside_fn; int color; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 void* FUNC_1 (char const*) ;
 void* FUNC_2 (char const*,int ,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(struct arg *VAR_2, const char **VAR_3 )
{

   VAR_2->color = FUNC_0(VAR_3[0]);
   VAR_2->width = FUNC_3(VAR_3[1]);
   VAR_2->inside_fn = FUNC_2(VAR_3[2], VAR_2->width, VAR_1);
   VAR_2->check_fn = FUNC_2(VAR_3[2], VAR_2->width, VAR_0);
   VAR_2->x1 = FUNC_1(VAR_3[3]);
   VAR_2->y1 = FUNC_1(VAR_3[4]);
   VAR_2->x2 = FUNC_1(VAR_3[5]);
   VAR_2->y2 = FUNC_1(VAR_3[6]);
}
