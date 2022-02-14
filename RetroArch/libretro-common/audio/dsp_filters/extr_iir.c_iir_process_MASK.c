
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {float xn1; float xn2; float yn1; float yn2; } ;
struct TYPE_3__ {float xn1; float xn2; float yn1; float yn2; } ;
struct iir_data {float b0; float b1; float b2; float a0; float a1; float a2; TYPE_2__ r; TYPE_1__ l; } ;
struct dspfilter_output {float* samples; unsigned int frames; } ;
struct dspfilter_input {float* samples; unsigned int frames; } ;



__attribute__((used)) static void FUNC_0(void *VAR_0, struct dspfilter_output *VAR_1,
      const struct dspfilter_input *VAR_2)
{
   unsigned VAR_3;
   struct iir_data *VAR_4 = (struct iir_data*)VAR_0;
   float *VAR_5 = VAR_1->samples;

   float VAR_6 = VAR_4->b0;
   float VAR_7 = VAR_4->b1;
   float VAR_8 = VAR_4->b2;
   float VAR_9 = VAR_4->a0;
   float VAR_10 = VAR_4->a1;
   float VAR_11 = VAR_4->a2;

   float VAR_12 = VAR_4->l.xn1;
   float VAR_13 = VAR_4->l.xn2;
   float VAR_14 = VAR_4->l.yn1;
   float VAR_15 = VAR_4->l.yn2;

   float VAR_16 = VAR_4->r.xn1;
   float VAR_17 = VAR_4->r.xn2;
   float VAR_18 = VAR_4->r.yn1;
   float VAR_19 = VAR_4->r.yn2;

   VAR_1->samples = VAR_2->samples;
   VAR_1->frames = VAR_2->frames;

   for (VAR_3 = 0; VAR_3 < VAR_2->frames; VAR_3++, VAR_5 += 2)
   {
      float VAR_20 = VAR_5[0];
      float VAR_21 = VAR_5[1];

      float VAR_22 = (VAR_6 * VAR_20 + VAR_7 * VAR_12 + VAR_8 * VAR_13 - VAR_10 * VAR_14 - VAR_11 * VAR_15) / VAR_9;
      float VAR_23 = (VAR_6 * VAR_21 + VAR_7 * VAR_16 + VAR_8 * VAR_17 - VAR_10 * VAR_18 - VAR_11 * VAR_19) / VAR_9;

      VAR_13 = VAR_12;
      VAR_12 = VAR_20;
      VAR_15 = VAR_14;
      VAR_14 = VAR_22;

      VAR_17 = VAR_16;
      VAR_16 = VAR_21;
      VAR_19 = VAR_18;
      VAR_18 = VAR_23;

      VAR_5[0] = VAR_22;
      VAR_5[1] = VAR_23;
   }

   VAR_4->l.xn1 = VAR_12;
   VAR_4->l.xn2 = VAR_13;
   VAR_4->l.yn1 = VAR_14;
   VAR_4->l.yn2 = VAR_15;

   VAR_4->r.xn1 = VAR_16;
   VAR_4->r.xn2 = VAR_17;
   VAR_4->r.yn1 = VAR_18;
   VAR_4->r.yn2 = VAR_19;
}
