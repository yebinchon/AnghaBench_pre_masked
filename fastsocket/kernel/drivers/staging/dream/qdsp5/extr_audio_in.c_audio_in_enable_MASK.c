
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct audmgr_config {int snd_method; int codec; int def_method; int rx_rate; int tx_rate; } ;
struct audio_in {int enabled; scalar_t__ type; int audrec; int audpre; int audmgr; int samp_rate; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct audio_in*,int) ;
 int FUNC_1 (int *,struct audmgr_config*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct audio_in *VAR_7)
{
 struct audmgr_config VAR_8;
 int VAR_9;

 if (VAR_7->enabled)
  return 0;

 VAR_8.tx_rate = VAR_7->samp_rate;
 VAR_8.rx_rate = VAR_5;
 VAR_8.def_method = VAR_4;
 if (VAR_7->type == VAR_0)
  VAR_8.codec = VAR_3;
 else
  VAR_8.codec = VAR_2;
 VAR_8.snd_method = VAR_6;

 VAR_9 = FUNC_1(&VAR_7->audmgr, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (FUNC_2(VAR_7->audpre)) {
  FUNC_3("audrec: msm_adsp_enable(audpre) failed\n");
  return -VAR_1;
 }
 if (FUNC_2(VAR_7->audrec)) {
  FUNC_3("audrec: msm_adsp_enable(audrec) failed\n");
  return -VAR_1;
 }

 VAR_7->enabled = 1;
 FUNC_0(VAR_7, 1);

 return 0;
}
