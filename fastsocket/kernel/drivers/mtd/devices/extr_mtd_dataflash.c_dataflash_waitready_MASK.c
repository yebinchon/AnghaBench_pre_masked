
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;


 int FUNC_0 (int ,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct spi_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct spi_device *VAR_1)
{
 int VAR_2;

 for (;;) {
  VAR_2 = FUNC_1(VAR_1);
  if (VAR_2 < 0) {
   FUNC_0(VAR_0, "%s: status %d?\n",
     FUNC_2(&VAR_1->dev), VAR_2);
   VAR_2 = 0;
  }

  if (VAR_2 & (1 << 7))
   return VAR_2;

  FUNC_3(3);
 }
}
