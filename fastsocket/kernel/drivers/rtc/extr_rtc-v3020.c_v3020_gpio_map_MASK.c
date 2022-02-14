
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct v3020_platform_data {int gpio_io; int gpio_rd; int gpio_wr; int gpio_cs; } ;
struct v3020 {TYPE_1__* gpio; } ;
struct platform_device {int dummy; } ;
struct TYPE_3__ {int gpio; int name; } ;


 int FUNC_0 (TYPE_1__*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 TYPE_1__* VAR_4 ;

__attribute__((used)) static int FUNC_4(struct v3020 *VAR_5, struct platform_device *VAR_6,
     struct v3020_platform_data *VAR_7)
{
 int VAR_8, VAR_9;

 VAR_4[VAR_0].gpio = VAR_7->gpio_cs;
 VAR_4[VAR_3].gpio = VAR_7->gpio_wr;
 VAR_4[VAR_2].gpio = VAR_7->gpio_rd;
 VAR_4[VAR_1].gpio = VAR_7->gpio_io;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  VAR_9 = FUNC_3(VAR_4[VAR_8].gpio, VAR_4[VAR_8].name);
  if (VAR_9)
   goto err_request;

  FUNC_1(VAR_4[VAR_8].gpio, 1);
 }

 VAR_5->gpio = VAR_4;

 return 0;

err_request:
 while (--VAR_8 >= 0)
  FUNC_2(VAR_4[VAR_8].gpio);

 return VAR_9;
}
