
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int offset; } ;
struct TYPE_8__ {int index; unsigned int length; int memory; TYPE_3__ m; scalar_t__ sequence; int field; scalar_t__ flags; int type; } ;
struct gspca_frame {TYPE_4__ v4l2_buf; scalar_t__ data; } ;
struct TYPE_6__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {int curr_mode; int memory; unsigned int frsz; unsigned int nframes; scalar_t__ fr_o; int fr_i; int fr_q; int frbuf; struct gspca_frame* frame; struct file* capt_file; TYPE_2__ cam; } ;
struct file {int dummy; } ;
typedef enum v4l2_memory { ____Placeholder_v4l2_memory } v4l2_memory ;
struct TYPE_5__ {unsigned int sizeimage; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_5, struct file *VAR_6,
   enum v4l2_memory VAR_7, unsigned int VAR_8)
{
 struct gspca_frame *VAR_9;
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = VAR_5->curr_mode;
 VAR_10 = VAR_5->cam.cam_mode[VAR_11].sizeimage;
 FUNC_1(VAR_0, "frame alloc frsz: %d", VAR_10);
 VAR_10 = FUNC_0(VAR_10);
 if (VAR_8 >= VAR_2)
  VAR_8 = VAR_2 - 1;
 VAR_5->frbuf = FUNC_4(VAR_10 * VAR_8);
 if (!VAR_5->frbuf) {
  FUNC_3("frame alloc failed");
  return -VAR_1;
 }
 VAR_5->capt_file = VAR_6;
 VAR_5->memory = VAR_7;
 VAR_5->frsz = VAR_10;
 VAR_5->nframes = VAR_8;
 for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
  VAR_9 = &VAR_5->frame[VAR_11];
  VAR_9->v4l2_buf.index = VAR_11;
  VAR_9->v4l2_buf.type = VAR_3;
  VAR_9->v4l2_buf.flags = 0;
  VAR_9->v4l2_buf.field = VAR_4;
  VAR_9->v4l2_buf.length = VAR_10;
  VAR_9->v4l2_buf.memory = VAR_7;
  VAR_9->v4l2_buf.sequence = 0;
  VAR_9->data = VAR_5->frbuf + VAR_11 * VAR_10;
  VAR_9->v4l2_buf.m.offset = VAR_11 * VAR_10;
 }
 FUNC_2(&VAR_5->fr_q, 0);
 FUNC_2(&VAR_5->fr_i, 0);
 VAR_5->fr_o = 0;
 return 0;
}
