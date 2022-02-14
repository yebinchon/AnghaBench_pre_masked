
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct exynos_page {int used; int clear; int buf_id; struct exynos_bo* bo; struct exynos_data* base; } ;
struct exynos_device {int dummy; } ;
struct exynos_data {unsigned int num_pages; int bpp; struct exynos_device* device; struct exynos_page* pages; int height; int width; scalar_t__ pitch; int size; struct exynos_bo** buf; } ;
struct exynos_bo {scalar_t__ handle; } ;
struct TYPE_2__ {unsigned int width; unsigned int height; unsigned int bpp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (unsigned int,int) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,int ,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__*,int *,unsigned int const) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,int *,int,int ) ;
 struct exynos_bo* FUNC_4 (struct exynos_device*,int ,unsigned int const) ;
 int FUNC_5 (struct exynos_bo*) ;
 int FUNC_6 (struct exynos_page*,int) ;
 struct exynos_bo* FUNC_7 (struct exynos_device*,unsigned int const) ;
 struct exynos_device* FUNC_8 (int ) ;
 int FUNC_9 (struct exynos_device*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_10(struct exynos_data *VAR_8)
{
   struct exynos_bo *VAR_9;
   struct exynos_page *VAR_10;
   unsigned VAR_11;
   uint32_t VAR_12;
   const unsigned VAR_13 = 0;
   uint32_t VAR_14[4] = {0}, VAR_15[4] = {0}, VAR_16[4] = {0};
   struct exynos_device *VAR_17 = FUNC_8(VAR_6);

   if (!VAR_17)
   {
      FUNC_0("[video_exynos]: failed to create device from fd\n");
      return -1;
   }

   VAR_10 = (struct exynos_page*)FUNC_1(VAR_8->num_pages,
         sizeof(struct exynos_page));

   if (!VAR_10)
   {
      FUNC_0("[video_exynos]: failed to allocate pages\n");
      goto fail_alloc;
   }

   for (VAR_11 = 0; VAR_11 < VAR_2; ++VAR_11)
   {
      const unsigned VAR_18 = VAR_3[VAR_11].width * VAR_3[VAR_11].height * VAR_3[VAR_11].bpp;

      VAR_9 = FUNC_7(VAR_17, VAR_18);
      if (!VAR_9)
         break;

      VAR_8->buf[VAR_11] = VAR_9;
   }

   if (VAR_11 != VAR_2)
   {
      while (VAR_11-- > 0)
      {
         FUNC_5(VAR_8->buf[VAR_11]);
         VAR_8->buf[VAR_11] = ((void*)0);
      }

      goto fail;
   }

   for (VAR_11 = 0; VAR_11 < VAR_8->num_pages; ++VAR_11)
   {
      VAR_9 = FUNC_4(VAR_17, VAR_8->size, VAR_13);
      if (!VAR_9)
      {
         FUNC_0("[video_exynos]: failed to create buffer object\n");
         goto fail;
      }



      VAR_10[VAR_11].bo = VAR_9;
      VAR_10[VAR_11].base = VAR_8;

      VAR_10[VAR_11].used = 0;
      VAR_10[VAR_11].clear = 1;
   }

   VAR_12 = (VAR_8->bpp == 2) ? VAR_0 : VAR_1;
   VAR_15[0] = VAR_8->pitch;
   VAR_16[0] = 0;

   for (VAR_11 = 0; VAR_11 < VAR_8->num_pages; ++VAR_11)
   {
      VAR_14[0] = VAR_10[VAR_11].bo->handle;

      if (FUNC_2(VAR_6, VAR_8->width, VAR_8->height,
               VAR_12, VAR_14, VAR_15, VAR_16,
               &VAR_10[VAR_11].buf_id, VAR_13))
      {
         FUNC_0("[video_exynos]: failed to add bo %u to fb\n", VAR_11);
         goto fail;
      }
   }


   if (FUNC_3(VAR_6, VAR_4,
            VAR_10[VAR_8->num_pages - 1].buf_id,
            0, 0, &VAR_5, 1, VAR_7))
   {
      FUNC_0("[video_exynos]: initial CRTC setup failed.\n");
      goto fail;
   }

   VAR_8->pages = VAR_10;
   VAR_8->device = VAR_17;

   return 0;

fail:
   FUNC_6(VAR_10, VAR_8->num_pages);

fail_alloc:
   FUNC_9(VAR_17);

   return -1;
}
