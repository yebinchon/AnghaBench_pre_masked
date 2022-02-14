
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct fmi {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fmi*,int) ;
 struct fmi* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
     struct v4l2_frequency *VAR_5)
{
 struct fmi *VAR_6 = FUNC_1(VAR_3);

 if (VAR_5->frequency < VAR_2 ||
   VAR_5->frequency > VAR_1)
  return -VAR_0;


 FUNC_0(VAR_6, (VAR_5->frequency / 800) * 800);
 return 0;
}
