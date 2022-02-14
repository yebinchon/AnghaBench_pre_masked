
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audmgr_config {int snd_method; int codec; int def_method; int rx_rate; int tx_rate; } ;
struct audio {int enabled; int audmgr; int audplay; int dec_id; scalar_t__ out_needed; scalar_t__ out_tail; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct audmgr_config*) ;
 scalar_t__ FUNC_2 (int ,int ,struct audio*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct audio *VAR_7)
{
 struct audmgr_config VAR_8;
 int VAR_9;

 FUNC_3("audio_enable()\n");

 if (VAR_7->enabled)
  return 0;

 VAR_7->out_tail = 0;
 VAR_7->out_needed = 0;

 VAR_8.tx_rate = VAR_4;
 VAR_8.rx_rate = VAR_3;
 VAR_8.def_method = VAR_2;
 VAR_8.codec = VAR_1;
 VAR_8.snd_method = VAR_5;

 VAR_9 = FUNC_1(&VAR_7->audmgr, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_5(VAR_7->audplay)) {
  FUNC_6("audio: msm_adsp_enable(audplay) failed\n");
  FUNC_0(&VAR_7->audmgr);
  return -VAR_0;
 }

 if (FUNC_2(VAR_7->dec_id, VAR_6, VAR_7)) {
  FUNC_6("audio: audpp_enable() failed\n");
    FUNC_4(VAR_7->audplay);
  FUNC_0(&VAR_7->audmgr);
  return -VAR_0;
 }
 VAR_7->enabled = 1;
 return 0;
}
