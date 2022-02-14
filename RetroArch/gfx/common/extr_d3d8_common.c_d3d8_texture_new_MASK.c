
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IDirect3DTexture8 {int dummy; } ;
typedef int PALETTEENTRY ;
typedef int LPDIRECT3DDEVICE8 ;
typedef scalar_t__ INT32 ;
typedef int D3DPOOL ;
typedef int D3DFORMAT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ,struct IDirect3DTexture8**) ;
 int VAR_0 ;
 void* FUNC_2 (int ,char const*,unsigned int,unsigned int,unsigned int,unsigned int,int ,int ,unsigned int,unsigned int,scalar_t__,void*,int *) ;

void *FUNC_3(LPDIRECT3DDEVICE8 VAR_1,
      const char *VAR_2, unsigned VAR_3, unsigned VAR_4,
      unsigned VAR_5, unsigned VAR_6, INT32 VAR_7,
      INT32 VAR_8, unsigned VAR_9, unsigned VAR_10,
      INT32 VAR_11, void *VAR_12,
      PALETTEENTRY *VAR_13, bool VAR_14)
{
   void *VAR_15 = ((void*)0);

   if (VAR_2)
   {







      return ((void*)0);

   }

   if (FUNC_0(FUNC_1(VAR_1,
               VAR_3, VAR_4, VAR_5, VAR_6,
               (D3DFORMAT)VAR_7, (D3DPOOL)VAR_8,
               (struct IDirect3DTexture8**)&VAR_15)))
      return ((void*)0);

   return VAR_15;
}
