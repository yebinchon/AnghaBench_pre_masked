
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct mipid_platform_data {int data_lines; } ;
struct TYPE_6__ {char* name; int data_lines; } ;
struct mipid_device {int revision; TYPE_2__ panel; TYPE_1__* spi; int esd_check; } ;
struct TYPE_7__ {struct mipid_platform_data* platform_data; } ;
struct TYPE_5__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,char*,int,int,int) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 int VAR_3 ;
 int FUNC_2 (struct mipid_device*,int ,int*,int) ;
 int FUNC_3 (char*,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(struct mipid_device *VAR_4)
{
 struct mipid_platform_data *VAR_5;
 u8 VAR_6[3];

 VAR_5 = VAR_4->spi->dev.platform_data;
 if (VAR_5 == ((void*)0)) {
  FUNC_1(&VAR_4->spi->dev, "missing platform data\n");
  return -VAR_1;
 }

 FUNC_2(VAR_4, VAR_2, VAR_6, 3);
 FUNC_0(&VAR_4->spi->dev, "MIPI display ID: %02x%02x%02x\n",
  VAR_6[0], VAR_6[1], VAR_6[2]);

 switch (VAR_6[0]) {
 case 0x45:
  VAR_4->panel.name = "lph8923";
  break;
 case 0x83:
  VAR_4->panel.name = "ls041y3";
  VAR_4->esd_check = VAR_3;
  break;
 default:
  VAR_4->panel.name = "unknown";
  FUNC_1(&VAR_4->spi->dev, "invalid display ID\n");
  return -VAR_0;
 }

 VAR_4->revision = VAR_6[1];
 VAR_4->panel.data_lines = VAR_5->data_lines;
 FUNC_3("omapfb: %s rev %02x LCD detected, %d data lines\n",
   VAR_4->panel.name, VAR_4->revision, VAR_4->panel.data_lines);

 return 0;
}
