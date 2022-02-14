
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int stbiw_uint32 ;
struct TYPE_4__ {int context; int (* func ) (int ,int *,int) ;} ;
typedef TYPE_1__ stbi__write_context ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int,int,unsigned char*) ;
 int FUNC_1 (int ,int *,int) ;

__attribute__((used)) static void FUNC_2(stbi__write_context *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, void *VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
   stbiw_uint32 VAR_11 = 0;
   int VAR_12,VAR_13, VAR_14;

   if (VAR_5 <= 0)
      return;

   if (VAR_0)
      VAR_3 *= -1;

   if (VAR_3 < 0)
      VAR_14 = -1, VAR_13 = VAR_5-1;
   else
      VAR_14 = VAR_5, VAR_13 = 0;

   for (; VAR_13 != VAR_14; VAR_13 += VAR_3) {
      for (VAR_12=0; VAR_12 < VAR_4; ++VAR_12) {
         unsigned char *VAR_15 = (unsigned char *) VAR_7 + (VAR_13*VAR_4+VAR_12)*VAR_6;
         FUNC_0(VAR_1, VAR_2, VAR_6, VAR_8, VAR_10, VAR_15);
      }
      VAR_1->func(VAR_1->context, &VAR_11, VAR_9);
   }
}
