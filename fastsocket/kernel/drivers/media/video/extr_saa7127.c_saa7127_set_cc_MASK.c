
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_data {int* data; int line; scalar_t__ field; } ;
struct saa7127_state {int cc_enable; int xds_enable; int cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_5, const struct v4l2_sliced_vbi_data *VAR_6)
{
 struct saa7127_state *VAR_7 = FUNC_1(VAR_5);
 u16 VAR_8 = VAR_6->data[1] << 8 | VAR_6->data[0];
 int VAR_9 = (VAR_6->line != 0);

 if (VAR_9 && (VAR_6->field != 0 || VAR_6->line != 21))
  return -VAR_0;
 if (VAR_7->cc_enable != VAR_9) {
  FUNC_2(1, VAR_4, VAR_5,
   "Turn CC %s\n", VAR_9 ? "on" : "off");
  FUNC_0(VAR_5, VAR_1,
   (VAR_7->xds_enable << 7) | (VAR_9 << 6) | 0x11);
  VAR_7->cc_enable = VAR_9;
 }
 if (!VAR_9)
  return 0;

 FUNC_2(2, VAR_4, VAR_5, "CC data: %04x\n", VAR_8);
 FUNC_0(VAR_5, VAR_2, VAR_8 & 0xff);
 FUNC_0(VAR_5, VAR_3, VAR_8 >> 8);
 VAR_7->cc_data = VAR_8;
 return 0;
}
