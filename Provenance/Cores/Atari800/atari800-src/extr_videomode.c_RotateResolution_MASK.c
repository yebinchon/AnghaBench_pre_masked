
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int width; unsigned int height; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;



__attribute__((used)) static void FUNC_0(VIDEOMODE_resolution_t *VAR_0)
{
 unsigned int VAR_1 = VAR_0->width;
 VAR_0->width = VAR_0->height;
 VAR_0->height = VAR_1;
}
