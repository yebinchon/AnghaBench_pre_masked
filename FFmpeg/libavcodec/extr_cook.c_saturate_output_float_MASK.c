
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* vector_clipf ) (float*,scalar_t__,int ,float,float) ;} ;
struct TYPE_5__ {scalar_t__ samples_per_channel; scalar_t__ mono_mdct_output; TYPE_1__ adsp; } ;
typedef TYPE_2__ COOKContext ;


 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (float*,scalar_t__,int ,float,float) ;

__attribute__((used)) static void FUNC_2(COOKContext *VAR_0, float *VAR_1)
{
    VAR_0->adsp.vector_clipf(VAR_1, VAR_0->mono_mdct_output + VAR_0->samples_per_channel,
                         FUNC_0(VAR_0->samples_per_channel, 8), -1.0f, 1.0f);
}
