
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct lms283gf05_pdata* platform_data; } ;
struct spi_device {TYPE_1__ dev; } ;
struct lms283gf05_state {struct spi_device* spi; } ;
struct lms283gf05_pdata {int reset_inverted; int reset_gpio; } ;
struct lcd_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 struct lms283gf05_state* FUNC_2 (struct lcd_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct spi_device*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct lcd_device *VAR_2, int VAR_3)
{
 struct lms283gf05_state *VAR_4 = FUNC_2(VAR_2);
 struct spi_device *VAR_5 = VAR_4->spi;
 struct lms283gf05_pdata *VAR_6 = VAR_5->dev.platform_data;

 if (VAR_3) {
  if (VAR_6)
   FUNC_3(VAR_6->reset_gpio,
     VAR_6->reset_inverted);
  FUNC_4(VAR_5, VAR_0, FUNC_0(VAR_0));
 } else {
  FUNC_4(VAR_5, VAR_1, FUNC_0(VAR_1));
  if (VAR_6)
   FUNC_1(VAR_6->reset_gpio,
     VAR_6->reset_inverted);
 }

 return 0;
}
