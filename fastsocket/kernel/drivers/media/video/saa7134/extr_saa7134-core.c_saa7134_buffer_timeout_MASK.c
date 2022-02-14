
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_dmaqueue {scalar_t__ curr; struct saa7134_dev* dev; } ;
struct saa7134_dev {int slock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (struct saa7134_dev*,struct saa7134_dmaqueue*,int ) ;
 int FUNC_2 (struct saa7134_dev*,struct saa7134_dmaqueue*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(unsigned long VAR_2)
{
 struct saa7134_dmaqueue *VAR_3 = (struct saa7134_dmaqueue*)VAR_2;
 struct saa7134_dev *VAR_4 = VAR_3->dev;
 unsigned long VAR_5;

 FUNC_4(&VAR_4->slock,VAR_5);


 FUNC_3(VAR_0, 0x00);
 FUNC_3(VAR_0, 0x80);
 FUNC_3(VAR_0, 0x00);



 if (VAR_3->curr) {
  FUNC_0("timeout on %p\n",VAR_3->curr);
  FUNC_1(VAR_4,VAR_3,VAR_1);
 }
 FUNC_2(VAR_4,VAR_3);
 FUNC_5(&VAR_4->slock,VAR_5);
}
