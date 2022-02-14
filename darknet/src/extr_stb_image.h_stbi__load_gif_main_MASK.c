
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void stbi_uc ;
struct TYPE_4__ {int w; int h; int delay; int background; int history; int out; } ;
typedef TYPE_1__ stbi__gif ;
typedef int stbi__context ;
typedef int g ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,int) ;
 int FUNC_2 (void*,void*,int) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 void* FUNC_4 (void*,int,int,int,int) ;
 void* FUNC_5 (char*,char*) ;
 void* FUNC_6 (int *,TYPE_1__*,int*,int,void*) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static void *FUNC_9(stbi__context *VAR_0, int **VAR_1, int *VAR_2, int *VAR_3, int *VAR_4, int *VAR_5, int VAR_6)
{
   if (FUNC_7(VAR_0)) {
      int VAR_7 = 0;
      stbi_uc *VAR_8 = 0;
      stbi_uc *VAR_9 = 0;
      stbi_uc *VAR_10 = 0;
      stbi__gif VAR_11;
      int VAR_12;
      FUNC_3(&VAR_11, 0, sizeof(VAR_11));
      if (VAR_1) {
         *VAR_1 = 0;
      }

      do {
         VAR_8 = FUNC_6(VAR_0, &VAR_11, VAR_5, VAR_6, VAR_10);
         if (VAR_8 == (stbi_uc *) VAR_0) VAR_8 = 0;

         if (VAR_8) {
            *VAR_2 = VAR_11.w;
            *VAR_3 = VAR_11.h;
            ++VAR_7;
            VAR_12 = VAR_11.w * VAR_11.h * 4;

            if (VAR_9) {
               VAR_9 = (stbi_uc*) FUNC_1( VAR_9, VAR_7 * VAR_12 );
               if (VAR_1) {
                  *VAR_1 = (int*) FUNC_1( *VAR_1, sizeof(int) * VAR_7 );
               }
            } else {
               VAR_9 = (stbi_uc*)FUNC_8( VAR_7 * VAR_12 );
               if (VAR_1) {
                  *VAR_1 = (int*) FUNC_8( VAR_7 * sizeof(int) );
               }
            }
            FUNC_2( VAR_9 + ((VAR_7 - 1) * VAR_12), VAR_8, VAR_12 );
            if (VAR_7 >= 2) {
               VAR_10 = VAR_9 - 2 * VAR_12;
            }

            if (VAR_1) {
               (*VAR_1)[VAR_7 - 1U] = VAR_11.delay;
            }
         }
      } while (VAR_8 != 0);


      FUNC_0(VAR_11.out);
      FUNC_0(VAR_11.history);
      FUNC_0(VAR_11.background);


      if (VAR_6 && VAR_6 != 4)
         VAR_9 = FUNC_4(VAR_9, 4, VAR_6, VAR_7 * VAR_11.w, VAR_11.h);

      *VAR_4 = VAR_7;
      return VAR_9;
   } else {
      return FUNC_5("not GIF", "Image was not as a gif type.");
   }
}
