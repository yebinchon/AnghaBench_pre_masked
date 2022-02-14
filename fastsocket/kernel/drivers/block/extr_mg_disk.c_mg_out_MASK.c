
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned int u8 ;
struct mg_host {unsigned int error; void (* mg_do_intr ) (struct mg_host*) ;scalar_t__ dev_base; int timer; TYPE_1__* dev; } ;
struct mg_drv_data {int use_polling; } ;
struct TYPE_2__ {struct mg_drv_data* platform_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (struct mg_host*,int ,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static unsigned int FUNC_3(struct mg_host *VAR_14,
  unsigned int VAR_15,
  unsigned int VAR_16,
  unsigned int VAR_17,
  void (*VAR_18)(struct mg_host *))
{
 struct mg_drv_data *VAR_19 = VAR_14->dev->platform_data;

 if (FUNC_0(VAR_14, VAR_11, VAR_12))
  return VAR_14->error;

 if (!VAR_19->use_polling) {
  VAR_14->mg_do_intr = VAR_18;
  FUNC_1(&VAR_14->timer, VAR_13 + 3 * VAR_2);
 }
 if (VAR_10)
  VAR_15 += VAR_10;
 FUNC_2((u8)VAR_16, (unsigned long)VAR_14->dev_base + VAR_8);
 FUNC_2((u8)VAR_15, (unsigned long)VAR_14->dev_base + VAR_9);
 FUNC_2((u8)(VAR_15 >> 8), (unsigned long)VAR_14->dev_base +
   VAR_6);
 FUNC_2((u8)(VAR_15 >> 16), (unsigned long)VAR_14->dev_base +
   VAR_5);
 FUNC_2((u8)((VAR_15 >> 24) | VAR_1 | VAR_0),
   (unsigned long)VAR_14->dev_base + VAR_7);
 FUNC_2(VAR_17, (unsigned long)VAR_14->dev_base + VAR_4);
 return VAR_3;
}
