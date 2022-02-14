
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t frame_size; int renderer; } ;
typedef TYPE_1__ wasapi_t ;
typedef size_t UINT32 ;
typedef int HRESULT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,int **) ;
 int FUNC_2 (int ,size_t,int ) ;
 int FUNC_3 (int *,void const*,size_t) ;

__attribute__((used)) static bool FUNC_4(wasapi_t * VAR_0, const void * VAR_1, size_t VAR_2)
{
   BYTE *VAR_3 = ((void*)0);
   UINT32 VAR_4 = VAR_2 / VAR_0->frame_size;
   HRESULT VAR_5 = FUNC_1(
         VAR_0->renderer, VAR_4, &VAR_3);
   if (FUNC_0(VAR_5))
      return 0;

   FUNC_3(VAR_3, VAR_1, VAR_2);
   VAR_5 = FUNC_2(
         VAR_0->renderer, VAR_4,
         0);
   if (FUNC_0(VAR_5))
      return 0;

   return 1;
}
