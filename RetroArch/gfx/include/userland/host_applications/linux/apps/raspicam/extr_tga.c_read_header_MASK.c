
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int descriptor; int bpp; int height; int width; int y_origin; int x_origin; } ;
struct TYPE_3__ {int bpp; int length; int offset; } ;
struct tga_header {TYPE_2__ image_info; TYPE_1__ colormap_info; int image_type; int color_map_type; int id_length; } ;
typedef int FILE ;


 int FUNC_0 (int *,int ) ;

__attribute__((used)) static int FUNC_1(FILE *VAR_0, struct tga_header *VAR_1) {
    FUNC_0(VAR_0, VAR_1->id_length);
    FUNC_0(VAR_0, VAR_1->color_map_type);
    FUNC_0(VAR_0, VAR_1->image_type);
    FUNC_0(VAR_0, VAR_1->colormap_info.offset);
    FUNC_0(VAR_0, VAR_1->colormap_info.length);
    FUNC_0(VAR_0, VAR_1->colormap_info.bpp);
    FUNC_0(VAR_0, VAR_1->image_info.x_origin);
    FUNC_0(VAR_0, VAR_1->image_info.y_origin);
    FUNC_0(VAR_0, VAR_1->image_info.width);
    FUNC_0(VAR_0, VAR_1->image_info.height);
    FUNC_0(VAR_0, VAR_1->image_info.bpp);
    FUNC_0(VAR_0, VAR_1->image_info.descriptor);

    return 0;

read_fail:
    return -1;
}
