
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct spi_device {int bits_per_word; int dev; } ;
struct TYPE_3__ {int max_brightness; int brightness_set; void* brightness; int name; } ;
struct dac124s085_led {int id; TYPE_1__ ldev; int name; int mutex; int work; int lock; struct spi_device* spi; void* brightness; } ;
struct dac124s085 {struct dac124s085_led* leds; } ;


 int FUNC_0 (struct dac124s085_led*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct dac124s085*) ;
 struct dac124s085* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int,char*,int) ;
 int FUNC_8 (struct spi_device*,struct dac124s085*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct spi_device *VAR_5)
{
 struct dac124s085 *VAR_6;
 struct dac124s085_led *VAR_7;
 int VAR_8, VAR_9;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_5->bits_per_word = 16;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6->leds); VAR_8++) {
  VAR_7 = VAR_6->leds + VAR_8;
  VAR_7->id = VAR_8;
  VAR_7->brightness = VAR_2;
  VAR_7->spi = VAR_5;
  FUNC_7(VAR_7->name, sizeof(VAR_7->name), "dac124s085-%d", VAR_8);
  FUNC_9(&VAR_7->lock);
  FUNC_1(&VAR_7->work, VAR_3);
  FUNC_6(&VAR_7->mutex);
  VAR_7->ldev.name = VAR_7->name;
  VAR_7->ldev.brightness = VAR_2;
  VAR_7->ldev.max_brightness = 0xfff;
  VAR_7->ldev.brightness_set = VAR_4;
  VAR_9 = FUNC_4(&VAR_5->dev, &VAR_7->ldev);
  if (VAR_9 < 0)
   goto eledcr;
 }

 FUNC_8(VAR_5, VAR_6);

 return 0;

eledcr:
 while (VAR_8--)
  FUNC_5(&VAR_6->leds[VAR_8].ldev);

 FUNC_8(VAR_5, ((void*)0));
 FUNC_2(VAR_6);
 return VAR_9;
}
