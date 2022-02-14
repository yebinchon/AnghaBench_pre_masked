
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct tosa_bl_data {TYPE_2__* i2c; int comadj; } ;
struct spi_device {int dummy; } ;
struct TYPE_3__ {struct spi_device* platform_data; } ;
struct TYPE_4__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (struct spi_device*,int) ;

__attribute__((used)) static void FUNC_3(struct tosa_bl_data *VAR_3, int VAR_4)
{
 struct spi_device *VAR_5 = VAR_3->i2c->dev.platform_data;

 FUNC_1(VAR_3->i2c, VAR_0, VAR_3->comadj);


 FUNC_1(VAR_3->i2c, VAR_1, (u8)(VAR_4 & 0xff));


 FUNC_0(VAR_2, VAR_4 & 0x100);

 FUNC_2(VAR_5, VAR_4);
}
