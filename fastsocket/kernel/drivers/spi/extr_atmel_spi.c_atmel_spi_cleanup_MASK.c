
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {struct atmel_spi_device* controller_state; int controller_data; int master; } ;
struct atmel_spi_device {int dummy; } ;
struct atmel_spi {int lock; struct spi_device* stay; } ;


 int FUNC_0 (struct atmel_spi*,struct spi_device*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct atmel_spi_device*) ;
 struct atmel_spi* FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct spi_device *VAR_0)
{
 struct atmel_spi *VAR_1 = FUNC_3(VAR_0->master);
 struct atmel_spi_device *VAR_2 = VAR_0->controller_state;
 unsigned VAR_3 = (unsigned) VAR_0->controller_data;
 unsigned long VAR_4;

 if (!VAR_2)
  return;

 FUNC_4(&VAR_1->lock, VAR_4);
 if (VAR_1->stay == VAR_0) {
  VAR_1->stay = ((void*)0);
  FUNC_0(VAR_1, VAR_0);
 }
 FUNC_5(&VAR_1->lock, VAR_4);

 VAR_0->controller_state = ((void*)0);
 FUNC_1(VAR_3);
 FUNC_2(VAR_2);
}
