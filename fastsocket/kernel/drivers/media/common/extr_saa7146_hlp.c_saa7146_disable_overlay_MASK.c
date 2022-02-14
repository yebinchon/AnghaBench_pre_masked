
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_fh {struct saa7146_dev* dev; } ;
struct saa7146_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7146_dev*) ;
 int FUNC_1 (struct saa7146_dev*,int ,int ) ;

void FUNC_2(struct saa7146_fh *VAR_2)
{
 struct saa7146_dev *VAR_3 = VAR_2->dev;


 FUNC_0(VAR_3);
 FUNC_1(VAR_3, VAR_1, VAR_0);
}
