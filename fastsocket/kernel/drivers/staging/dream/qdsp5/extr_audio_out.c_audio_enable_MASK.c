
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audmgr_config {int snd_method; int codec; int def_method; int rx_rate; int tx_rate; } ;
struct audio {int enabled; int audmgr; scalar_t__ out_needed; scalar_t__ out_tail; TYPE_1__* out; } ;
struct TYPE_2__ {int used; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct audio*) ;
 int VAR_8 ;
 int FUNC_1 (struct audio*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct audmgr_config*) ;
 scalar_t__ FUNC_4 (int,int ,struct audio*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int FUNC_8(struct audio *VAR_9)
{
 struct audmgr_config VAR_10;
 int VAR_11;

 FUNC_7("audio_enable()\n");

 if (VAR_9->enabled)
  return 0;


 if (!VAR_9->out[0].used || !VAR_9->out[1].used)
  return -VAR_0;




 VAR_9->out_tail = 0;
 VAR_9->out_needed = 0;

 VAR_10.tx_rate = VAR_6;
 VAR_10.rx_rate = VAR_5;
 VAR_10.def_method = VAR_4;
 VAR_10.codec = VAR_3;
 VAR_10.snd_method = VAR_7;

 FUNC_1(VAR_9);
 VAR_11 = FUNC_3(&VAR_9->audmgr, &VAR_10);
 if (VAR_11 < 0) {
  FUNC_0(VAR_9);
  return VAR_11;
 }

 if (FUNC_4(-1, VAR_8, VAR_9)) {
  FUNC_6("audio: audpp_enable() failed\n");
  FUNC_2(&VAR_9->audmgr);
  FUNC_0(VAR_9);
  return -VAR_1;
 }

 VAR_9->enabled = 1;
 FUNC_5(VAR_2, 100);
 return 0;
}
