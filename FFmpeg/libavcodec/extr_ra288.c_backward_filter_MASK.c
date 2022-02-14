
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* fdsp; } ;
struct TYPE_5__ {int (* vector_fmul ) (float*,float*,float const*,int ) ;} ;
typedef TYPE_2__ RA288Context ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (float*,int,float*,int ,int,int) ;
 int FUNC_2 (TYPE_2__*,int,int,int,float*,float*,float*,float const*) ;
 int FUNC_3 (float*,float*,int) ;
 int FUNC_4 (float*,float*,float const*,int ) ;

__attribute__((used)) static void FUNC_5(RA288Context *VAR_1,
                            float *VAR_2, float *VAR_3, const float *VAR_4,
                            float *VAR_5, const float *VAR_6,
                            int VAR_7, int VAR_8, int VAR_9, int VAR_10)
{
    float VAR_11[VAR_0+1];

    FUNC_2(VAR_1, VAR_7, VAR_8, VAR_9, VAR_11, VAR_2, VAR_3, VAR_4);

    if (!FUNC_1(VAR_11, VAR_7, VAR_5, 0, 1, 1))
        VAR_1->fdsp->vector_fmul(VAR_5, VAR_5, VAR_6, FUNC_0(VAR_7, 16));

    FUNC_3(VAR_2, VAR_2 + VAR_8, VAR_10*sizeof(*VAR_2));
}
