
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ps3av_pkt_av_audio_param {int avport; int mclk; int swaplr; int inputctrl; int chstat; int info; int layout; int inputlen; int fifomap; int enable; int ns; int send_hdr; } ;
struct ps3av_pkt_audio_mode {int audio_cs_info; int audio_num_of_ch; int audio_word_bits; int audio_map; int audio_enable; int audio_source; int audio_fs; } ;


 int VAR_0 ;
 int FUNC_0 (struct ps3av_pkt_av_audio_param*,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct ps3av_pkt_audio_mode const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ,int,int *) ;

u32 FUNC_10(void *VAR_1, u32 VAR_2,
     const struct ps3av_pkt_audio_mode *VAR_3,
     u32 VAR_4)
{
 struct ps3av_pkt_av_audio_param *VAR_5;

 VAR_5 = (struct ps3av_pkt_av_audio_param *)VAR_1;

 FUNC_0(VAR_5, 0, sizeof(*VAR_5));
 FUNC_9(VAR_0, sizeof(*VAR_5),
        &VAR_5->send_hdr);

 VAR_5->avport = VAR_2;
 VAR_5->mclk = FUNC_7(VAR_3->audio_fs) | 0x80;
 FUNC_8(VAR_5->ns, VAR_3->audio_fs, VAR_4);
 VAR_5->enable = FUNC_2(VAR_3->audio_source,
      VAR_3->audio_enable);
 VAR_5->swaplr = 0x09;
 VAR_5->fifomap = FUNC_3(VAR_3->audio_map);
 VAR_5->inputctrl = 0x49;
 VAR_5->inputlen = FUNC_5(VAR_3->audio_word_bits);
 VAR_5->layout = FUNC_6(VAR_3->audio_num_of_ch);
 FUNC_4(&VAR_5->info, VAR_3);
 FUNC_1(VAR_5->chstat, VAR_3->audio_cs_info);

 return sizeof(*VAR_5);
}
