
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int width; int y_origin; int height; int bpp; int x_origin; int descriptor; } ;
struct TYPE_3__ {int offset; int length; int bpp; } ;
struct tga_header {int image_type; int id_length; int color_map_type; TYPE_2__ image_info; TYPE_1__ colormap_info; } ;
typedef int header ;
typedef int FILE ;


 int FUNC_0 (int *,int) ;
 size_t FUNC_1 (int *,int,size_t,int *) ;
 int FUNC_2 (struct tga_header*,int ,int) ;
 int VAR_0 ;

int FUNC_3(FILE *VAR_1, int VAR_2, int VAR_3,
      uint8_t *VAR_4, size_t VAR_5)
{
   struct tga_header VAR_6;
   FUNC_2(&VAR_6, 0, sizeof(VAR_6));
   VAR_6.image_type = VAR_0;
   VAR_6.image_info.width = VAR_2;
   VAR_6.image_info.y_origin = VAR_3;
   VAR_6.image_info.height = VAR_3;
   VAR_6.image_info.bpp = 32;

   FUNC_0(VAR_1, VAR_6.id_length);
   FUNC_0(VAR_1, VAR_6.color_map_type);
   FUNC_0(VAR_1, VAR_6.image_type);
   FUNC_0(VAR_1, VAR_6.colormap_info.offset);
   FUNC_0(VAR_1, VAR_6.colormap_info.length);
   FUNC_0(VAR_1, VAR_6.colormap_info.bpp);
   FUNC_0(VAR_1, VAR_6.image_info.x_origin);
   FUNC_0(VAR_1, VAR_6.image_info.y_origin);
   FUNC_0(VAR_1, VAR_6.image_info.width);
   FUNC_0(VAR_1, VAR_6.image_info.height);
   FUNC_0(VAR_1, VAR_6.image_info.bpp);
   FUNC_0(VAR_1, VAR_6.image_info.descriptor);

   if (FUNC_1(VAR_4, 1, VAR_5, VAR_1) != VAR_5)
      goto write_fail;

   return 0;
write_fail:
   return -1;
}
