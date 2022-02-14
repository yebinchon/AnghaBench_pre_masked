
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_port {struct ata_link* pmp_link; } ;
struct TYPE_2__ {int action; int probe_mask; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {scalar_t__ flags; struct ata_eh_context eh_context; } ;
typedef int pmp_link ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ata_port*,struct ata_link*,int) ;
 struct ata_link* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct ata_port *VAR_5, int VAR_6)
{
 struct ata_link *VAR_7 = VAR_5->pmp_link;
 int VAR_8;

 if (!VAR_7) {
  VAR_7 = FUNC_1(sizeof(VAR_7[0]) * VAR_4,
       VAR_3);
  if (!VAR_7)
   return -VAR_2;

  for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
   FUNC_0(VAR_5, &VAR_7[VAR_8], VAR_8);

  VAR_5->pmp_link = VAR_7;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  struct ata_link *VAR_9 = &VAR_7[VAR_8];
  struct ata_eh_context *VAR_10 = &VAR_9->eh_context;

  VAR_9->flags = 0;
  VAR_10->i.probe_mask |= VAR_0;
  VAR_10->i.action |= VAR_1;
 }

 return 0;
}
