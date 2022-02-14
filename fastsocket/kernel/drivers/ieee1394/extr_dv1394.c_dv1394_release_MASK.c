
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_card {int open; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct video_card*,int) ;
 struct video_card* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct inode *VAR_0, struct file *VAR_1)
{
 struct video_card *VAR_2 = FUNC_2(VAR_1);


 FUNC_1(VAR_2, 1);


 FUNC_0(0, &VAR_2->open);

 return 0;
}
