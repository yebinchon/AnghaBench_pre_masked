
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int rangehigh; int rangelow; int capability; int rxsubchans; int signal; int type; } ;
struct pvr2_hdw {scalar_t__ cropcap_stale; struct v4l2_tuner tuner_signal_info; int v4l2_dev; scalar_t__ tuner_signal_stale; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_tuner*,int ,int) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ,int ,struct v4l2_tuner*) ;

void FUNC_3(struct pvr2_hdw *VAR_3)
{
 struct v4l2_tuner *VAR_4 = &VAR_3->tuner_signal_info;
 FUNC_0(VAR_4, 0, sizeof(*VAR_4));
 VAR_3->tuner_signal_stale = 0;




 FUNC_2(&VAR_3->v4l2_dev, 0, VAR_2, VAR_1,
        &VAR_3->tuner_signal_info);
 FUNC_1(VAR_0, "subdev status poll"
     " type=%u strength=%u audio=0x%x cap=0x%x"
     " low=%u hi=%u",
     VAR_4->type,
     VAR_4->signal, VAR_4->rxsubchans, VAR_4->capability,
     VAR_4->rangelow, VAR_4->rangehigh);



 VAR_3->cropcap_stale = 0;
}
