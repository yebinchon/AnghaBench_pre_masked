
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wl1251 {int irq; } ;
struct spi_device {int dummy; } ;


 int FUNC_0 (int ,struct wl1251*) ;
 struct wl1251* FUNC_1 (struct spi_device*) ;
 int FUNC_2 (struct wl1251*) ;

__attribute__((used)) static int FUNC_3(struct spi_device *VAR_0)
{
 struct wl1251 *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->irq, VAR_1);
 FUNC_2(VAR_1);

 return 0;
}
