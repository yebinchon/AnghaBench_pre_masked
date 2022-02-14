
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {scalar_t__ mode; int name; int capability; scalar_t__ index; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_audio *VAR_3)
{
 VAR_3->index = 0;
 VAR_3->capability = VAR_0;
 FUNC_0(VAR_3->name, "USB audio in");
 VAR_3->mode = 0;
 return 0;
}
