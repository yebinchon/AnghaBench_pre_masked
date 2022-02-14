
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t frame_size; int renderer; int buffer; } ;
typedef TYPE_1__ wasapi_t ;
typedef size_t UINT32 ;
typedef int HRESULT ;
typedef int BYTE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,int **) ;
 int FUNC_2 (int ,size_t,int ) ;
 int FUNC_3 (int ,int *,size_t) ;

__attribute__((used)) static bool FUNC_4(wasapi_t * VAR_0, size_t VAR_1)
{
   BYTE *VAR_2 = ((void*)0);
   UINT32 VAR_3 = VAR_1 / VAR_0->frame_size;
   HRESULT VAR_4 = FUNC_1(
         VAR_0->renderer, VAR_3, &VAR_2);
   if (FUNC_0(VAR_4))
      return 0;

   FUNC_3(VAR_0->buffer, VAR_2, VAR_1);
   VAR_4 = FUNC_2(
         VAR_0->renderer, VAR_3,
         0);
   if (FUNC_0(VAR_4))
      return 0;

   return 1;
}
