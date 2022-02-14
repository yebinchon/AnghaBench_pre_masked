
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int stbi_uc ;
typedef int stbi__uint16 ;
struct TYPE_3__ {int bits_per_channel; } ;
typedef TYPE_1__ stbi__result_info ;
typedef int stbi__context ;


 int FUNC_0 (int) ;
 void* FUNC_1 (int *,int,int,int) ;
 void* FUNC_2 (int *,int*,int*,int*,int,TYPE_1__*,int) ;
 int FUNC_3 (void*,int,int,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static stbi__uint16 *FUNC_4(stbi__context *VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
   stbi__result_info VAR_6;
   void *VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6, 16);

   if (VAR_7 == ((void*)0))
      return ((void*)0);

   if (VAR_6.bits_per_channel != 16) {
      FUNC_0(VAR_6.bits_per_channel == 8);
      VAR_7 = FUNC_1((stbi_uc *) VAR_7, *VAR_2, *VAR_3, VAR_5 == 0 ? *VAR_4 : VAR_5);
      VAR_6.bits_per_channel = 16;
   }




   if (VAR_0) {
      int VAR_8 = VAR_5 ? VAR_5 : *VAR_4;
      FUNC_3(VAR_7, *VAR_2, *VAR_3, VAR_8 * sizeof(stbi__uint16));
   }

   return (stbi__uint16 *) VAR_7;
}
