
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bps; int channels; int samplerate; int max_framesize; int max_blocksize; } ;
typedef TYPE_1__ FLACStreaminfo ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,int ) ;

__attribute__((used)) static void FUNC_1(AVCodecContext *VAR_1, FLACStreaminfo *VAR_2)
{
    FUNC_0(VAR_1, VAR_0, "  Max Blocksize: %d\n", VAR_2->max_blocksize);
    FUNC_0(VAR_1, VAR_0, "  Max Framesize: %d\n", VAR_2->max_framesize);
    FUNC_0(VAR_1, VAR_0, "  Samplerate: %d\n", VAR_2->samplerate);
    FUNC_0(VAR_1, VAR_0, "  Channels: %d\n", VAR_2->channels);
    FUNC_0(VAR_1, VAR_0, "  Bits: %d\n", VAR_2->bps);
}
