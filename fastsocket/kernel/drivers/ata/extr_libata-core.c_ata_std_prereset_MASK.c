
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {int flags; } ;
struct TYPE_2__ {int action; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {struct ata_eh_context eh_context; struct ata_port* ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_link*,int ,char*,int) ;
 scalar_t__ FUNC_1 (struct ata_link*) ;
 unsigned long* FUNC_2 (struct ata_eh_context*) ;
 int FUNC_3 (struct ata_link*,unsigned long const*,unsigned long) ;

int FUNC_4(struct ata_link *VAR_5, unsigned long VAR_6)
{
 struct ata_port *VAR_7 = VAR_5->ap;
 struct ata_eh_context *VAR_8 = &VAR_5->eh_context;
 const unsigned long *VAR_9 = FUNC_2(VAR_8);
 int VAR_10;


 if (VAR_8->i.action & VAR_0)
  return 0;


 if (VAR_7->flags & VAR_2) {
  VAR_10 = FUNC_3(VAR_5, VAR_9, VAR_6);

  if (VAR_10 && VAR_10 != -VAR_3)
   FUNC_0(VAR_5, VAR_4, "failed to resume "
     "link for reset (errno=%d)\n", VAR_10);
 }


 if (FUNC_1(VAR_5))
  VAR_8->i.action &= ~VAR_1;

 return 0;
}
