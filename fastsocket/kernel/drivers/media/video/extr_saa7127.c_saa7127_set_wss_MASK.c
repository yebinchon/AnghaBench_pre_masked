
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_sliced_vbi_data {int line; scalar_t__ field; int* data; } ;
struct saa7127_state {int wss_enable; int wss_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_subdev*,int,int) ;
 struct saa7127_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,char*) ;
 char** VAR_2 ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_3, const struct v4l2_sliced_vbi_data *VAR_4)
{
 struct saa7127_state *VAR_5 = FUNC_1(VAR_3);
 int VAR_6 = (VAR_4->line != 0);

 if (VAR_6 && (VAR_4->field != 0 || VAR_4->line != 23))
  return -VAR_0;
 if (VAR_5->wss_enable != VAR_6) {
  FUNC_2(1, VAR_1, VAR_3, "Turn WSS %s\n", VAR_6 ? "on" : "off");
  FUNC_0(VAR_3, 0x27, VAR_6 << 7);
  VAR_5->wss_enable = VAR_6;
 }
 if (!VAR_6)
  return 0;

 FUNC_0(VAR_3, 0x26, VAR_4->data[0]);
 FUNC_0(VAR_3, 0x27, 0x80 | (VAR_4->data[1] & 0x3f));
 FUNC_2(1, VAR_1, VAR_3,
  "WSS mode: %s\n", VAR_2[VAR_4->data[0] & 0xf]);
 VAR_5->wss_mode = (VAR_4->data[1] & 0x3f) << 8 | VAR_4->data[0];
 return 0;
}
