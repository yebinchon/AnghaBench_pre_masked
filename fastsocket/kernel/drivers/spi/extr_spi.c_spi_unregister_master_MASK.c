
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct spi_master {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(struct spi_master *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1->dev.parent, &VAR_1->dev,
     VAR_0);
 FUNC_1(&VAR_1->dev);
}
