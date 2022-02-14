
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int tries_buf ;
struct ata_taskfile {size_t protocol; int command; int feature; int device; int hob_lbah; int hob_lbam; int hob_lbal; int hob_nsect; int hob_feature; int lbah; int lbam; int lbal; int nsect; } ;
struct ata_queued_cmd {int flags; scalar_t__ err_mask; int* cdb; scalar_t__ dma_dir; int nbytes; int dev; int tag; scalar_t__ scsicmd; struct ata_taskfile tf; struct ata_taskfile result_tf; } ;
struct ata_port {int pflags; scalar_t__ eh_tries; } ;
struct TYPE_2__ {int flags; char* desc; int serror; int action; int err_mask; scalar_t__ dev; } ;
struct ata_eh_context {TYPE_1__ i; } ;
struct ata_link {int sactive; struct ata_eh_context eh_context; struct ata_port* ap; } ;
typedef int data_buf ;
typedef int cdb_buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;


 scalar_t__ VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 struct ata_queued_cmd* FUNC_0 (struct ata_port*,int) ;
 struct ata_link* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (scalar_t__) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (struct ata_link*,int ,char*,char const*,...) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*,int,char*,...) ;

__attribute__((used)) static void FUNC_10(struct ata_link *VAR_38)
{
 struct ata_port *VAR_39 = VAR_38->ap;
 struct ata_eh_context *VAR_40 = &VAR_38->eh_context;
 const char *VAR_41, *VAR_42;
 char VAR_43[6];
 int VAR_44, VAR_45 = 0;

 if (VAR_40->i.flags & VAR_8)
  return;

 VAR_42 = ((void*)0);
 if (VAR_40->i.desc[0] != '\0')
  VAR_42 = VAR_40->i.desc;

 for (VAR_44 = 0; VAR_44 < VAR_13; VAR_44++) {
  struct ata_queued_cmd *VAR_46 = FUNC_0(VAR_39, VAR_44);

  if (!(VAR_46->flags & VAR_15) ||
      FUNC_1(VAR_46->dev) != VAR_38 ||
      ((VAR_46->flags & VAR_16) &&
       VAR_46->err_mask == VAR_0))
   continue;
  if (VAR_46->flags & VAR_17 && !VAR_46->err_mask)
   continue;

  VAR_45++;
 }

 if (!VAR_45 && !VAR_40->i.err_mask)
  return;

 VAR_41 = "";
 if (VAR_39->pflags & VAR_14)
  VAR_41 = " frozen";

 FUNC_7(VAR_43, 0, sizeof(VAR_43));
 if (VAR_39->eh_tries < VAR_9)
  FUNC_9(VAR_43, sizeof(VAR_43) - 1, " t%d",
    VAR_39->eh_tries);

 if (VAR_40->i.dev) {
  FUNC_2(VAR_40->i.dev, VAR_20, "exception Emask 0x%x "
          "SAct 0x%x SErr 0x%x action 0x%x%s%s\n",
          VAR_40->i.err_mask, VAR_38->sactive, VAR_40->i.serror,
          VAR_40->i.action, VAR_41, VAR_43);
  if (VAR_42)
   FUNC_2(VAR_40->i.dev, VAR_20, "%s\n", VAR_42);
 } else {
  FUNC_6(VAR_38, VAR_20, "exception Emask 0x%x "
    "SAct 0x%x SErr 0x%x action 0x%x%s%s\n",
    VAR_40->i.err_mask, VAR_38->sactive, VAR_40->i.serror,
    VAR_40->i.action, VAR_41, VAR_43);
  if (VAR_42)
   FUNC_6(VAR_38, VAR_20, "%s\n", VAR_42);
 }
 for (VAR_44 = 0; VAR_44 < VAR_13; VAR_44++) {
  struct ata_queued_cmd *VAR_47 = FUNC_0(VAR_39, VAR_44);
  struct ata_taskfile *VAR_48 = &VAR_47->tf, *VAR_49 = &VAR_47->result_tf;
  const u8 *VAR_50 = VAR_47->cdb;
  char VAR_51[20] = "";
  char VAR_52[70] = "";

  if (!(VAR_47->flags & VAR_15) ||
      FUNC_1(VAR_47->dev) != VAR_38 || !VAR_47->err_mask)
   continue;

  if (VAR_47->dma_dir != VAR_19) {
   static const char *VAR_53[] = {
    [130] = "bidi",
    [128] = "out",
    [129] = "in",
   };
   static const char *VAR_54[] = {
    [131] = "pio",
    [133] = "dma",
    [132] = "ncq",
    [134] = "pio",
    [135] = "dma",
   };

   FUNC_9(VAR_51, sizeof(VAR_51), " %s %u %s",
     VAR_54[VAR_47->tf.protocol], VAR_47->nbytes,
     VAR_53[VAR_47->dma_dir]);
  }

  if (FUNC_5(VAR_47->tf.protocol)) {
   if (VAR_47->scsicmd)
    FUNC_8(VAR_47->scsicmd);
   else
    FUNC_9(VAR_52, sizeof(VAR_52),
     "cdb %02x %02x %02x %02x %02x %02x %02x %02x  "
     "%02x %02x %02x %02x %02x %02x %02x %02x\n         ",
     VAR_50[0], VAR_50[1], VAR_50[2], VAR_50[3],
     VAR_50[4], VAR_50[5], VAR_50[6], VAR_50[7],
     VAR_50[8], VAR_50[9], VAR_50[10], VAR_50[11],
     VAR_50[12], VAR_50[13], VAR_50[14], VAR_50[15]);
  } else {
   const char *VAR_55 = FUNC_4(VAR_48->command);
   if (VAR_55)
    FUNC_2(VAR_47->dev, VAR_20,
     "failed command: %s\n", VAR_55);
  }

  FUNC_2(VAR_47->dev, VAR_20,
   "cmd %02x/%02x:%02x:%02x:%02x:%02x/%02x:%02x:%02x:%02x:%02x/%02x "
   "tag %d%s\n         %s"
   "res %02x/%02x:%02x:%02x:%02x:%02x/%02x:%02x:%02x:%02x:%02x/%02x "
   "Emask 0x%x (%s)%s\n",
   VAR_48->command, VAR_48->feature, VAR_48->nsect,
   VAR_48->lbal, VAR_48->lbam, VAR_48->lbah,
   VAR_48->hob_feature, VAR_48->hob_nsect,
   VAR_48->hob_lbal, VAR_48->hob_lbam, VAR_48->hob_lbah,
   VAR_48->device, VAR_47->tag, VAR_51, VAR_52,
   VAR_49->command, VAR_49->feature, VAR_49->nsect,
   VAR_49->lbal, VAR_49->lbam, VAR_49->lbah,
   VAR_49->hob_feature, VAR_49->hob_nsect,
   VAR_49->hob_lbal, VAR_49->hob_lbam, VAR_49->hob_lbah,
   VAR_49->device, VAR_47->err_mask, FUNC_3(VAR_47->err_mask),
   VAR_47->err_mask & VAR_1 ? " <F>" : "");
 }
}
