
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mg_host {unsigned int error; scalar_t__ dev_base; TYPE_1__* dev; } ;
struct mg_drv_data {scalar_t__ use_polling; } ;
struct TYPE_2__ {struct mg_drv_data* platform_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 unsigned long VAR_8 ;
 int FUNC_2 (char*,int,struct mg_host*) ;
 unsigned long FUNC_3 (int) ;
 scalar_t__ FUNC_4 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static unsigned int FUNC_6(struct mg_host *VAR_9, u32 VAR_10, u32 VAR_11)
{
 u8 VAR_12;
 unsigned long VAR_13, VAR_14;
 struct mg_drv_data *VAR_15 = VAR_9->dev->platform_data;

 VAR_9->error = VAR_4;
 VAR_13 = VAR_8 + FUNC_3(VAR_11);






 if (VAR_15->use_polling) {
  VAR_12 = FUNC_1((unsigned long)VAR_9->dev_base + VAR_6);
  VAR_12 = FUNC_1((unsigned long)VAR_9->dev_base + VAR_6);
 }

 VAR_12 = FUNC_1((unsigned long)VAR_9->dev_base + VAR_6);

 do {
  VAR_14 = VAR_8;
  if (VAR_12 & VAR_0) {
   if (VAR_10 == VAR_0)
    break;
  } else {

   if (VAR_12 & VAR_2) {
    FUNC_2("mg_wait", VAR_12, VAR_9);
    break;
   }

   if (VAR_10 == VAR_7)
    if (FUNC_0(VAR_12))
     break;

   if (VAR_10 == VAR_1)
    if (VAR_12 & VAR_1)
     break;
  }
  if (!VAR_11) {
   FUNC_2("not ready", VAR_12, VAR_9);
   return VAR_3;
  }

  VAR_12 = FUNC_1((unsigned long)VAR_9->dev_base + VAR_6);
 } while (FUNC_5(VAR_14, VAR_13));

 if (FUNC_4(VAR_14, VAR_13) && VAR_11)
  VAR_9->error = VAR_5;

 return VAR_9->error;
}
