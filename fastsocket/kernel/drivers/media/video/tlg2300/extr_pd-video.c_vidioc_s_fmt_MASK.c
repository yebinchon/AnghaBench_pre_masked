
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pix; } ;
struct v4l2_format {scalar_t__ type; TYPE_1__ fmt; } ;
struct poseidon {int lock; struct file* file_for_stream; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct front_face*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct poseidon*,int *) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_2, void *VAR_3, struct v4l2_format *VAR_4)
{
 struct front_face *VAR_5 = VAR_3;
 struct poseidon *VAR_6 = VAR_5->pd;

 FUNC_0(VAR_5);

 if (VAR_1 != VAR_4->type)
  return -VAR_0;

 FUNC_1(&VAR_6->lock);
 if (VAR_6->file_for_stream == ((void*)0))
  VAR_6->file_for_stream = VAR_2;
 else if (VAR_2 != VAR_6->file_for_stream) {
  FUNC_2(&VAR_6->lock);
  return -VAR_0;
 }

 FUNC_3(VAR_6, &VAR_4->fmt.pix);
 FUNC_2(&VAR_6->lock);
 return 0;
}
