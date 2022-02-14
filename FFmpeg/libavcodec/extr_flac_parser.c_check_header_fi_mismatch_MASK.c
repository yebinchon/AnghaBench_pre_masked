
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ samplerate; scalar_t__ bps; scalar_t__ is_var_size; scalar_t__ channels; } ;
struct TYPE_6__ {int avctx; } ;
typedef TYPE_1__ FLACParseContext ;
typedef TYPE_2__ FLACFrameInfo ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,char*) ;

__attribute__((used)) static int FUNC_1(FLACParseContext *VAR_3,
                                    FLACFrameInfo *VAR_4,
                                    FLACFrameInfo *VAR_5,
                                    int VAR_6)
{
    int VAR_7 = 0;
    if (VAR_5->samplerate != VAR_4->samplerate) {
        VAR_7 += VAR_2;
        FUNC_0(VAR_3->avctx, VAR_0 + VAR_6,
               "sample rate change detected in adjacent frames\n");
    }
    if (VAR_5->bps != VAR_4->bps) {
        VAR_7 += VAR_2;
        FUNC_0(VAR_3->avctx, VAR_0 + VAR_6,
               "bits per sample change detected in adjacent frames\n");
    }
    if (VAR_5->is_var_size != VAR_4->is_var_size) {

        VAR_7 += VAR_1;
        FUNC_0(VAR_3->avctx, VAR_0 + VAR_6,
               "blocking strategy change detected in adjacent frames\n");
    }
    if (VAR_5->channels != VAR_4->channels) {
        VAR_7 += VAR_2;
        FUNC_0(VAR_3->avctx, VAR_0 + VAR_6,
               "number of channels change detected in adjacent frames\n");
    }
    return VAR_7;
}
