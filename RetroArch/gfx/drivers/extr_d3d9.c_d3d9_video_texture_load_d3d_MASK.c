
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct texture_image {int width; unsigned int height; int * pixels; } ;
struct d3d9_texture_info {scalar_t__ type; scalar_t__ data; scalar_t__ userdata; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ d3d9_video_t ;
struct TYPE_5__ {int Pitch; scalar_t__ pBits; } ;
typedef int * LPDIRECT3DTEXTURE9 ;
typedef TYPE_2__ D3DLOCKED_RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int *,int ,TYPE_2__*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int,unsigned int,int ,unsigned int,int ,int ,int ,int ,int ,int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_6(
      struct d3d9_texture_info *VAR_4,
      uintptr_t *VAR_5)
{
   D3DLOCKED_RECT VAR_6;
   LPDIRECT3DTEXTURE9 VAR_7 = ((void*)0);
   unsigned VAR_8 = 0;
   bool VAR_9 = 0;
   d3d9_video_t *VAR_10 = (d3d9_video_t*)VAR_4->userdata;
   struct texture_image *VAR_11 = (struct texture_image*)VAR_4->data;

   if (!VAR_11)
      return;

   if((VAR_4->type == VAR_2) ||
      (VAR_4->type == VAR_3))
      VAR_9 = 1;

   VAR_7 = (LPDIRECT3DTEXTURE9)FUNC_3(VAR_10->dev, ((void*)0),
               VAR_11->width, VAR_11->height, 0,
               VAR_8, FUNC_1(),
               VAR_1, 0, 0, 0,
               ((void*)0), ((void*)0), VAR_9);

   if (!VAR_7)
   {
      FUNC_0("[D3D9]: Failed to create texture\n");
      return;
   }

   if (FUNC_2(VAR_7, 0, &VAR_6,
            ((void*)0), 0, VAR_0))
   {
      unsigned VAR_12;
      uint32_t *VAR_13 = (uint32_t*)(VAR_6.pBits);
      const uint32_t *VAR_14 = VAR_11->pixels;
      unsigned VAR_15 = VAR_6.Pitch >> 2;

      for (VAR_12 = 0; VAR_12 < VAR_11->height; VAR_12++, VAR_13 += VAR_15, VAR_14 += VAR_11->width)
         FUNC_5(VAR_13, VAR_14, VAR_11->width << 2);
      FUNC_4(VAR_7);
   }

   *VAR_5 = (uintptr_t)VAR_7;
}
