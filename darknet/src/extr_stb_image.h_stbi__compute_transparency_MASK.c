
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbi_uc ;
typedef scalar_t__ stbi__uint32 ;
struct TYPE_4__ {int* out; TYPE_2__* s; } ;
typedef TYPE_1__ stbi__png ;
struct TYPE_5__ {scalar_t__ img_x; scalar_t__ img_y; } ;
typedef TYPE_2__ stbi__context ;


 int FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(stbi__png *VAR_0, stbi_uc VAR_1[3], int VAR_2)
{
   stbi__context *VAR_3 = VAR_0->s;
   stbi__uint32 VAR_4, VAR_5 = VAR_3->img_x * VAR_3->img_y;
   stbi_uc *VAR_6 = VAR_0->out;



   FUNC_0(VAR_2 == 2 || VAR_2 == 4);

   if (VAR_2 == 2) {
      for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4) {
         VAR_6[1] = (VAR_6[0] == VAR_1[0] ? 0 : 255);
         VAR_6 += 2;
      }
   } else {
      for (VAR_4=0; VAR_4 < VAR_5; ++VAR_4) {
         if (VAR_6[0] == VAR_1[0] && VAR_6[1] == VAR_1[1] && VAR_6[2] == VAR_1[2])
            VAR_6[3] = 0;
         VAR_6 += 4;
      }
   }
   return 1;
}
