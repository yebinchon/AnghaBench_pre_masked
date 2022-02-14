
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct fb_cmap {int len; scalar_t__ start; int * transp; void* blue; void* green; void* red; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct fb_cmap*) ;
 int FUNC_1 (struct fb_cmap*) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int,int ) ;

int FUNC_4(struct fb_cmap *VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_3*sizeof(u16);

    if (VAR_2->len != VAR_3) {
 FUNC_1(VAR_2);
 if (!VAR_3)
     return 0;
 if (!(VAR_2->red = FUNC_3(VAR_5, VAR_1)))
     goto fail;
 if (!(VAR_2->green = FUNC_3(VAR_5, VAR_1)))
     goto fail;
 if (!(VAR_2->blue = FUNC_3(VAR_5, VAR_1)))
     goto fail;
 if (VAR_4) {
     if (!(VAR_2->transp = FUNC_3(VAR_5, VAR_1)))
  goto fail;
 } else
     VAR_2->transp = ((void*)0);
    }
    VAR_2->start = 0;
    VAR_2->len = VAR_3;
    FUNC_0(FUNC_2(VAR_3), VAR_2);
    return 0;

fail:
    FUNC_1(VAR_2);
    return -VAR_0;
}
