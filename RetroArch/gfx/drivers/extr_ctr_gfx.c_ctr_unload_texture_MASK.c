
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ctr_texture {scalar_t__ data; } ;


 int FUNC_0 (struct ctr_texture*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, uintptr_t VAR_1)
{
   struct ctr_texture *VAR_2 = (struct ctr_texture*)VAR_1;

   if (!VAR_2)
      return;

   if (VAR_2->data)
   {
      if(((u32)VAR_2->data & 0xFF000000) == 0x1F000000)
         FUNC_2(VAR_2->data);
      else
         FUNC_1(VAR_2->data);
   }
   FUNC_0(VAR_2);
}
