
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ad7877 {int pending; int lock; TYPE_1__* spi; int msg; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct ad7877 *VAR_3 = VAR_2;
 unsigned long VAR_4;
 int VAR_5;
 FUNC_2(&VAR_3->lock, VAR_4);
 if (!VAR_3->pending) {
  VAR_3->pending = 1;

  VAR_5 = FUNC_1(VAR_3->spi, &VAR_3->msg);
  if (VAR_5)
   FUNC_0(&VAR_3->spi->dev, "spi_sync --> %d\n", VAR_5);
 }
 FUNC_3(&VAR_3->lock, VAR_4);

 return VAR_0;
}
