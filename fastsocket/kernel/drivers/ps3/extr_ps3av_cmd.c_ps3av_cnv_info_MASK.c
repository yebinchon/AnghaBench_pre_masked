
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps3av_pkt_audio_mode {int audio_downmix_level; int audio_downmix; int audio_layout; scalar_t__ audio_num_of_ch; } ;
struct TYPE_5__ {int lsv; int dm; } ;
struct TYPE_4__ {scalar_t__ ss; scalar_t__ sf; } ;
struct TYPE_6__ {scalar_t__ ct; scalar_t__ cc; } ;
struct ps3av_audio_info_frame {TYPE_2__ pb5; int pb4; scalar_t__ pb3; TYPE_1__ pb2; TYPE_3__ pb1; } ;



__attribute__((used)) static void FUNC_0(struct ps3av_audio_info_frame *VAR_0,
      const struct ps3av_pkt_audio_mode *VAR_1)
{
 VAR_0->pb1.cc = VAR_1->audio_num_of_ch + 1;
 VAR_0->pb1.ct = 0;
 VAR_0->pb2.sf = 0;
 VAR_0->pb2.ss = 0;

 VAR_0->pb3 = 0;
 VAR_0->pb4 = VAR_1->audio_layout;
 VAR_0->pb5.dm = VAR_1->audio_downmix;
 VAR_0->pb5.lsv = VAR_1->audio_downmix_level;
}
