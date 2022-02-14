
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int horkage_on; int horkage_off; int name; } ;
struct ata_force_ent {int port; int device; TYPE_2__ param; } ;
struct ata_device {int devno; int horkage; TYPE_3__* link; } ;
struct TYPE_6__ {int pmp; TYPE_1__* ap; } ;
struct TYPE_4__ {int print_id; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_device*,int ,char*,int ) ;
 struct ata_force_ent* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(struct ata_device *VAR_3)
{
 int VAR_4 = VAR_3->link->pmp + VAR_3->devno;
 int VAR_5 = VAR_4;
 int VAR_6;


 if (FUNC_1(VAR_3->link))
  VAR_5 += 15;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  const struct ata_force_ent *VAR_7 = &VAR_1[VAR_6];

  if (VAR_7->port != -1 && VAR_7->port != VAR_3->link->ap->print_id)
   continue;

  if (VAR_7->device != -1 && VAR_7->device != VAR_4 &&
      VAR_7->device != VAR_5)
   continue;

  if (!(~VAR_3->horkage & VAR_7->param.horkage_on) &&
      !(VAR_3->horkage & VAR_7->param.horkage_off))
   continue;

  VAR_3->horkage |= VAR_7->param.horkage_on;
  VAR_3->horkage &= ~VAR_7->param.horkage_off;

  FUNC_0(VAR_3, VAR_0,
   "FORCE: horkage modified (%s)\n", VAR_7->param.name);
 }
}
