
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int queue_depth; int type; scalar_t__ tagged_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct scsi_device*,int ,int) ;
 int FUNC_2 (int ,struct scsi_device*,char*,int,char*,char*) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_3(struct scsi_device *VAR_9)
{
 int VAR_10, VAR_11;
 char *VAR_12, *VAR_13;

 VAR_11 = VAR_1;
 VAR_10 = VAR_7;

 if (FUNC_0(VAR_9->type) && VAR_9->tagged_supported) {
  if (VAR_8 == VAR_5) {
   FUNC_1(VAR_9, VAR_3, VAR_10);
   VAR_12 = ", simple tags";
  } else if (VAR_8 == VAR_4) {
   FUNC_1(VAR_9, VAR_2, VAR_10);
   VAR_12 = ", ordered tags";
  } else {
   FUNC_1(VAR_9, 0, VAR_10);
   VAR_12 = ", no tags";
  }
 } else if (FUNC_0(VAR_9->type) && VAR_6) {
  FUNC_1(VAR_9, 0, VAR_10);
  VAR_12 = ", untagged";
 } else {
  FUNC_1(VAR_9, 0, VAR_11);
  VAR_12 = "";
 }

 if (FUNC_0(VAR_9->type) && VAR_6 && VAR_9->queue_depth > 2)
  VAR_13 = ", sorted";
 else if (FUNC_0(VAR_9->type))
  VAR_13 = ", unsorted";
 else
  VAR_13 = "";

 FUNC_2(VAR_0, VAR_9,
  "cmds/lun %d%s%s.\n",
        VAR_9->queue_depth, VAR_13, VAR_12);

 return 0;
}
