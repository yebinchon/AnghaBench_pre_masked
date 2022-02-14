
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_input {int index; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct cx18*,int ,struct v4l2_input*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, struct v4l2_input *VAR_2)
{
 struct cx18 *VAR_3 = ((struct cx18_open_id *)VAR_1)->cx;


 return FUNC_0(VAR_3, VAR_2->index, VAR_2);
}
