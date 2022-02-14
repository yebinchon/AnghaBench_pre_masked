
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {scalar_t__ ext_priv; } ;
struct mxb {int i2c_adapter; int vbi_dev; int video_dev; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct saa7146_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mxb*) ;
 int VAR_0 ;
 int FUNC_4 (int *,struct saa7146_dev*) ;
 int FUNC_5 (struct saa7146_dev*) ;

__attribute__((used)) static int FUNC_6(struct saa7146_dev *VAR_1)
{
 struct mxb *VAR_2 = (struct mxb *)VAR_1->ext_priv;

 FUNC_0(("dev:%p\n", VAR_1));

 FUNC_4(&VAR_2->video_dev,VAR_1);
 if (FUNC_1(VAR_1))
  FUNC_4(&VAR_2->vbi_dev, VAR_1);
 FUNC_5(VAR_1);

 VAR_0--;

 FUNC_2(&VAR_2->i2c_adapter);
 FUNC_3(VAR_2);

 return 0;
}
