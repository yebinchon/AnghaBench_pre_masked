
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct texture_image {int width; unsigned int height; int * pixels; } ;
struct d3d8_texture_info {scalar_t__ data; scalar_t__ userdata; } ;
struct TYPE_4__ {int dev; } ;
typedef TYPE_1__ d3d8_video_t ;
struct TYPE_5__ {int Pitch; scalar_t__ pBits; } ;
typedef scalar_t__ LPDIRECT3DTEXTURE8 ;
typedef TYPE_2__ D3DLOCKED_RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ,TYPE_2__*,int *,int ,int ) ;
 int FUNC_3 (int ,int *,int,unsigned int,int ,unsigned int,int ,int ,int ,int ,int ,int *,int *,int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int const*,int) ;

__attribute__((used)) static void FUNC_6(
      struct d3d8_texture_info *VAR_2,
      uintptr_t *VAR_3)
{
   D3DLOCKED_RECT VAR_4;
   unsigned VAR_5 = 0;
   d3d8_video_t *VAR_6 = (d3d8_video_t*)VAR_2->userdata;
   struct texture_image *VAR_7 = (struct texture_image*)VAR_2->data;
   LPDIRECT3DTEXTURE8 VAR_8 = (LPDIRECT3DTEXTURE8)FUNC_3(VAR_6->dev, ((void*)0),
               VAR_7->width, VAR_7->height, 0,
               VAR_5, FUNC_1(),
               VAR_1, 0, 0, 0,
               ((void*)0), ((void*)0), 0);

   if (!VAR_8)
   {
      FUNC_0("[D3D8]: Failed to create texture\n");
      return;
   }

   if (FUNC_2(VAR_8, 0, &VAR_4,
            ((void*)0), 0, VAR_0))
   {
      unsigned VAR_9;
      uint32_t *VAR_10 = (uint32_t*)(VAR_4.pBits);
      const uint32_t *VAR_11 = VAR_7->pixels;
      unsigned VAR_12 = VAR_4.Pitch >> 2;

      for (VAR_9 = 0; VAR_9 < VAR_7->height; VAR_9++, VAR_10 += VAR_12, VAR_11 += VAR_7->width)
         FUNC_5(VAR_10, VAR_11, VAR_7->width << 2);
      FUNC_4(VAR_8);
   }

   *VAR_3 = (uintptr_t)VAR_8;
}
