
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {scalar_t__ type; } ;
struct saa7146_fh {int vbi_q; int video_q; } ;
struct file {int f_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5, struct v4l2_buffer *VAR_6)
{
 struct saa7146_fh *VAR_7 = VAR_5;

 if (VAR_6->type == VAR_3)
  return FUNC_0(&VAR_7->video_q, VAR_6, VAR_4->f_flags & VAR_1);
 if (VAR_6->type == VAR_2)
  return FUNC_0(&VAR_7->vbi_q, VAR_6, VAR_4->f_flags & VAR_1);
 return -VAR_0;
}
