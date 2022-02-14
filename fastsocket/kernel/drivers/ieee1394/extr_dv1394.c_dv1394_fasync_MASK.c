
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_card {int fasync; } ;
struct file {int dummy; } ;


 int FUNC_0 (int,struct file*,int,int *) ;
 struct video_card* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(int VAR_0, struct file *VAR_1, int VAR_2)
{



 struct video_card *VAR_3 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->fasync);
}
