
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {size_t index; } ;
struct gspca_frame {int v4l2_buf; } ;
struct gspca_dev {size_t nframes; struct gspca_frame* frame; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_buffer*,int *,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
      struct v4l2_buffer *VAR_3)
{
 struct gspca_dev *VAR_4 = VAR_2;
 struct gspca_frame *VAR_5;

 if (VAR_3->index < 0
     || VAR_3->index >= VAR_4->nframes)
  return -VAR_0;

 VAR_5 = &VAR_4->frame[VAR_3->index];
 FUNC_0(VAR_3, &VAR_5->v4l2_buf, sizeof *VAR_3);
 return 0;
}
