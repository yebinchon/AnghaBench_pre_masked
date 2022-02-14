
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {float xn1; float xn2; float yn1; float yn2; } ;
struct TYPE_3__ {float xn1; float xn2; float yn1; float yn2; } ;
struct wahwah_data {int skipcount; int lfoskip; float phase; float depth; double freqofs; double res; double b0; double b1; double b2; double a0; double a1; double a2; TYPE_2__ r; TYPE_1__ l; } ;
struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;


 float VAR_0 ;
 int VAR_1 ;
 double FUNC_0 (float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, struct dspfilter_output *VAR_3,
      const struct dspfilter_input *VAR_4)
{
   unsigned VAR_5;
   struct wahwah_data *VAR_6 = (struct wahwah_data*)VAR_2;
   float *VAR_7 = VAR_3->samples;

   VAR_3->samples = VAR_4->samples;
   VAR_3->frames = VAR_4->frames;

   for (VAR_5 = 0; VAR_5 < VAR_4->frames; VAR_5++, VAR_7 += 2)
   {
      float VAR_8, VAR_9;
      float VAR_10[2] = { VAR_7[0], VAR_7[1] };

      if ((VAR_6->skipcount++ % VAR_1) == 0)
      {
         float VAR_11, VAR_12, VAR_13, VAR_14;
         float VAR_15 = (1.0 + FUNC_0(VAR_6->skipcount * VAR_6->lfoskip + VAR_6->phase)) / 2.0;

         VAR_15 = VAR_15 * VAR_6->depth * (1.0 - VAR_6->freqofs) + VAR_6->freqofs;
         VAR_15 = FUNC_1((VAR_15 - 1.0) * 6.0);

         VAR_11 = VAR_0 * VAR_15;
         VAR_12 = FUNC_2(VAR_11);
         VAR_13 = FUNC_0(VAR_11);
         VAR_14 = VAR_12 / (2.0 * VAR_6->res);

         VAR_6->b0 = (1.0 - VAR_13) / 2.0;
         VAR_6->b1 = 1.0 - VAR_13;
         VAR_6->b2 = (1.0 - VAR_13) / 2.0;
         VAR_6->a0 = 1.0 + VAR_14;
         VAR_6->a1 = -2.0 * VAR_13;
         VAR_6->a2 = 1.0 - VAR_14;
      }

      VAR_8 = (VAR_6->b0 * VAR_10[0] + VAR_6->b1 * VAR_6->l.xn1 + VAR_6->b2 * VAR_6->l.xn2 - VAR_6->a1 * VAR_6->l.yn1 - VAR_6->a2 * VAR_6->l.yn2) / VAR_6->a0;
      VAR_9 = (VAR_6->b0 * VAR_10[1] + VAR_6->b1 * VAR_6->r.xn1 + VAR_6->b2 * VAR_6->r.xn2 - VAR_6->a1 * VAR_6->r.yn1 - VAR_6->a2 * VAR_6->r.yn2) / VAR_6->a0;

      VAR_6->l.xn2 = VAR_6->l.xn1;
      VAR_6->l.xn1 = VAR_10[0];
      VAR_6->l.yn2 = VAR_6->l.yn1;
      VAR_6->l.yn1 = VAR_8;

      VAR_6->r.xn2 = VAR_6->r.xn1;
      VAR_6->r.xn1 = VAR_10[1];
      VAR_6->r.yn2 = VAR_6->r.yn1;
      VAR_6->r.yn1 = VAR_9;

      VAR_7[0] = VAR_8;
      VAR_7[1] = VAR_9;
   }
}
