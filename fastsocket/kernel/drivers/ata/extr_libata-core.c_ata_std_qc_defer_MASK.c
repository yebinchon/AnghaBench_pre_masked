
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ protocol; } ;
struct ata_queued_cmd {TYPE_2__ tf; TYPE_1__* dev; } ;
struct ata_link {int sactive; int active_tag; } ;
struct TYPE_3__ {struct ata_link* link; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct ata_queued_cmd *VAR_2)
{
 struct ata_link *VAR_3 = VAR_2->dev->link;

 if (VAR_2->tf.protocol == VAR_1) {
  if (!FUNC_0(VAR_3->active_tag))
   return 0;
 } else {
  if (!FUNC_0(VAR_3->active_tag) && !VAR_3->sactive)
   return 0;
 }

 return VAR_0;
}
