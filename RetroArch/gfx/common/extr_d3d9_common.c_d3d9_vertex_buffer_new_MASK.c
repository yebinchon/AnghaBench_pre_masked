
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPDIRECT3DVERTEXBUFFER9 ;
typedef int LPDIRECT3DDEVICE9 ;
typedef scalar_t__ INT32 ;
typedef int D3DPOOL ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;

void *FUNC_3(void *VAR_1,
      unsigned VAR_2, unsigned VAR_3,
      unsigned VAR_4, INT32 VAR_5, void *VAR_6)
{
   void *VAR_7 = ((void*)0);
   LPDIRECT3DDEVICE9 VAR_8 = (LPDIRECT3DDEVICE9)VAR_1;


   if (VAR_3 == 0)
      if (FUNC_2(VAR_8))
         VAR_3 = VAR_0;


   if (FUNC_0(FUNC_1(
               VAR_8, VAR_2, VAR_3, VAR_4,
               (D3DPOOL)VAR_5,
               (LPDIRECT3DVERTEXBUFFER9*)&VAR_7, ((void*)0))))
      return ((void*)0);

   return VAR_7;
}
