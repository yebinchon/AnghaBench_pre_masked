
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_iso_packet {int dummy; } ;
struct fw_iso_context {struct fw_card* card; } ;
struct fw_iso_buffer {int dummy; } ;
struct fw_card {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* queue_iso ) (struct fw_iso_context*,struct fw_iso_packet*,struct fw_iso_buffer*,unsigned long) ;} ;


 int FUNC_0 (struct fw_iso_context*,struct fw_iso_packet*,struct fw_iso_buffer*,unsigned long) ;

int FUNC_1(struct fw_iso_context *VAR_0,
    struct fw_iso_packet *VAR_1,
    struct fw_iso_buffer *VAR_2,
    unsigned long VAR_3)
{
 struct fw_card *VAR_4 = VAR_0->card;

 return VAR_4->driver->queue_iso(VAR_0, VAR_1, VAR_2, VAR_3);
}
