
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int member_0; } ;
typedef TYPE_1__ stbtt__hheap ;
struct TYPE_15__ {float y0; } ;
typedef TYPE_2__ stbtt__edge ;
struct TYPE_16__ {int w; int h; unsigned char* pixels; int stride; } ;
typedef TYPE_3__ stbtt__bitmap ;
struct TYPE_17__ {float ey; struct TYPE_17__* next; scalar_t__ fdx; int fx; scalar_t__ direction; } ;
typedef TYPE_4__ stbtt__active_edge ;
typedef int scanline ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (float) ;
 int FUNC_2 (float*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (float*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (float*,float*,int,TYPE_4__*,float) ;
 int FUNC_7 (TYPE_1__*,void*) ;
 int FUNC_8 (TYPE_1__*,TYPE_4__*) ;
 TYPE_4__* FUNC_9 (TYPE_1__*,TYPE_2__*,int,float,void*) ;

__attribute__((used)) static void FUNC_10(stbtt__bitmap *VAR_0, stbtt__edge *VAR_1,
      int VAR_2, int VAR_3, int VAR_4, int VAR_5, void *VAR_6)
{
   stbtt__hheap VAR_7 = { 0 };
   stbtt__active_edge *VAR_8 = ((void*)0);
   int VAR_9,VAR_10=0, VAR_11;
   float VAR_12[129], *VAR_13, *VAR_14;

   if (VAR_0->w > 64)
      VAR_13 = (float *)FUNC_3((VAR_0->w*2+1) * sizeof(float));
   else
      VAR_13 = VAR_12;

   VAR_14 = VAR_13 + VAR_0->w;

   VAR_9 = VAR_5;
   VAR_1[VAR_2].y0 = (float) (VAR_5 + VAR_0->h) + 1;

   while (VAR_10 < VAR_0->h)
   {
      float VAR_15 = VAR_9 + 0.0f;
      float VAR_16 = VAR_9 + 1.0f;
      stbtt__active_edge **VAR_17 = &VAR_8;



      FUNC_4(VAR_13 , 0, VAR_0->w*sizeof(VAR_13[0]));
      FUNC_4(VAR_14, 0, (VAR_0->w+1)*sizeof(VAR_13[0]));




      while (*VAR_17) {
         stbtt__active_edge * VAR_18 = *VAR_17;
         if (VAR_18->ey <= VAR_15) {
            *VAR_17 = VAR_18->next;
            FUNC_5(VAR_18->direction);
            VAR_18->direction = 0;
            FUNC_8(&VAR_7, VAR_18);
         } else {
            VAR_17 = &((*VAR_17)->next);
         }
      }


      while (VAR_1->y0 <= VAR_16)
      {
         stbtt__active_edge *VAR_19 = FUNC_9(&VAR_7, VAR_1, VAR_4, VAR_15, VAR_6);
         FUNC_0(VAR_19->ey >= VAR_15);


         VAR_19->next = VAR_8;
         VAR_8 = VAR_19;
         ++VAR_1;
      }


      if (VAR_8)
         FUNC_6(VAR_13, VAR_14+1, VAR_0->w, VAR_8, VAR_15);

      {
         float VAR_20 = 0;
         for (VAR_11=0; VAR_11 < VAR_0->w; ++VAR_11)
         {
            float VAR_21;
            int VAR_22;
            VAR_20 += VAR_14[VAR_11];
            VAR_21 = VAR_13[VAR_11] + VAR_20;
            VAR_21 = (float) FUNC_1(VAR_21)*255 + 0.5f;
            VAR_22 = (int) VAR_21;
            if (VAR_22 > 255) VAR_22 = 255;
            VAR_0->pixels[VAR_10*VAR_0->stride + VAR_11] = (unsigned char) VAR_22;
         }
      }



      VAR_17 = &VAR_8;

      while (*VAR_17)
      {
         stbtt__active_edge *VAR_23 = *VAR_17;
         VAR_23->fx += VAR_23->fdx;
         VAR_17 = &((*VAR_17)->next);
      }

      ++VAR_9;
      ++VAR_10;
   }

   FUNC_7(&VAR_7, VAR_6);

   if (VAR_13 != VAR_12)
      FUNC_2(VAR_13);
}
