
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef float* vec3_t ;
typedef int ** stub_matrix4x4 ;
typedef int math_matrix_4x4 ;
struct TYPE_6__ {int elems; int vao; int prog; } ;
struct TYPE_5__ {int tex; } ;
struct TYPE_7__ {float block_size; scalar_t__ ms_fbo; TYPE_2__ block; TYPE_1__ blur; int output_ptr; } ;
typedef TYPE_3__ fft_t ;
typedef scalar_t__ GLuint ;
typedef int GLenum ;


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
 int FUNC_1 (int ,int,int) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int,unsigned int,int ,int ,unsigned int,unsigned int,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (float,float,float,float) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,int,int const*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int ,float,float,float,float) ;
 int FUNC_14 (int ,int,int ,int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,unsigned int,unsigned int) ;
 int FUNC_17 (int ,float*,float*,float*) ;
 int FUNC_18 (int ,int ,int ) ;
 int FUNC_19 (int ,float,float,float,float) ;
 int FUNC_20 (float*,float*) ;

void FUNC_21(fft_t *VAR_13, GLuint VAR_14, unsigned VAR_15, unsigned VAR_16)
{
   vec3_t VAR_17, VAR_18, VAR_19;
   stub_matrix4x4 VAR_20;
   math_matrix_4x4 VAR_21, VAR_22, VAR_23;

   VAR_17[0] = 0.0f;
   VAR_17[1] = 80.0f;
   VAR_17[2] = -60.0f;

   VAR_19[0] = 0.0f;
   VAR_19[1] = 1.0f;
   VAR_19[2] = 0.0f;

   VAR_18[0] = 0.0f;
   VAR_18[1] = 0.0f;
   VAR_18[2] = 1.0f;

   FUNC_20(VAR_18, VAR_17);

   FUNC_19(VAR_23, (float)VAR_11, (float)VAR_15 / VAR_16, 1.0f, 500.0f);
   FUNC_17(VAR_21, VAR_17, VAR_18, VAR_19);
   FUNC_18(VAR_22, VAR_21, VAR_23);


   FUNC_2(VAR_4, VAR_13->ms_fbo ? VAR_13->ms_fbo : VAR_14);
   FUNC_16(0, 0, VAR_15, VAR_16);
   FUNC_7(0.1f, 0.15f, 0.1f, 1.0f);
   FUNC_6(VAR_0 | VAR_1 | VAR_7);

   FUNC_15(VAR_13->block.prog);

   VAR_20[0][0] = FUNC_1(VAR_22, 0, 0);
   VAR_20[0][1] = FUNC_1(VAR_22, 0, 1);
   VAR_20[0][2] = FUNC_1(VAR_22, 0, 2);
   VAR_20[0][3] = FUNC_1(VAR_22, 0, 3);
   VAR_20[1][0] = FUNC_1(VAR_22, 1, 0);
   VAR_20[1][1] = FUNC_1(VAR_22, 1, 1);
   VAR_20[1][2] = FUNC_1(VAR_22, 1, 2);
   VAR_20[1][3] = FUNC_1(VAR_22, 1, 3);
   VAR_20[2][0] = FUNC_1(VAR_22, 2, 0);
   VAR_20[2][1] = FUNC_1(VAR_22, 2, 1);
   VAR_20[2][2] = FUNC_1(VAR_22, 2, 2);
   VAR_20[2][3] = FUNC_1(VAR_22, 2, 3);
   VAR_20[3][0] = FUNC_1(VAR_22, 3, 0);
   VAR_20[3][1] = FUNC_1(VAR_22, 3, 1);
   VAR_20[3][2] = FUNC_1(VAR_22, 3, 2);
   VAR_20[3][3] = FUNC_1(VAR_22, 3, 3);

   FUNC_14(FUNC_9(VAR_13->block.prog, "uMVP"),
         1, VAR_3, (&VAR_20[0][0]));

   FUNC_12(FUNC_9(VAR_13->block.prog, "uOffset"),
         ((-(int)(VAR_13->block_size)) + 1) / 2, VAR_13->output_ptr);
   FUNC_13(FUNC_9(VAR_13->block.prog, "uHeightmapParams"),
         -(VAR_13->block_size - 1.0f) / 2.0f, 0.0f, 3.0f, 2.0f);
   FUNC_11(FUNC_9(VAR_13->block.prog, "uAngleScale"),
         VAR_12 / ((VAR_13->block_size - 1) / 2));

   FUNC_4(VAR_13->block.vao);
   FUNC_3(VAR_8, VAR_13->blur.tex);
   FUNC_8(VAR_9, VAR_13->block.elems, VAR_10, ((void*)0));
   FUNC_4(0);
   FUNC_15(0);

   if (VAR_13->ms_fbo)
   {
      static const GLenum VAR_24[] = { 129, 128 };

      FUNC_2(VAR_6, VAR_13->ms_fbo);
      FUNC_2(VAR_2, VAR_14);
      FUNC_5(0, 0, VAR_15, VAR_16, 0, 0, VAR_15, VAR_16,
            VAR_0, VAR_5);

      FUNC_2(VAR_4, VAR_13->ms_fbo);
      FUNC_10(VAR_4, 2, VAR_24);
      FUNC_0();
   }

   FUNC_2(VAR_4, 0);
   FUNC_0();
}
