
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_port {int flags; TYPE_2__* scsi_host; } ;
struct ata_device {int horkage; int id; int flags; TYPE_1__* link; } ;
struct TYPE_4__ {int can_queue; } ;
struct TYPE_3__ {struct ata_port* ap; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ata_device*,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (struct ata_device*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (char*,size_t,char*,...) ;

__attribute__((used)) static int FUNC_7(struct ata_device *VAR_11,
          char *VAR_12, size_t VAR_13)
{
 struct ata_port *VAR_14 = VAR_11->link->ap;
 int VAR_15 = 0, VAR_16 = FUNC_4(VAR_11->id);
 unsigned int VAR_17;
 char *VAR_18 = "";

 if (!FUNC_3(VAR_11->id)) {
  VAR_12[0] = '\0';
  return 0;
 }
 if (VAR_11->horkage & VAR_5) {
  FUNC_6(VAR_12, VAR_13, "NCQ (not used)");
  return 0;
 }
 if (VAR_14->flags & VAR_3) {
  VAR_15 = FUNC_5(VAR_14->scsi_host->can_queue, VAR_6 - 1);
  VAR_11->flags |= VAR_1;
 }

 if (!(VAR_11->horkage & VAR_4) &&
  (VAR_14->flags & VAR_2) &&
  FUNC_2(VAR_11->id)) {
  VAR_17 = FUNC_1(VAR_11, VAR_10,
   VAR_9);
  if (VAR_17) {
   FUNC_0(VAR_11, VAR_8, "failed to enable AA"
    "(error_mask=0x%x)\n", VAR_17);
   if (VAR_17 != VAR_0) {
    VAR_11->horkage |= VAR_4;
    return -VAR_7;
   }
  } else
   VAR_18 = ", AA";
 }

 if (VAR_15 >= VAR_16)
  FUNC_6(VAR_12, VAR_13, "NCQ (depth %d)%s", VAR_16, VAR_18);
 else
  FUNC_6(VAR_12, VAR_13, "NCQ (depth %d/%d)%s", VAR_15,
   VAR_16, VAR_18);
 return 0;
}
