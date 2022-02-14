
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc_data {size_t vc_num; } ;
struct font_desc {int data; int height; int width; } ;
struct TYPE_4__ {int blit_y; int blit_x; } ;
struct TYPE_3__ {int yres; int xres; } ;
struct fb_info {TYPE_2__ pixmap; TYPE_1__ var; } ;
struct console_font {int height; int width; } ;


 int VAR_0 ;
 size_t* VAR_1 ;
 int FUNC_0 (struct vc_data*,int ,int ,int ,int ) ;
 struct font_desc* FUNC_1 (char*) ;
 struct font_desc* FUNC_2 (int ,int ,int ,int ) ;
 struct fb_info** VAR_2 ;

__attribute__((used)) static int FUNC_3(struct vc_data *VAR_3, struct console_font *VAR_4, char *VAR_5)
{
 struct fb_info *VAR_6 = VAR_2[VAR_1[VAR_3->vc_num]];
 const struct font_desc *VAR_7;

 if (!VAR_5)
  VAR_7 = FUNC_2(VAR_6->var.xres, VAR_6->var.yres,
         VAR_6->pixmap.blit_x, VAR_6->pixmap.blit_y);
 else if (!(VAR_7 = FUNC_1(VAR_5)))
  return -VAR_0;

 VAR_4->width = VAR_7->width;
 VAR_4->height = VAR_7->height;
 return FUNC_0(VAR_3, VAR_7->width, VAR_7->height, VAR_7->data, 0);
}
