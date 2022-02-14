
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_dmaqueue {scalar_t__ curr; struct saa7146_dev* dev; } ;
struct saa7146_dev {int slock; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct saa7146_dev*,struct saa7146_dmaqueue*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(unsigned long VAR_1)
{
 struct saa7146_dmaqueue *VAR_2 = (struct saa7146_dmaqueue*)VAR_1;
 struct saa7146_dev *VAR_3 = VAR_2->dev;
 unsigned long VAR_4;

 FUNC_1(("dev:%p, dmaq:%p\n", VAR_3, VAR_2));

 FUNC_3(&VAR_3->slock,VAR_4);
 if (VAR_2->curr) {
  FUNC_0(("timeout on %p\n", VAR_2->curr));
  FUNC_2(VAR_3,VAR_2,VAR_0);
 }
 FUNC_4(&VAR_3->slock,VAR_4);
}
