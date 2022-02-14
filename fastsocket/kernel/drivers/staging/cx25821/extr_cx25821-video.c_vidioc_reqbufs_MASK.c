
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_requestbuffers {int dummy; } ;
struct file {int dummy; } ;
struct cx25821_fh {int dummy; } ;


 int FUNC_0 (struct cx25821_fh*) ;
 int FUNC_1 (int ,struct v4l2_requestbuffers*) ;

int FUNC_2(struct file *VAR_0, void *VAR_1, struct v4l2_requestbuffers *VAR_2)
{
 struct cx25821_fh *VAR_3 = VAR_1;
 return FUNC_1(FUNC_0(VAR_3), VAR_2);
}
