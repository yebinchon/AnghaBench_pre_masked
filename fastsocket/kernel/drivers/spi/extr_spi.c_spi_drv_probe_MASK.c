
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_driver {int (* probe ) (int ) ;} ;
struct device {int driver; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 struct spi_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 const struct spi_driver *VAR_1 = FUNC_2(VAR_0->driver);

 return VAR_1->probe(FUNC_1(VAR_0));
}
