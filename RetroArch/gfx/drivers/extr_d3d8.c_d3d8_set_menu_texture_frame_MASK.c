
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {TYPE_1__* menu; int dev; } ;
typedef TYPE_2__ d3d8_video_t ;
struct TYPE_7__ {int Pitch; scalar_t__ pBits; } ;
struct TYPE_5__ {unsigned int tex_w; unsigned int tex_h; unsigned int* tex_coords; float alpha_mod; scalar_t__ tex; } ;
typedef TYPE_3__ D3DLOCKED_RECT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (scalar_t__,int ,TYPE_3__*,int *,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int *,unsigned int,unsigned int,int,int ,int ,int ,int ,int ,int ,int *,int *,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,int const*,unsigned int) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static void FUNC_8(void *VAR_2,
      const void *VAR_3, bool VAR_4, unsigned VAR_5, unsigned VAR_6,
      float VAR_7)
{
   D3DLOCKED_RECT VAR_8;
   d3d8_video_t *VAR_9 = (d3d8_video_t*)VAR_2;

   (void)VAR_8;
   (void)VAR_3;
   (void)VAR_4;
   (void)VAR_5;
   (void)VAR_6;
   (void)VAR_7;

   if ( !VAR_9->menu->tex ||
            VAR_9->menu->tex_w != VAR_5 ||
            VAR_9->menu->tex_h != VAR_6)
   {
      if (VAR_9->menu)
      FUNC_3(VAR_9->menu->tex);

      VAR_9->menu->tex = FUNC_4(VAR_9->dev, ((void*)0),
            VAR_5, VAR_6, 1,
            0, FUNC_1(),
            VAR_1, 0, 0, 0, ((void*)0), ((void*)0), 0);

      if (!VAR_9->menu->tex)
      {
         FUNC_0("[D3D8]: Failed to create menu texture.\n");
         return;
      }

      VAR_9->menu->tex_w = VAR_5;
      VAR_9->menu->tex_h = VAR_6;




   }

   VAR_9->menu->alpha_mod = VAR_7;

   if (FUNC_2(VAR_9->menu->tex, 0, &VAR_8,
            ((void*)0), 0, VAR_0))
   {
      unsigned VAR_10, VAR_11;
      if (VAR_4)
      {
         uint8_t *VAR_12 = (uint8_t*)VAR_8.pBits;
         const uint32_t *VAR_13 = (const uint32_t*)VAR_3;

         for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++, VAR_12 += VAR_8.Pitch, VAR_13 += VAR_5)
         {
            FUNC_6(VAR_12, VAR_13, VAR_5 * sizeof(uint32_t));
            FUNC_7(VAR_12 + VAR_5 * sizeof(uint32_t), 0,
                  VAR_8.Pitch - VAR_5 * sizeof(uint32_t));
         }
      }
      else
      {
         uint32_t *VAR_14 = (uint32_t*)VAR_8.pBits;
         const uint16_t *VAR_15 = (const uint16_t*)VAR_3;

         for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++, VAR_14 += VAR_8.Pitch >> 2, VAR_15 += VAR_5)
         {
            for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++)
            {
               uint16_t VAR_16 = VAR_15[VAR_11];
               uint32_t VAR_17 = (VAR_16 >> 12) & 0xf;
               uint32_t VAR_18 = (VAR_16 >> 8) & 0xf;
               uint32_t VAR_19 = (VAR_16 >> 4) & 0xf;
               uint32_t VAR_20 = (VAR_16 >> 0) & 0xf;
               VAR_17 = ((VAR_17 << 4) | VAR_17) << 16;
               VAR_18 = ((VAR_18 << 4) | VAR_18) << 8;
               VAR_19 = ((VAR_19 << 4) | VAR_19) << 0;
               VAR_20 = ((VAR_20 << 4) | VAR_20) << 24;
               VAR_14[VAR_11] = VAR_17 | VAR_18 | VAR_19 | VAR_20;
            }
         }
      }

      if (VAR_9->menu)
         FUNC_5(VAR_9->menu->tex);
   }
}
