
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int stbi_uc ;
struct TYPE_10__ {int hs; int vs; int ystep; int w_lores; scalar_t__ ypos; int* (* resample ) (int*,int ,int ,int,int) ;int line1; int line0; } ;
typedef TYPE_3__ stbi__resample ;
struct TYPE_11__ {int rgb; scalar_t__ app14_color_transform; int img_h_max; int img_v_max; int* (* resample_row_hv_2_kernel ) (int*,int ,int ,int,int) ;TYPE_2__* s; int (* YCbCr_to_RGB_kernel ) (int*,int*,int*,int*,unsigned int,int) ;TYPE_1__* img_comp; int jfif; } ;
typedef TYPE_4__ stbi__jpeg ;
struct TYPE_9__ {int img_n; int img_x; unsigned int img_y; } ;
struct TYPE_8__ {int* linebuf; int h; int v; scalar_t__ y; scalar_t__ w2; int data; } ;


 int* FUNC_0 (int*,int ,int ,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_4__*) ;
 void* FUNC_3 (int,int,int) ;
 int FUNC_4 (TYPE_4__*) ;
 int* FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int,int,unsigned int,int) ;
 int* FUNC_8 (int*,int ,int ,int,int) ;
 int* FUNC_9 (int*,int ,int ,int,int) ;
 int* FUNC_10 (int*,int ,int ,int,int) ;
 int* FUNC_11 (int*,int ,int ,int,int) ;
 int FUNC_12 (int*,int*,int*,int*,unsigned int,int) ;
 int FUNC_13 (int*,int*,int*,int*,unsigned int,int) ;
 int FUNC_14 (int*,int*,int*,int*,unsigned int,int) ;

