
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int bits_per_raw_sample; int sample_fmt; } ;
typedef TYPE_1__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int ,char*,int) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_5)
{
    switch (VAR_5->bits_per_raw_sample) {
    case 8:
        VAR_5->sample_fmt = VAR_4;
        break;
    case 16:
        VAR_5->sample_fmt = VAR_2;
        break;
    case 24:
        VAR_5->sample_fmt = VAR_3;
        break;
    default:
        FUNC_0(VAR_5, VAR_1, "invalid/unsupported bits per sample: %d\n",
               VAR_5->bits_per_raw_sample);
        return VAR_0;
    }

    return 0;
}
