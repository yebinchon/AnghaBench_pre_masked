
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,int ,int ,struct v4l2_frequency*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_frequency *VAR_5)
{
 struct cx18 *VAR_6 = ((struct cx18_open_id *)VAR_4)->cx;

 if (VAR_5->tuner != 0)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_2, VAR_1, VAR_5);
 return 0;
}
