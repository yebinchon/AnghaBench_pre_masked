
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {int dev; int scsi_level; } ;
struct device {int dummy; } ;
struct Scsi_Host {unsigned int this_id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct Scsi_Host* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 struct scsi_target* FUNC_2 (struct device*,unsigned int,unsigned int) ;
 int FUNC_3 (struct scsi_target*,unsigned int,int*,int *,int,int *) ;
 scalar_t__ FUNC_4 (struct scsi_target*,int,int) ;
 int FUNC_5 (struct scsi_target*,int,int ,int) ;
 int FUNC_6 (struct scsi_target*) ;

__attribute__((used)) static void FUNC_7(struct device *VAR_3, unsigned int VAR_4,
  unsigned int VAR_5, unsigned int VAR_6, int VAR_7)
{
 struct Scsi_Host *VAR_8 = FUNC_0(VAR_3);
 int VAR_9 = 0;
 int VAR_10;
 struct scsi_target *VAR_11;

 if (VAR_8->this_id == VAR_5)



  return;

 VAR_11 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (!VAR_11)
  return;

 if (VAR_6 != VAR_0) {



  FUNC_3(VAR_11, VAR_6, ((void*)0), ((void*)0), VAR_7, ((void*)0));
  goto out_reap;
 }





 VAR_10 = FUNC_3(VAR_11, 0, &VAR_9, ((void*)0), VAR_7, ((void*)0));
 if (VAR_10 == VAR_1 || VAR_10 == VAR_2) {
  if (FUNC_4(VAR_11, VAR_9, VAR_7) != 0)




   FUNC_5(VAR_11, VAR_9,
       VAR_11->scsi_level, VAR_7);
 }

 out_reap:


 FUNC_6(VAR_11);

 FUNC_1(&VAR_11->dev);
}
