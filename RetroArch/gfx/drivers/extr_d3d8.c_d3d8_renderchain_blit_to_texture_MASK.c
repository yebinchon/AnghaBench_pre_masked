
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int last_width; unsigned int last_height; int tex; int pixel_size; int tex_h; int dev; } ;
typedef TYPE_1__ d3d8_renderchain_t ;
typedef int LPDIRECT3DDEVICE8 ;
typedef int D3DLOCKED_RECT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int ,int *,int *,int ,int ) ;
 int FUNC_2 (int ,int ,int *,int *,int ,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *,void const*,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(
      d3d8_renderchain_t *VAR_1,
      const void *VAR_2,
      unsigned VAR_3, unsigned VAR_4, unsigned VAR_5)
{
   D3DLOCKED_RECT VAR_6;
   LPDIRECT3DDEVICE8 VAR_7 = (LPDIRECT3DDEVICE8)VAR_1->dev;

   FUNC_0(VAR_1);

   if (VAR_1->last_width != VAR_3 || VAR_1->last_height != VAR_4)
   {
      FUNC_1(VAR_1->tex,
            0, &VAR_6, ((void*)0), VAR_1->tex_h, VAR_0);
      FUNC_2(VAR_1->tex,
            0, &VAR_6, ((void*)0), VAR_1->tex_h, VAR_0);
   }


   FUNC_3(VAR_7, 0, ((void*)0));

   if (FUNC_1(VAR_1->tex, 0, &VAR_6, ((void*)0), 0, 0))
   {
      FUNC_4(VAR_1->pixel_size, VAR_1->tex,
            &VAR_6, VAR_2, VAR_3, VAR_4, VAR_5);
      FUNC_5(VAR_1->tex);
   }
}
