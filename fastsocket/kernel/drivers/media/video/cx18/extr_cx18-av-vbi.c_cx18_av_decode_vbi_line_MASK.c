
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vbi_anc_data {int* preamble; int did; int sdid; int* idid; int * payload; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_decode_vbi_line {int line; int type; int is_second_field; int * p; } ;
struct cx18_av_state {scalar_t__ slicer_line_offset; } ;
struct cx18 {struct cx18_av_state av_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ) ;
 int* VAR_4 ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

int FUNC_3(struct v4l2_subdev *VAR_5,
       struct v4l2_decode_vbi_line *VAR_6)
{
 struct cx18 *VAR_7 = FUNC_2(VAR_5);
 struct cx18_av_state *VAR_8 = &VAR_7->av_state;
 struct vbi_anc_data *VAR_9 = (struct vbi_anc_data *)VAR_6->p;
 u8 *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14 = 0;




 if (VAR_9->preamble[0] ||
   VAR_9->preamble[1] != 0xff || VAR_9->preamble[2] != 0xff ||
   (VAR_9->did != VAR_4[0] &&
    VAR_9->did != VAR_4[1])) {
  VAR_6->line = VAR_6->type = 0;
  return 0;
 }

 VAR_11 = VAR_9->did;
 VAR_12 = VAR_9->sdid & 0xf;
 VAR_13 = VAR_9->idid[0] & 0x3f;
 VAR_13 += VAR_8->slicer_line_offset;
 VAR_10 = VAR_9->payload;


 switch (VAR_12) {
 case 1:
  VAR_12 = VAR_1;
  break;
 case 4:
  VAR_12 = VAR_3;
  break;
 case 6:
  VAR_12 = VAR_0;
  VAR_14 = !FUNC_1(VAR_10[0]) || !FUNC_1(VAR_10[1]);
  break;
 case 9:
  VAR_12 = VAR_2;
  if (FUNC_0(VAR_10, VAR_10) != 0)
   VAR_14 = 1;
  break;
 default:
  VAR_12 = 0;
  VAR_14 = 1;
  break;
 }

 VAR_6->type = VAR_14 ? 0 : VAR_12;
 VAR_6->line = VAR_14 ? 0 : VAR_13;
 VAR_6->is_second_field = VAR_14 ? 0 : (VAR_11 == VAR_4[1]);
 VAR_6->p = VAR_10;
 return 0;
}
