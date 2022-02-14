
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct fbcon_ops {unsigned int cursor_size; int* cursor_src; } ;
struct TYPE_4__ {int scan_align; int buf_align; } ;
struct fb_info {scalar_t__ state; TYPE_1__* fbops; TYPE_2__ pixmap; struct fbcon_ops* fbcon_par; } ;
struct fb_image {int width; unsigned int height; int* data; } ;
struct fb_cursor {int rop; int* mask; scalar_t__ enable; struct fb_image image; } ;
struct TYPE_3__ {int (* fb_imageblit ) (struct fb_info*,struct fb_image*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;


 int* FUNC_0 (struct fb_info*,TYPE_2__*,unsigned int) ;
 int FUNC_1 (int*,unsigned int,int*,unsigned int,unsigned int) ;
 int FUNC_2 (int*) ;
 int* FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (int*,int*,unsigned int) ;
 int FUNC_5 (struct fb_info*,struct fb_image*) ;

int FUNC_6(struct fb_info *VAR_3, struct fb_cursor *VAR_4)
{
 struct fbcon_ops *VAR_5 = VAR_3->fbcon_par;
 unsigned int VAR_6 = VAR_3->pixmap.scan_align - 1;
 unsigned int VAR_7 = VAR_3->pixmap.buf_align - 1;
 unsigned int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 struct fb_image *VAR_13;
 u8 *VAR_14, *VAR_15;

 if (VAR_3->state != VAR_1)
  return 0;

 VAR_11 = (VAR_4->image.width + 7) >> 3;
 VAR_10 = VAR_11 * VAR_4->image.height;

 if (VAR_10 + sizeof(struct fb_image) != VAR_5->cursor_size) {
  if (VAR_5->cursor_src != ((void*)0))
   FUNC_2(VAR_5->cursor_src);
  VAR_5->cursor_size = VAR_10 + sizeof(struct fb_image);

  VAR_5->cursor_src = FUNC_3(VAR_5->cursor_size, VAR_2);
  if (!VAR_5->cursor_src) {
   VAR_5->cursor_size = 0;
   return -VAR_0;
  }
 }

 VAR_14 = VAR_5->cursor_src + sizeof(struct fb_image);
 VAR_13 = (struct fb_image *)VAR_5->cursor_src;
 *VAR_13 = VAR_4->image;
 VAR_12 = (VAR_11 + VAR_6) & ~VAR_6;

 VAR_9 = VAR_12 * VAR_13->height + VAR_7;
 VAR_9 &= ~VAR_7;
 VAR_15 = FUNC_0(VAR_3, &VAR_3->pixmap, VAR_9);

 if (VAR_4->enable) {
  switch (VAR_4->rop) {
  case 128:
   for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
    VAR_14[VAR_8] = VAR_13->data[VAR_8] ^ VAR_4->mask[VAR_8];
   break;
  case 129:
  default:
   for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++)
    VAR_14[VAR_8] = VAR_13->data[VAR_8] & VAR_4->mask[VAR_8];
   break;
  }
 } else
  FUNC_4(VAR_14, VAR_13->data, VAR_10);

 FUNC_1(VAR_15, VAR_12, VAR_14, VAR_11, VAR_13->height);
 VAR_13->data = VAR_15;
 VAR_3->fbops->fb_imageblit(VAR_3, VAR_13);
 return 0;
}
