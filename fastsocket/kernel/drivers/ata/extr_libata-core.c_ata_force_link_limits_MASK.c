
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_link {int pmp; int hw_sata_spd_limit; int flags; TYPE_1__* ap; } ;
struct TYPE_4__ {int spd_limit; int lflags; int name; } ;
struct ata_force_ent {int port; int device; TYPE_2__ param; } ;
struct TYPE_3__ {int print_id; } ;


 int VAR_0 ;
 struct ata_force_ent* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ata_link*) ;
 int FUNC_1 (struct ata_link*,int ,char*,int,...) ;

__attribute__((used)) static void FUNC_2(struct ata_link *VAR_3)
{
 bool VAR_4 = 0;
 int VAR_5 = VAR_3->pmp;
 int VAR_6;

 if (FUNC_0(VAR_3))
  VAR_5 += 15;

 for (VAR_6 = VAR_2 - 1; VAR_6 >= 0; VAR_6--) {
  const struct ata_force_ent *VAR_7 = &VAR_1[VAR_6];

  if (VAR_7->port != -1 && VAR_7->port != VAR_3->ap->print_id)
   continue;

  if (VAR_7->device != -1 && VAR_7->device != VAR_5)
   continue;


  if (!VAR_4 && VAR_7->param.spd_limit) {
   VAR_3->hw_sata_spd_limit = (1 << VAR_7->param.spd_limit) - 1;
   FUNC_1(VAR_3, VAR_0,
     "FORCE: PHY spd limit set to %s\n",
     VAR_7->param.name);
   VAR_4 = 1;
  }


  if (VAR_7->param.lflags) {
   VAR_3->flags |= VAR_7->param.lflags;
   FUNC_1(VAR_3, VAR_0,
     "FORCE: link flag 0x%x forced -> 0x%x\n",
     VAR_7->param.lflags, VAR_3->flags);
  }
 }
}
