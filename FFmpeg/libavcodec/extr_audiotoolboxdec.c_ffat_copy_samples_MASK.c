
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sample_fmt; int * priv_data; } ;
typedef int AVFrame ;
typedef TYPE_1__ AVCodecContext ;
typedef int ATDecodeContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_3, AVFrame *VAR_4)
{
    ATDecodeContext *VAR_5 = VAR_3->priv_data;
    if (VAR_3->sample_fmt == VAR_0) {
        FUNC_0(VAR_2);
    } else {
        FUNC_0(VAR_1);
    }
}
