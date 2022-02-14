
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_iso_context {int type; int channel; int speed; size_t header_size; void* callback_data; int callback; struct fw_card* card; } ;
struct fw_card {TYPE_1__* driver; } ;
typedef int fw_iso_callback_t ;
struct TYPE_2__ {struct fw_iso_context* (* allocate_iso_context ) (struct fw_card*,int,int,size_t) ;} ;


 scalar_t__ FUNC_0 (struct fw_iso_context*) ;
 struct fw_iso_context* FUNC_1 (struct fw_card*,int,int,size_t) ;

struct fw_iso_context *FUNC_2(struct fw_card *VAR_0,
  int VAR_1, int VAR_2, int VAR_3, size_t VAR_4,
  fw_iso_callback_t VAR_5, void *VAR_6)
{
 struct fw_iso_context *VAR_7;

 VAR_7 = VAR_0->driver->allocate_iso_context(VAR_0,
       VAR_1, VAR_2, VAR_4);
 if (FUNC_0(VAR_7))
  return VAR_7;

 VAR_7->card = VAR_0;
 VAR_7->type = VAR_1;
 VAR_7->channel = VAR_2;
 VAR_7->speed = VAR_3;
 VAR_7->header_size = VAR_4;
 VAR_7->callback = VAR_5;
 VAR_7->callback_data = VAR_6;

 return VAR_7;
}
