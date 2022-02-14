
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audioout {scalar_t__ index; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct v4l2_audioout*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
     struct v4l2_audioout *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2);

 VAR_2->index = 0;

 return VAR_3;
}
