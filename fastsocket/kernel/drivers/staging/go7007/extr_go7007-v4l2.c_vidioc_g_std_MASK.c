
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int standard; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_3, void *VAR_4, v4l2_std_id *VAR_5)
{
 struct go7007 *VAR_6 = ((struct go7007_file *) VAR_4)->go;

 switch (VAR_6->standard) {
 case 129:
  *VAR_5 = VAR_1;
  break;
 case 128:
  *VAR_5 = VAR_2;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
