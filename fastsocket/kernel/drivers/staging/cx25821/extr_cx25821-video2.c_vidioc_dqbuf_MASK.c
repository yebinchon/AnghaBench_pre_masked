
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_buffer {int sequence; } ;
struct file {int f_flags; } ;
struct cx25821_fh {struct cx25821_dev* dev; } ;
struct cx25821_dev {TYPE_1__* vidq; } ;
struct TYPE_2__ {int count; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct cx25821_fh*) ;
 int FUNC_1 (int ,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3, struct v4l2_buffer *VAR_4)
{
 int VAR_5 = 0;
 struct cx25821_fh *VAR_6 = VAR_3;
 struct cx25821_dev *VAR_7 = ((struct cx25821_fh *)VAR_3)->dev;

 VAR_5 = FUNC_1(FUNC_0(VAR_6), VAR_4, VAR_2->f_flags & VAR_0);

 VAR_4->sequence = VAR_7->vidq[VAR_1].count;

 return VAR_5;
}
