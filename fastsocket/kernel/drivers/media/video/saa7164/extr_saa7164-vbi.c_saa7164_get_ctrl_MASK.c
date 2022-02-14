
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int id; int value; } ;
struct saa7164_vbi_params {int gop_size; int refdist; int ctl_aspect; int ctl_mute; int stream_type; } ;
struct saa7164_port {struct saa7164_vbi_params vbi_params; } ;


 int VAR_0 ;






__attribute__((used)) static int FUNC_0(struct saa7164_port *VAR_1,
 struct v4l2_ext_control *VAR_2)
{
 struct saa7164_vbi_params *VAR_3 = &VAR_1->vbi_params;

 switch (VAR_2->id) {
 case 131:
  VAR_2->value = VAR_3->stream_type;
  break;
 case 132:
  VAR_2->value = VAR_3->ctl_mute;
  break;
 case 130:
  VAR_2->value = VAR_3->ctl_aspect;
  break;
 case 129:
  VAR_2->value = VAR_3->refdist;
  break;
 case 128:
  VAR_2->value = VAR_3->gop_size;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
