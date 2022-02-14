
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rgb_pixfmt_map_entry {scalar_t__ bits_per_pixel; scalar_t__ red_offset; scalar_t__ green_offset; scalar_t__ blue_offset; int pixfmt; } ;
struct TYPE_6__ {scalar_t__ offset; } ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_4__ {scalar_t__ offset; } ;
struct fb_var_screeninfo {scalar_t__ bits_per_pixel; TYPE_3__ blue; TYPE_2__ green; TYPE_1__ red; } ;
typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;


 int VAR_0 ;
 int FUNC_0 (struct rgb_pixfmt_map_entry*) ;
 struct rgb_pixfmt_map_entry* VAR_1 ;

enum AVPixelFormat FUNC_1(struct fb_var_screeninfo *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
        const struct rgb_pixfmt_map_entry *VAR_4 = &VAR_1[VAR_3];
        if (VAR_4->bits_per_pixel == VAR_2->bits_per_pixel &&
            VAR_4->red_offset == VAR_2->red.offset &&
            VAR_4->green_offset == VAR_2->green.offset &&
            VAR_4->blue_offset == VAR_2->blue.offset)
            return VAR_4->pixfmt;
    }

    return VAR_0;
}
