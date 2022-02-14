
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct saa7134_fh {int dev; } ;
struct file {int dummy; } ;


 int FUNC_0 (int ,struct saa7134_fh*,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, v4l2_std_id *VAR_2)
{
 struct saa7134_fh *VAR_3 = VAR_1;

 return FUNC_0(VAR_3->dev, VAR_3, VAR_2);
}
