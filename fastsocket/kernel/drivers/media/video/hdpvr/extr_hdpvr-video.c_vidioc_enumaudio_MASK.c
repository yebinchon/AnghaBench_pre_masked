
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_audio {unsigned int index; char* name; int capability; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, void *VAR_5,
    struct v4l2_audio *VAR_6)
{
 unsigned int VAR_7;

 VAR_7 = VAR_6->index;
 if (VAR_7 >= VAR_1)
  return -VAR_0;

 VAR_6->capability = VAR_2;

 FUNC_0(VAR_6->name, VAR_3[VAR_7], sizeof(VAR_6->name) - 1);
 VAR_6->name[sizeof(VAR_6->name) - 1] = '\0';

 return 0;
}
