
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s16NumOfBlocks; int s16NumOfSubBands; int s16BitPool; int s16NumOfChannels; int s16SamplingFreq; int s16ChannelMode; int s16AllocationMethod; int sbc_mode; } ;
struct TYPE_3__ {int decode_first_pkt; int encode_first_pkt; int is_bad_frame; TYPE_2__ encoder; scalar_t__ sequence_number; } ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static void FUNC_1(void)
{
    VAR_4.sequence_number = 0;
    VAR_4.decode_first_pkt = 1;
    VAR_4.encode_first_pkt = 1;
    VAR_4.is_bad_frame = 0;

    VAR_4.encoder.sbc_mode = VAR_1;
    VAR_4.encoder.s16NumOfBlocks = 15;
    VAR_4.encoder.s16NumOfSubBands = 8;
    VAR_4.encoder.s16AllocationMethod = VAR_0;
    VAR_4.encoder.s16BitPool = 26;
    VAR_4.encoder.s16ChannelMode = VAR_2;
    VAR_4.encoder.s16NumOfChannels = 1;
    VAR_4.encoder.s16SamplingFreq = VAR_3;

    FUNC_0(&(VAR_4.encoder));
}
