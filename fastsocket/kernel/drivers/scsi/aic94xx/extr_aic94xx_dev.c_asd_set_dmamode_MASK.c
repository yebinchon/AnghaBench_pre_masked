
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef unsigned long long u32 ;
struct TYPE_8__ {TYPE_3__* ap; } ;
struct domain_device {scalar_t__ dev_type; TYPE_4__ sata_dev; scalar_t__ lldd_dev; TYPE_2__* port; } ;
struct ata_device {int flags; int id; } ;
struct asd_ha_struct {int dummy; } ;
struct TYPE_7__ {int lock; } ;
struct TYPE_6__ {TYPE_1__* ha; } ;
struct TYPE_5__ {struct asd_ha_struct* lldd_ha; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct asd_ha_struct*,int,int ,unsigned long long) ;
 int FUNC_1 (struct asd_ha_struct*,int,int ,unsigned long long) ;
 scalar_t__ FUNC_2 (struct domain_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 unsigned long long FUNC_4 (int ) ;
 struct ata_device* FUNC_5 (struct domain_device*) ;
 int FUNC_6 (int ,unsigned long) ;
 int FUNC_7 (int ,unsigned long) ;

void FUNC_8(struct domain_device *VAR_5)
{
 struct asd_ha_struct *VAR_6 = VAR_5->port->ha->lldd_ha;
 struct ata_device *VAR_7 = FUNC_5(VAR_5);
 int VAR_8 = (int) (unsigned long) VAR_5->lldd_dev;
 u32 VAR_9 = 0;

 if (VAR_5->dev_type == VAR_2 || VAR_5->dev_type == VAR_3) {
  if (FUNC_3(VAR_7->id))
   VAR_9 = FUNC_4(VAR_7->id);
  FUNC_1(VAR_6, VAR_8, VAR_4,
     (1ULL<<VAR_9)-1);
  FUNC_0(VAR_6, VAR_8, VAR_1, VAR_9);
 }

 if (VAR_9 > 0)
  if (FUNC_2(VAR_5) != 0) {
   unsigned long VAR_10;

   FUNC_6(VAR_5->sata_dev.ap->lock, VAR_10);
   VAR_7->flags |= VAR_0;
   FUNC_7(VAR_5->sata_dev.ap->lock, VAR_10);
  }
}
