
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fb_cmap {scalar_t__ len; int * transp; int * blue; int * green; int * red; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct fb_cmap *VAR_0)
{
 FUNC_0(VAR_0->red);
 FUNC_0(VAR_0->green);
 FUNC_0(VAR_0->blue);
 FUNC_0(VAR_0->transp);

 VAR_0->red = VAR_0->green = VAR_0->blue = VAR_0->transp = ((void*)0);
 VAR_0->len = 0;
}
