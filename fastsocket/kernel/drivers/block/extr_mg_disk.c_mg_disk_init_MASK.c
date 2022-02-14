
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mg_host {scalar_t__ dev_base; int rst; TYPE_1__* dev; } ;
struct mg_drv_data {scalar_t__ use_polling; } ;
typedef int s32 ;
struct TYPE_2__ {struct mg_drv_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct mg_host*,int ,int ) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct mg_host *VAR_10)
{
 struct mg_drv_data *VAR_11 = VAR_10->dev->platform_data;
 s32 VAR_12;
 u8 VAR_13;


 FUNC_0(VAR_10->rst, 0);
 VAR_12 = FUNC_2(VAR_10, VAR_0, VAR_8);
 if (VAR_12)
  return VAR_12;


 FUNC_0(VAR_10->rst, 1);
 VAR_12 = FUNC_2(VAR_10, VAR_6, VAR_7);
 if (VAR_12)
  return VAR_12;


 FUNC_3(VAR_2 | (VAR_11->use_polling ? VAR_1 : 0),
   (unsigned long)VAR_10->dev_base + VAR_4);
 VAR_12 = FUNC_2(VAR_10, VAR_0, VAR_8);
 if (VAR_12)
  return VAR_12;


 FUNC_3(VAR_11->use_polling ? VAR_1 : 0,
   (unsigned long)VAR_10->dev_base + VAR_4);
 VAR_12 = FUNC_2(VAR_10, VAR_6, VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_13 = FUNC_1((unsigned long)VAR_10->dev_base + VAR_5) & 0xf;

 if (VAR_13 == 0xf)
  return VAR_3;

 return VAR_12;
}
