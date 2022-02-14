
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pvq; } ;
struct TYPE_7__ {int lambda; } ;
typedef int OpusRangeCoder ;
typedef TYPE_1__ OpusPsyContext ;
typedef TYPE_2__ CeltFrame ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int *,int) ;
 int FUNC_1 (int *) ;
 float FUNC_2 (int ,TYPE_2__*,int *,int,float*,int ) ;

__attribute__((used)) static int FUNC_3(OpusPsyContext *VAR_1, CeltFrame *VAR_2, float *VAR_3)
{
    int VAR_4, VAR_5 = 0.0f;
    OpusRangeCoder VAR_6;

    FUNC_1(&VAR_6);
    FUNC_0(VAR_2, &VAR_6, 1);

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        float VAR_7 = 0.0f;
        float VAR_8 = FUNC_2(VAR_2->pvq, VAR_2, &VAR_6, VAR_4, &VAR_7, VAR_1->lambda);
        VAR_5 += VAR_8;
    }

    *VAR_3 = VAR_5;

    return 0;
}
