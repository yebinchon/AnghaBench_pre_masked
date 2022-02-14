
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int stbi_uc ;
typedef int stbi__uint32 ;
struct TYPE_6__ {int * out; TYPE_1__* s; } ;
typedef TYPE_2__ stbi__png ;
struct TYPE_5__ {int img_x; int img_y; int img_n; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *,int,int,int,int,int,int) ;
 scalar_t__ FUNC_3 (int,int,int,int ) ;

__attribute__((used)) static int FUNC_4(stbi__png *VAR_0, stbi_uc *VAR_1, stbi__uint32 VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
   int VAR_7 = (VAR_4 == 16 ? 2 : 1);
   int VAR_8 = VAR_3 * VAR_7;
   stbi_uc *VAR_9;
   int VAR_10;
   if (!VAR_6)
      return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_0->s->img_x, VAR_0->s->img_y, VAR_4, VAR_5);


   VAR_9 = (stbi_uc *) FUNC_3(VAR_0->s->img_x, VAR_0->s->img_y, VAR_8, 0);
   for (VAR_10=0; VAR_10 < 7; ++VAR_10) {
      int VAR_11[] = { 0,4,0,2,0,1,0 };
      int VAR_12[] = { 0,0,4,0,2,0,1 };
      int VAR_13[] = { 8,8,4,4,2,2,1 };
      int VAR_14[] = { 8,8,8,4,4,2,2 };
      int VAR_15,VAR_16,VAR_17,VAR_18;

      VAR_17 = (VAR_0->s->img_x - VAR_11[VAR_10] + VAR_13[VAR_10]-1) / VAR_13[VAR_10];
      VAR_18 = (VAR_0->s->img_y - VAR_12[VAR_10] + VAR_14[VAR_10]-1) / VAR_14[VAR_10];
      if (VAR_17 && VAR_18) {
         stbi__uint32 VAR_19 = ((((VAR_0->s->img_n * VAR_17 * VAR_4) + 7) >> 3) + 1) * VAR_18;
         if (!FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_17, VAR_18, VAR_4, VAR_5)) {
            FUNC_0(VAR_9);
            return 0;
         }
         for (VAR_16=0; VAR_16 < VAR_18; ++VAR_16) {
            for (VAR_15=0; VAR_15 < VAR_17; ++VAR_15) {
               int VAR_20 = VAR_16*VAR_14[VAR_10]+VAR_12[VAR_10];
               int VAR_21 = VAR_15*VAR_13[VAR_10]+VAR_11[VAR_10];
               FUNC_1(VAR_9 + VAR_20*VAR_0->s->img_x*VAR_8 + VAR_21*VAR_8,
                      VAR_0->out + (VAR_16*VAR_17+VAR_15)*VAR_8, VAR_8);
            }
         }
         FUNC_0(VAR_0->out);
         VAR_1 += VAR_19;
         VAR_2 -= VAR_19;
      }
   }
   VAR_0->out = VAR_9;

   return 1;
}
