
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_bitbang {int workqueue; int queue; int master; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct spi_bitbang *VAR_0)
{
 FUNC_3(VAR_0->master);

 FUNC_0(!FUNC_2(&VAR_0->queue));

 FUNC_1(VAR_0->workqueue);

 return 0;
}
