
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int size; int depth; unsigned int steps; int pbo; TYPE_1__* passes; int blur; int resolve; int output; int input_tex; int window_tex; void* prog_blur; void* prog_resolve; void* prog_complex; void* prog_real; } ;
typedef TYPE_2__ fft_t ;
struct TYPE_8__ {int parameter_tex; int target; } ;
typedef int GLushort ;
typedef int GLuint ;
typedef int GLshort ;
typedef float GLfloat ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_2__*,int *,unsigned int,int) ;
 void* FUNC_4 (TYPE_2__*,int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_5 (TYPE_2__*,int *,int ,int,int,int,int ,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ,int,int,int,int ,int ) ;
 int VAR_18 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int,int ,int ) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (void*,char*) ;
 int FUNC_13 (int ,int ,int ,int ,unsigned int,int,int ,int ,int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (int ,int,float const*) ;
 int FUNC_16 (void*) ;
 double FUNC_17 (double,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;

__attribute__((used)) static void FUNC_20(fft_t *VAR_19)
{
   unsigned VAR_20;
   double VAR_21;
   GLushort *VAR_22 = ((void*)0);
   static const GLfloat VAR_23[] = { 0.0f, 0.0f, 1.0f, 1.0f };

   VAR_19->prog_real = FUNC_4(VAR_19, VAR_18, VAR_16);
   VAR_19->prog_complex = FUNC_4(VAR_19, VAR_18, VAR_15);
   VAR_19->prog_resolve = FUNC_4(VAR_19, VAR_18, VAR_17);
   VAR_19->prog_blur = FUNC_4(VAR_19, VAR_18, VAR_14);
   FUNC_0();

   FUNC_16(VAR_19->prog_real);
   FUNC_14(FUNC_12(VAR_19->prog_real, "sTexture"), 0);
   FUNC_14(FUNC_12(VAR_19->prog_real, "sParameterTexture"), 1);
   FUNC_14(FUNC_12(VAR_19->prog_real, "sWindow"), 2);
   FUNC_15(FUNC_12(VAR_19->prog_real, "uOffsetScale"), 1, VAR_23);

   FUNC_16(VAR_19->prog_complex);
   FUNC_14(FUNC_12(VAR_19->prog_complex, "sTexture"), 0);
   FUNC_14(FUNC_12(VAR_19->prog_complex, "sParameterTexture"), 1);
   FUNC_15(FUNC_12(VAR_19->prog_complex, "uOffsetScale"), 1, VAR_23);

   FUNC_16(VAR_19->prog_resolve);
   FUNC_14(FUNC_12(VAR_19->prog_resolve, "sFFT"), 0);
   FUNC_15(FUNC_12(VAR_19->prog_resolve, "uOffsetScale"), 1, VAR_23);

   FUNC_16(VAR_19->prog_blur);
   FUNC_14(FUNC_12(VAR_19->prog_blur, "sHeight"), 0);
   FUNC_15(FUNC_12(VAR_19->prog_blur, "uOffsetScale"), 1, VAR_23);

   FUNC_0();

   FUNC_6(VAR_19, &VAR_19->window_tex, VAR_4,
         VAR_19->size, 1, 1, VAR_2, VAR_2);
   FUNC_0();

   VAR_22 = (GLushort*)FUNC_2(VAR_19->size, sizeof(GLushort));

   VAR_21 = 1.0 / FUNC_17(0.0, VAR_13);

   for (VAR_20 = 0; VAR_20 < VAR_19->size; VAR_20++)
   {
      double VAR_24 = (double)(VAR_20 - (int)(VAR_19->size) / 2) / ((int)(VAR_19->size) / 2);
      double VAR_25 = FUNC_17(VAR_24, VAR_13);
      VAR_22[VAR_20] = FUNC_19(0xffff * VAR_25 * VAR_21);
   }
   FUNC_9(VAR_10, VAR_19->window_tex);
   FUNC_13(VAR_10, 0, 0, 0,
         VAR_19->size, 1, VAR_5, VAR_12, &VAR_22[0]);
   FUNC_9(VAR_10, 0);

   FUNC_0();
   FUNC_6(VAR_19, &VAR_19->input_tex, VAR_6,
         VAR_19->size, 1, 1, VAR_2, VAR_2);
   FUNC_5(VAR_19, &VAR_19->output, VAR_7,
         VAR_19->size, VAR_19->depth, 1, VAR_2, VAR_2);
   FUNC_5(VAR_19, &VAR_19->resolve, VAR_8,
         VAR_19->size, VAR_19->depth, 1, VAR_2, VAR_2);
   FUNC_5(VAR_19, &VAR_19->blur, VAR_8,
         VAR_19->size, VAR_19->depth,
         FUNC_18(FUNC_1(VAR_19->size, VAR_19->depth)) + 1,
         VAR_2, VAR_1);

   FUNC_0();

   for (VAR_20 = 0; VAR_20 < VAR_19->steps; VAR_20++)
   {
      GLuint *VAR_26 = ((void*)0);
      FUNC_5(VAR_19, &VAR_19->passes[VAR_20].target,
            VAR_7, VAR_19->size, 1, 1, VAR_2, VAR_2);
      FUNC_6(VAR_19, &VAR_19->passes[VAR_20].parameter_tex,
            VAR_7, VAR_19->size, 1, 1, VAR_2, VAR_2);

      VAR_26 = (GLuint*)FUNC_2(2 * VAR_19->size, sizeof(GLuint));

      FUNC_3(VAR_19, &VAR_26[0], VAR_20, VAR_19->size);

      FUNC_9(VAR_10, VAR_19->passes[VAR_20].parameter_tex);
      FUNC_13(VAR_10, 0, 0, 0,
            VAR_19->size, 1, VAR_9, VAR_11, &VAR_26[0]);
      FUNC_9(VAR_10, 0);

      FUNC_7(VAR_26);
   }

   FUNC_0();
   FUNC_11(1, &VAR_19->pbo);
   FUNC_8(VAR_3, VAR_19->pbo);
   FUNC_10(VAR_3,
         VAR_19->size * 2 * sizeof(GLshort), 0, VAR_0);
   FUNC_8(VAR_3, 0);

   FUNC_7(VAR_22);
}
