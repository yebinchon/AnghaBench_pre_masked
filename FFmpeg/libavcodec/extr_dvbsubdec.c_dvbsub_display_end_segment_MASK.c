
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
struct TYPE_6__ {scalar_t__ compute_edt; } ;
typedef TYPE_1__ DVBSubContext ;
typedef int AVSubtitle ;
typedef TYPE_2__ AVCodecContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,int *,int*) ;

__attribute__((used)) static int FUNC_2(AVCodecContext *VAR_0, const uint8_t *VAR_1,
                                      int VAR_2, AVSubtitle *VAR_3,int *VAR_4)
{
    DVBSubContext *VAR_5 = VAR_0->priv_data;

    if(VAR_5->compute_edt == 0)
        FUNC_1(VAR_0, VAR_3, VAR_4);



    return 0;
}
