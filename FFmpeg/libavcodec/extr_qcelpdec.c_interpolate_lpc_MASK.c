
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ bitrate; float const* prev_lspf; } ;
typedef TYPE_1__ QCELPContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (float*,float const*,float const*,float,double,int) ;
 int FUNC_1 (float const*,float*) ;

__attribute__((used)) static void FUNC_2(QCELPContext *VAR_4, const float *VAR_5,
                            float *VAR_6, const int VAR_7)
{
    float VAR_8[10];
    float VAR_9;

    if (VAR_4->bitrate >= VAR_2)
        VAR_9 = 0.25 * (VAR_7 + 1);
    else if (VAR_4->bitrate == VAR_1 && !VAR_7)
        VAR_9 = 0.625;
    else
        VAR_9 = 1.0;

    if (VAR_9 != 1.0) {
        FUNC_0(VAR_8, VAR_5, VAR_4->prev_lspf,
                                VAR_9, 1.0 - VAR_9, 10);
        FUNC_1(VAR_8, VAR_6);
    } else if (VAR_4->bitrate >= VAR_2 ||
               (VAR_4->bitrate == VAR_0 && !VAR_7))
        FUNC_1(VAR_5, VAR_6);
    else if (VAR_4->bitrate == VAR_3 && !VAR_7)
        FUNC_1(VAR_4->prev_lspf, VAR_6);
}
