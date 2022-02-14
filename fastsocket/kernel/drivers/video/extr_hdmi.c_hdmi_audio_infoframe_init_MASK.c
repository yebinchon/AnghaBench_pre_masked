
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdmi_audio_infoframe {int version; int length; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdmi_audio_infoframe*,int ,int) ;

int FUNC_1(struct hdmi_audio_infoframe *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->type = VAR_0;
 VAR_1->version = 1;
 VAR_1->length = 10;

 return 0;
}
