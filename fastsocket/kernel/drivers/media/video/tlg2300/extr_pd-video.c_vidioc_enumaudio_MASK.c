
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ index; scalar_t__ mode; int name; int capability; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, struct v4l2_audio *VAR_4)
{
 if (0 != VAR_4->index)
  return -VAR_0;
 VAR_4->capability = VAR_1;
 FUNC_0(VAR_4->name, "USB audio in");

 VAR_4->mode = 0;
 return 0;
}
