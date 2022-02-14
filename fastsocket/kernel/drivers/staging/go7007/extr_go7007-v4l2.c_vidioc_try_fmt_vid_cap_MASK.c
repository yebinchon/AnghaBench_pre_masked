
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {int dummy; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct go7007*,struct v4l2_format*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1,
   struct v4l2_format *VAR_2)
{
 struct go7007 *VAR_3 = ((struct go7007_file *) VAR_1)->go;

 return FUNC_0(VAR_3, VAR_2, 1);
}
