
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int height; scalar_t__ userdata; } ;
typedef TYPE_3__ video_frame_info_t ;
struct gdi_texture {int width; int height; void* bmp_old; int data; void* bmp; } ;
struct TYPE_15__ {scalar_t__ x; scalar_t__ y; int width; int height; scalar_t__ texture; } ;
typedef TYPE_4__ menu_display_ctx_draw_t ;
struct TYPE_16__ {scalar_t__ texDC; void* bmp_old; scalar_t__ memDC; void* bmp; int winDC; } ;
typedef TYPE_5__ gdi_t ;
struct TYPE_13__ {int biBitCount; int biWidth; int biHeight; int biPlanes; int biSize; int biCompression; scalar_t__ biSizeImage; } ;
struct TYPE_12__ {int member_0; } ;
struct TYPE_18__ {TYPE_2__ bmiHeader; TYPE_1__ member_0; } ;
struct TYPE_17__ {int SourceConstantAlpha; int AlphaFormat; scalar_t__ BlendFlags; int BlendOp; int member_0; } ;
typedef void* HBITMAP ;
typedef TYPE_6__ BLENDFUNCTION ;
typedef int BITMAPINFOHEADER ;
typedef TYPE_7__ BITMAPINFO ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__,int,int,int,scalar_t__,int ,int ,int,int,TYPE_6__) ;
 int VAR_2 ;
 void* FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__,void*) ;
 int FUNC_4 (scalar_t__,scalar_t__,int,int,int,scalar_t__,int ,int ,int,int,int ) ;
 int FUNC_5 (scalar_t__,int ,int ,int,int,int ,int ,int,int,int ,TYPE_7__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(menu_display_ctx_draw_t *VAR_5,
      video_frame_info_t *VAR_6)
{
   struct gdi_texture *VAR_7 = ((void*)0);
   gdi_t *VAR_8 = (gdi_t*)VAR_6->userdata;
   BITMAPINFO VAR_9 = {{0}};

   if (!VAR_8 || !VAR_5 || VAR_5->x < 0 || VAR_5->y < 0 || VAR_5->width <= 1 || VAR_5->height <= 1)
      return;

   VAR_7 = (struct gdi_texture*)VAR_5->texture;

   if (!VAR_7 || VAR_7->width <= 1 || VAR_7->height <= 1)
      return;

   VAR_9.bmiHeader.biBitCount = 32;
   VAR_9.bmiHeader.biWidth = VAR_7->width;
   VAR_9.bmiHeader.biHeight = -VAR_7->height;
   VAR_9.bmiHeader.biPlanes = 1;
   VAR_9.bmiHeader.biSize = sizeof(BITMAPINFOHEADER);
   VAR_9.bmiHeader.biSizeImage = 0;
   VAR_9.bmiHeader.biCompression = VAR_2;

   if (VAR_8->memDC)
   {




      if (!VAR_8->texDC)
         VAR_8->texDC = FUNC_2(VAR_8->winDC);

      if (VAR_7->bmp)
         VAR_7->bmp_old = (HBITMAP)FUNC_3(VAR_8->texDC, VAR_7->bmp);
      else
      {

         VAR_7->bmp = FUNC_1(VAR_8->winDC, VAR_5->width, VAR_5->height);
         VAR_7->bmp_old = (HBITMAP)FUNC_3(VAR_8->texDC, VAR_7->bmp);

         FUNC_5(VAR_8->texDC, 0, 0, VAR_5->width, VAR_5->height, 0, 0, VAR_7->width, VAR_7->height, VAR_7->data, &VAR_9, VAR_3, VAR_4);
      }

      VAR_8->bmp_old = (HBITMAP)FUNC_3(VAR_8->memDC, VAR_8->bmp);
      FUNC_4(VAR_8->memDC, VAR_5->x, VAR_6->height - VAR_5->height - VAR_5->y, VAR_5->width, VAR_5->height, VAR_8->texDC, 0, 0, VAR_5->width, VAR_5->height, VAR_4);



      FUNC_3(VAR_8->memDC, VAR_8->bmp_old);
      FUNC_3(VAR_8->texDC, VAR_7->bmp_old);
   }
}
