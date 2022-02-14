
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {int norm; } ;


 int FUNC_0 (struct em28xx*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct em28xx_fh *VAR_3 = VAR_1;
 struct em28xx *VAR_4 = VAR_3->dev;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 *VAR_2 = VAR_4->norm;

 return 0;
}
