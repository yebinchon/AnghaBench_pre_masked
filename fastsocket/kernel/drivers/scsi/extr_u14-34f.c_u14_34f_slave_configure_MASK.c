
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; int type; scalar_t__ tagged_supported; struct Scsi_Host* host; } ;
struct hostdata {int board_number; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct scsi_device*,int ,int) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int,char*,char*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_10) {
   int VAR_11, VAR_12, VAR_13;
   char *VAR_14, *VAR_15;
   struct Scsi_Host *VAR_16 = VAR_10->host;

   VAR_11 = ((struct hostdata *) VAR_16->hostdata)->board_number;

   VAR_13 = VAR_2;
   VAR_12 = VAR_8;

   if (FUNC_0(VAR_10->type) && VAR_10->tagged_supported)

      if (VAR_9 == VAR_6) {
         FUNC_1(VAR_10, VAR_4, VAR_12);
         VAR_14 = ", simple tags";
         }
      else if (VAR_9 == VAR_5) {
         FUNC_1(VAR_10, VAR_3, VAR_12);
         VAR_14 = ", ordered tags";
         }
      else {
         FUNC_1(VAR_10, 0, VAR_12);
         VAR_14 = ", no tags";
         }

   else if (FUNC_0(VAR_10->type) && VAR_7) {
      FUNC_1(VAR_10, 0, VAR_12);
      VAR_14 = ", untagged";
      }

   else {
      FUNC_1(VAR_10, 0, VAR_13);
      VAR_14 = "";
      }

   if (FUNC_0(VAR_10->type) && VAR_7 && VAR_10->queue_depth > 2)
      VAR_15 = ", sorted";
   else if (FUNC_0(VAR_10->type))
      VAR_15 = ", unsorted";
   else
      VAR_15 = "";

   FUNC_2(VAR_1, VAR_10, "cmds/lun %d%s%s.\n",
          VAR_10->queue_depth, VAR_15, VAR_14);

   return VAR_0;
}
