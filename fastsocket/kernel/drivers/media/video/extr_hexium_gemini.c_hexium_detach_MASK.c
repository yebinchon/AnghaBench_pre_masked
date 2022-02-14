
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dev {scalar_t__ ext_priv; } ;
struct hexium {int i2c_adapter; int video_dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct hexium*) ;
 int FUNC_3 (int *,struct saa7146_dev*) ;
 int FUNC_4 (struct saa7146_dev*) ;

__attribute__((used)) static int FUNC_5(struct saa7146_dev *VAR_1)
{
 struct hexium *VAR_2 = (struct hexium *) VAR_1->ext_priv;

 FUNC_0(("dev:%p\n", VAR_1));

 FUNC_3(&VAR_2->video_dev, VAR_1);
 FUNC_4(VAR_1);

 VAR_0--;

 FUNC_1(&VAR_2->i2c_adapter);
 FUNC_2(VAR_2);
 return 0;
}