__attribute__((used)) static stbi_uc *FUNC_15(stbi__jpeg *VAR_0, int *VAR_1, int *VAR_2, int *VAR_3, int VAR_4)
{
   int VAR_5, VAR_6, VAR_7;
   VAR_0->s->img_n = 0;


   if (VAR_4 < 0 || VAR_4 > 4) return FUNC_5("bad req_comp", "Internal error");


   if (!FUNC_4(VAR_0)) { FUNC_2(VAR_0); return ((void*)0); }


   VAR_5 = VAR_4 ? VAR_4 : VAR_0->s->img_n >= 3 ? 3 : 1;

   VAR_7 = VAR_0->s->img_n == 3 && (VAR_0->rgb == 3 || (VAR_0->app14_color_transform == 0 && !VAR_0->jfif));

   if (VAR_0->s->img_n == 3 && VAR_5 < 3 && !VAR_7)
      VAR_6 = 1;
   else
      VAR_6 = VAR_0->s->img_n;


   {
      int VAR_8;
      unsigned int VAR_9,VAR_10;
      stbi_uc *VAR_11;
      stbi_uc *VAR_12[4];

      stbi__resample VAR_13[4];

      for (VAR_8=0; VAR_8 < VAR_6; ++VAR_8) {
         stbi__resample *VAR_14 = &VAR_13[VAR_8];



         VAR_0->img_comp[VAR_8].linebuf = (stbi_uc *) FUNC_6(VAR_0->s->img_x + 3);
         if (!VAR_0->img_comp[VAR_8].linebuf) { FUNC_2(VAR_0); return FUNC_5("outofmem", "Out of memory"); }

         VAR_14->hs = VAR_0->img_h_max / VAR_0->img_comp[VAR_8].h;
         VAR_14->vs = VAR_0->img_v_max / VAR_0->img_comp[VAR_8].v;
         VAR_14->ystep = VAR_14->vs >> 1;
         VAR_14->w_lores = (VAR_0->s->img_x + VAR_14->hs-1) / VAR_14->hs;
         VAR_14->ypos = 0;
         VAR_14->line0 = VAR_14->line1 = VAR_0->img_comp[VAR_8].data;

         if (VAR_14->hs == 1 && VAR_14->vs == 1) VAR_14->resample = FUNC_0;
         else if (VAR_14->hs == 1 && VAR_14->vs == 2) VAR_14->resample = FUNC_10;
         else if (VAR_14->hs == 2 && VAR_14->vs == 1) VAR_14->resample = FUNC_9;
         else if (VAR_14->hs == 2 && VAR_14->vs == 2) VAR_14->resample = VAR_0->resample_row_hv_2_kernel;
         else VAR_14->resample = FUNC_8;
      }


      VAR_11 = (stbi_uc *) FUNC_7(VAR_5, VAR_0->s->img_x, VAR_0->s->img_y, 1);
      if (!VAR_11) { FUNC_2(VAR_0); return FUNC_5("outofmem", "Out of memory"); }


      for (VAR_10=0; VAR_10 < VAR_0->s->img_y; ++VAR_10) {
         stbi_uc *VAR_15 = VAR_11 + VAR_5 * VAR_0->s->img_x * VAR_10;
         for (VAR_8=0; VAR_8 < VAR_6; ++VAR_8) {
            stbi__resample *VAR_16 = &VAR_13[VAR_8];
            int VAR_17 = VAR_16->ystep >= (VAR_16->vs >> 1);
            VAR_12[VAR_8] = VAR_16->resample(VAR_0->img_comp[VAR_8].linebuf,
                                     VAR_17 ? VAR_16->line1 : VAR_16->line0,
                                     VAR_17 ? VAR_16->line0 : VAR_16->line1,
                                     VAR_16->w_lores, VAR_16->hs);
            if (++VAR_16->ystep >= VAR_16->vs) {
               VAR_16->ystep = 0;
               VAR_16->line0 = VAR_16->line1;
               if (++VAR_16->ypos < VAR_0->img_comp[VAR_8].y)
                  VAR_16->line1 += VAR_0->img_comp[VAR_8].w2;
            }
         }
         if (VAR_5 >= 3) {
            stbi_uc *VAR_18 = VAR_12[0];
            if (VAR_0->s->img_n == 3) {
               if (VAR_7) {
                  for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) {
                     VAR_15[0] = VAR_18[VAR_9];
                     VAR_15[1] = VAR_12[1][VAR_9];
                     VAR_15[2] = VAR_12[2][VAR_9];
                     VAR_15[3] = 255;
                     VAR_15 += VAR_5;
                  }
               } else {
                  VAR_0->YCbCr_to_RGB_kernel(VAR_15, VAR_18, VAR_12[1], VAR_12[2], VAR_0->s->img_x, VAR_5);
               }
            } else if (VAR_0->s->img_n == 4) {
               if (VAR_0->app14_color_transform == 0) {
                  for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) {
                     stbi_uc VAR_19 = VAR_12[3][VAR_9];
                     VAR_15[0] = FUNC_1(VAR_12[0][VAR_9], VAR_19);
                     VAR_15[1] = FUNC_1(VAR_12[1][VAR_9], VAR_19);
                     VAR_15[2] = FUNC_1(VAR_12[2][VAR_9], VAR_19);
                     VAR_15[3] = 255;
                     VAR_15 += VAR_5;
                  }
               } else if (VAR_0->app14_color_transform == 2) {
                  VAR_0->YCbCr_to_RGB_kernel(VAR_15, VAR_18, VAR_12[1], VAR_12[2], VAR_0->s->img_x, VAR_5);
                  for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) {
                     stbi_uc VAR_20 = VAR_12[3][VAR_9];
                     VAR_15[0] = FUNC_1(255 - VAR_15[0], VAR_20);
                     VAR_15[1] = FUNC_1(255 - VAR_15[1], VAR_20);
                     VAR_15[2] = FUNC_1(255 - VAR_15[2], VAR_20);
                     VAR_15 += VAR_5;
                  }
               } else {
                  VAR_0->YCbCr_to_RGB_kernel(VAR_15, VAR_18, VAR_12[1], VAR_12[2], VAR_0->s->img_x, VAR_5);
               }
            } else
               for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) {
                  VAR_15[0] = VAR_15[1] = VAR_15[2] = VAR_18[VAR_9];
                  VAR_15[3] = 255;
                  VAR_15 += VAR_5;
               }
         } else {
            if (VAR_7) {
               if (VAR_5 == 1)
                  for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9)
                     *VAR_15++ = FUNC_3(VAR_12[0][VAR_9], VAR_12[1][VAR_9], VAR_12[2][VAR_9]);
               else {
                  for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9, VAR_15 += 2) {
                     VAR_15[0] = FUNC_3(VAR_12[0][VAR_9], VAR_12[1][VAR_9], VAR_12[2][VAR_9]);
                     VAR_15[1] = 255;
                  }
               }
            } else if (VAR_0->s->img_n == 4 && VAR_0->app14_color_transform == 0) {
               for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) {
                  stbi_uc VAR_21 = VAR_12[3][VAR_9];
                  stbi_uc VAR_22 = FUNC_1(VAR_12[0][VAR_9], VAR_21);
                  stbi_uc VAR_23 = FUNC_1(VAR_12[1][VAR_9], VAR_21);
                  stbi_uc VAR_24 = FUNC_1(VAR_12[2][VAR_9], VAR_21);
                  VAR_15[0] = FUNC_3(VAR_22, VAR_23, VAR_24);
                  VAR_15[1] = 255;
                  VAR_15 += VAR_5;
               }
            } else if (VAR_0->s->img_n == 4 && VAR_0->app14_color_transform == 2) {
               for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) {
                  VAR_15[0] = FUNC_1(255 - VAR_12[0][VAR_9], VAR_12[3][VAR_9]);
                  VAR_15[1] = 255;
                  VAR_15 += VAR_5;
               }
            } else {
               stbi_uc *VAR_25 = VAR_12[0];
               if (VAR_5 == 1)
                  for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) VAR_15[VAR_9] = VAR_25[VAR_9];
               else
                  for (VAR_9=0; VAR_9 < VAR_0->s->img_x; ++VAR_9) *VAR_15++ = VAR_25[VAR_9], *VAR_15++ = 255;
            }
         }
      }
      FUNC_2(VAR_0);
      *VAR_1 = VAR_0->s->img_x;
      *VAR_2 = VAR_0->s->img_y;
      if (VAR_3) *VAR_3 = VAR_0->s->img_n >= 3 ? 3 : 1;
      return VAR_11;
   }
}
