
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct mipid_device {int panel; } ;


 struct mipid_device* FUNC_0 (int *) ;
 int FUNC_1 (struct mipid_device*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct mipid_device *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(&VAR_1->panel);
 FUNC_1(VAR_1);

 return 0;
}
