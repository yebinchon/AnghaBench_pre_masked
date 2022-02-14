
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int height; int width; int y; int x; } ;
typedef TYPE_1__ MMAL_RECT_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (char const*,char*,int *,int *,int *,int *) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_1(const char *VAR_0, MMAL_RECT_T *VAR_1)
{

   return FUNC_0(VAR_0, "%d,%d,%d,%d", &VAR_1->x, &VAR_1->y, &VAR_1->width, &VAR_1->height) == 4;
}
