
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_card {int syt_offset; int cip_d; int cip_n; int pal_or_ntsc; int channel; } ;
struct dv1394_init {int n_frames; int syt_offset; int cip_d; int cip_n; int format; int channel; int api_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct video_card*,struct dv1394_init*) ;

__attribute__((used)) static int FUNC_1(struct video_card *VAR_2)
{
 struct dv1394_init VAR_3;

 VAR_3.api_version = VAR_0;
 VAR_3.n_frames = VAR_1 / 4;
 VAR_3.channel = VAR_2->channel;
 VAR_3.format = VAR_2->pal_or_ntsc;
 VAR_3.cip_n = VAR_2->cip_n;
 VAR_3.cip_d = VAR_2->cip_d;
 VAR_3.syt_offset = VAR_2->syt_offset;

 return FUNC_0(VAR_2, &VAR_3);
}
