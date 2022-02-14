
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ codec_id; TYPE_1__* priv_data; } ;
struct TYPE_4__ {int state; } ;
typedef TYPE_1__ LibGSMDecodeContext ;
typedef TYPE_2__ AVCodecContext ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_3(AVCodecContext *VAR_2) {
    LibGSMDecodeContext *VAR_3 = VAR_2->priv_data;
    int VAR_4 = 1;

    FUNC_1(VAR_3->state);
    VAR_3->state = FUNC_0();
    if (VAR_2->codec_id == VAR_0)
        FUNC_2(VAR_3->state, VAR_1, &VAR_4);
}
