
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int byte ;
struct TYPE_3__ {int userData; scalar_t__ (* realloc ) (int ,int *,size_t) ;} ;
typedef TYPE_1__ JSON_MemorySuite ;


 int FUNC_0 (int *,int *,size_t) ;
 scalar_t__ FUNC_1 (int ,int *,size_t) ;
 scalar_t__ FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static byte* FUNC_3(const JSON_MemorySuite* VAR_0, byte* VAR_1, byte* VAR_2, size_t VAR_3)
{
   size_t VAR_4 = VAR_3 * 2;
   if (VAR_4 < VAR_3)
   {
      VAR_2 = ((void*)0);
   }
   else if (VAR_2 == VAR_1)
   {
      VAR_2 = (byte*)VAR_0->realloc(VAR_0->userData, ((void*)0), VAR_4);
      if (VAR_2)
      {
         FUNC_0(VAR_2, VAR_1, VAR_3);
      }
   }
   else
   {
      VAR_2 = (byte*)VAR_0->realloc(VAR_0->userData, VAR_2, VAR_4);
   }
   return VAR_2;
}
