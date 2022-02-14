
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_format {int dummy; } ;
struct go7007_file {struct go7007* go; } ;
struct go7007 {scalar_t__ streaming; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct go7007*,struct v4l2_format*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2,
   struct v4l2_format *VAR_3)
{
 struct go7007 *VAR_4 = ((struct go7007_file *) VAR_2)->go;

 if (VAR_4->streaming)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_3, 0);
}
