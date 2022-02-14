
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {int device; TYPE_2__* ap; struct ata_eh_context eh_context; } ;
struct TYPE_4__ {int pflags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ata_link*,int ,char*,...) ;
 int VAR_6 ;
 unsigned long* FUNC_2 (struct ata_eh_context*) ;
 int FUNC_3 (struct ata_link*,int ,unsigned long,int *,int *) ;
 int FUNC_4 (struct ata_link*,unsigned long const*,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct ata_link *VAR_7, unsigned int *VAR_8,
   unsigned long VAR_9)
{
 struct ata_eh_context *VAR_10 = &VAR_7->eh_context;




 if (!(VAR_7->ap->pflags & VAR_1) &&
     !FUNC_0(VAR_7->device))
  FUNC_3(VAR_7, VAR_6, VAR_9,
        ((void*)0), ((void*)0));
 else {
  const unsigned long *VAR_11 = FUNC_2(VAR_10);
  int VAR_12;

  if (!(VAR_10->i.flags & VAR_0))
   FUNC_1(VAR_7, VAR_4, "nv: skipping "
     "hardreset on occupied port\n");


  VAR_12 = FUNC_4(VAR_7, VAR_11, VAR_9);

  if (VAR_12 && VAR_12 != -VAR_3)
   FUNC_1(VAR_7, VAR_5, "failed to resume "
     "link (errno=%d)\n", VAR_12);
 }


 return -VAR_2;
}
