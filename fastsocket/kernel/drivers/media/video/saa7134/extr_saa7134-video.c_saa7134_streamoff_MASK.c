
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_fh {struct saa7134_dev* dev; } ;
struct saa7134_dev {int dummy; } ;
struct file {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;


 int FUNC_0 (struct saa7134_dev*,struct saa7134_fh*,int) ;
 int FUNC_1 (struct saa7134_fh*) ;
 int FUNC_2 (struct saa7134_fh*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_0, void *VAR_1,
     enum v4l2_buf_type VAR_2)
{
 int VAR_3;
 struct saa7134_fh *VAR_4 = VAR_1;
 struct saa7134_dev *VAR_5 = VAR_4->dev;
 int VAR_6 = FUNC_2(VAR_4);

 VAR_3 = FUNC_3(FUNC_1(VAR_4));
 if (VAR_3 < 0)
  return VAR_3;
 FUNC_0(VAR_5, VAR_4, VAR_6);
 return 0;
}
