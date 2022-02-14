
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int context; int (* func ) (int ,unsigned char*,int) ;} ;
typedef TYPE_1__ stbi__write_context ;


 unsigned char FUNC_0 (int) ;
 int FUNC_1 (unsigned char const*,unsigned char*,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,int,int,int,int,int ,void*,int,int ,char*,int ,int ,int,int ,int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_3 (TYPE_1__*,int,int,int,int ,unsigned char*) ;
 int FUNC_4 (TYPE_1__*,char*,int ,int ,int,int ,int ,int ,int ,int ,int,int,int,int) ;
 int FUNC_5 (int ,unsigned char*,int) ;
 int FUNC_6 (int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_7(stbi__write_context *VAR_2, int VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
   int VAR_7 = (VAR_5 == 2 || VAR_5 == 4);
   int VAR_8 = VAR_7 ? VAR_5-1 : VAR_5;
   int VAR_9 = VAR_8 < 2 ? 3 : 2;

   if (VAR_4 < 0 || VAR_3 < 0)
      return 0;

   if (!VAR_1) {
      return FUNC_2(VAR_2, -1, -1, VAR_3, VAR_4, VAR_5, 0, (void *) VAR_6, VAR_7, 0,
         "111 221 2222 11", 0, 0, VAR_9, 0, 0, 0, 0, 0, VAR_3, VAR_4, (VAR_8 + VAR_7) * 8, VAR_7 * 8);
   } else {
      int VAR_10,VAR_11,VAR_12;
      int VAR_13, VAR_14;

      FUNC_4(VAR_2, "111 221 2222 11", 0,0,VAR_9+8, 0,0,0, 0,0,VAR_3,VAR_4, (VAR_8 + VAR_7) * 8, VAR_7 * 8);

      if (VAR_0) {
         VAR_11 = 0;
         VAR_13 = VAR_4;
         VAR_14 = 1;
      } else {
         VAR_11 = VAR_4-1;
         VAR_13 = -1;
         VAR_14 = -1;
      }
      for (; VAR_11 != VAR_13; VAR_11 += VAR_14) {
         unsigned char *VAR_15 = (unsigned char *) VAR_6 + VAR_11 * VAR_3 * VAR_5;
         int VAR_16;

         for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10 += VAR_16) {
            unsigned char *VAR_17 = VAR_15 + VAR_10 * VAR_5;
            int VAR_18 = 1;
            VAR_16 = 1;

            if (VAR_10 < VAR_3 - 1) {
               ++VAR_16;
               VAR_18 = FUNC_1(VAR_17, VAR_15 + (VAR_10 + 1) * VAR_5, VAR_5);
               if (VAR_18) {
                  const unsigned char *VAR_19 = VAR_17;
                  for (VAR_12 = VAR_10 + 2; VAR_12 < VAR_3 && VAR_16 < 128; ++VAR_12) {
                     if (FUNC_1(VAR_19, VAR_15 + VAR_12 * VAR_5, VAR_5)) {
                        VAR_19 += VAR_5;
                        ++VAR_16;
                     } else {
                        --VAR_16;
                        break;
                     }
                  }
               } else {
                  for (VAR_12 = VAR_10 + 2; VAR_12 < VAR_3 && VAR_16 < 128; ++VAR_12) {
                     if (!FUNC_1(VAR_17, VAR_15 + VAR_12 * VAR_5, VAR_5)) {
                        ++VAR_16;
                     } else {
                        break;
                     }
                  }
               }
            }

            if (VAR_18) {
               unsigned char VAR_20 = FUNC_0(VAR_16 - 1);
               VAR_2->func(VAR_2->context, &VAR_20, 1);
               for (VAR_12 = 0; VAR_12 < VAR_16; ++VAR_12) {
                  FUNC_3(VAR_2, -1, VAR_5, VAR_7, 0, VAR_17 + VAR_12 * VAR_5);
               }
            } else {
               unsigned char VAR_21 = FUNC_0(VAR_16 - 129);
               VAR_2->func(VAR_2->context, &VAR_21, 1);
               FUNC_3(VAR_2, -1, VAR_5, VAR_7, 0, VAR_17);
            }
         }
      }
   }
   return 1;
}
