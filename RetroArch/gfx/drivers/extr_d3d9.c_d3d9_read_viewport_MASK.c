
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int Height; unsigned int Y; unsigned int Width; int X; } ;
struct TYPE_6__ {TYPE_1__ final_viewport; int dev; } ;
typedef TYPE_2__ d3d9_video_t ;
struct TYPE_7__ {int Pitch; scalar_t__ pBits; } ;
typedef int * LPDIRECT3DSURFACE9 ;
typedef int LPDIRECT3DDEVICE9 ;
typedef TYPE_3__ D3DLOCKED_RECT ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,unsigned int,int ,int ,void**,int *) ;
 int FUNC_1 (int ,int ,void**) ;
 int FUNC_2 (int ,int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (unsigned int*,unsigned int*) ;

__attribute__((used)) static bool FUNC_8(void *VAR_1, uint8_t *VAR_2, bool VAR_3)
{
   unsigned VAR_4, VAR_5;
   D3DLOCKED_RECT VAR_6;
   LPDIRECT3DSURFACE9 VAR_7 = ((void*)0);
   LPDIRECT3DSURFACE9 VAR_8 = ((void*)0);
   bool VAR_9 = 1;
   d3d9_video_t *VAR_10 = (d3d9_video_t*)VAR_1;
   LPDIRECT3DDEVICE9 VAR_11 = VAR_10->dev;

   FUNC_7(&VAR_4, &VAR_5);

   if (
         !FUNC_1(VAR_11, 0, (void**)&VAR_7) ||
         !FUNC_0(VAR_11, VAR_4, VAR_5,
            FUNC_3(),
            VAR_0, (void**)&VAR_8, ((void*)0)) ||
         !FUNC_2(VAR_11, VAR_7, VAR_8)
         )
   {
      VAR_9 = 0;
      goto end;
   }

   if (FUNC_5(VAR_8, &VAR_6))
   {
      unsigned VAR_12, VAR_13;
      unsigned VAR_14 = VAR_6.Pitch / 4;
      const uint32_t *VAR_15 = (const uint32_t*)VAR_6.pBits;

      VAR_15 += VAR_10->final_viewport.X;
      VAR_15 += (VAR_10->final_viewport.Height - 1) * VAR_14;
      VAR_15 -= VAR_10->final_viewport.Y * VAR_14;

      for (VAR_13 = 0; VAR_13 < VAR_10->final_viewport.Height; VAR_13++, VAR_15 -= VAR_14)
      {
         for (VAR_12 = 0; VAR_12 < VAR_10->final_viewport.Width; VAR_12++)
         {
            *VAR_2++ = (VAR_15[VAR_12] >> 0) & 0xff;
            *VAR_2++ = (VAR_15[VAR_12] >> 8) & 0xff;
            *VAR_2++ = (VAR_15[VAR_12] >> 16) & 0xff;
         }
      }

      FUNC_6(VAR_8);
   }
   else
      VAR_9 = 0;

end:
   if (VAR_7)
      FUNC_4(VAR_7);
   if (VAR_8)
      FUNC_4(VAR_8);
   return VAR_9;
}
