
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int z_distance; int z_length; scalar_t__ code_buffer; scalar_t__ num_bits; } ;
typedef TYPE_1__ stbi__zbuf ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_6(stbi__zbuf *VAR_2, int VAR_3)
{
   int VAR_4, VAR_5;
   if (VAR_3)
      if (!FUNC_3(VAR_2)) return 0;
   VAR_2->num_bits = 0;
   VAR_2->code_buffer = 0;
   do {
      VAR_4 = FUNC_5(VAR_2,1);
      VAR_5 = FUNC_5(VAR_2,2);
      if (VAR_5 == 0) {
         if (!FUNC_2(VAR_2)) return 0;
      } else if (VAR_5 == 3) {
         return 0;
      } else {
         if (VAR_5 == 1) {

            if (!FUNC_4(&VAR_2->z_length , VAR_1 , 288)) return 0;
            if (!FUNC_4(&VAR_2->z_distance, VAR_0, 32)) return 0;
         } else {
            if (!FUNC_0(VAR_2)) return 0;
         }
         if (!FUNC_1(VAR_2)) return 0;
      }
   } while (!VAR_4);
   return 1;
}
