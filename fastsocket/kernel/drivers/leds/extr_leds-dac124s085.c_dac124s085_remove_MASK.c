
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spi_device {int dummy; } ;
struct dac124s085 {TYPE_1__* leds; } ;
struct TYPE_2__ {int work; int ldev; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dac124s085*) ;
 int FUNC_3 (int *) ;
 struct dac124s085* FUNC_4 (struct spi_device*) ;
 int FUNC_5 (struct spi_device*,int *) ;

__attribute__((used)) static int FUNC_6(struct spi_device *VAR_0)
{
 struct dac124s085 *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1->leds); VAR_2++) {
  FUNC_3(&VAR_1->leds[VAR_2].ldev);
  FUNC_1(&VAR_1->leds[VAR_2].work);
 }

 FUNC_5(VAR_0, ((void*)0));
 FUNC_2(VAR_1);

 return 0;
}
