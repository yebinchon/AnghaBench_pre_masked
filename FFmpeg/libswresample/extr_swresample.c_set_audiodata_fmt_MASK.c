
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef enum AVSampleFormat { ____Placeholder_AVSampleFormat } AVSampleFormat ;
struct TYPE_3__ {int fmt; int planar; int ch_count; int bps; } ;
typedef TYPE_1__ AudioData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(AudioData *VAR_0, enum AVSampleFormat VAR_1){
    VAR_0->fmt = VAR_1;
    VAR_0->bps = FUNC_0(VAR_1);
    VAR_0->planar= FUNC_1(VAR_1);
    if (VAR_0->ch_count == 1)
        VAR_0->planar = 1;
}
