
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ coding_method; } ;
typedef TYPE_1__ Vp3Fragment ;
struct TYPE_6__ {int last_frame; int golden_frame; } ;
typedef TYPE_2__ Vp3DecodeContext ;
typedef int ThreadFrame ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int,int ) ;

__attribute__((used)) static void FUNC_3(Vp3DecodeContext *VAR_2, Vp3Fragment *VAR_3,
                                int VAR_4, int VAR_5)
{
    ThreadFrame *VAR_6;
    int VAR_7;
    int VAR_8 = VAR_4 & 1;

    if (VAR_3->coding_method == VAR_1 ||
        VAR_3->coding_method == VAR_0)
        VAR_6 = &VAR_2->golden_frame;
    else
        VAR_6 = &VAR_2->last_frame;

    VAR_7 = VAR_5 + (VAR_4 >> 1);
    VAR_7 = FUNC_1(FUNC_0(VAR_7), VAR_7 + 8 + VAR_8);

    FUNC_2(VAR_6, VAR_7, 0);
}
