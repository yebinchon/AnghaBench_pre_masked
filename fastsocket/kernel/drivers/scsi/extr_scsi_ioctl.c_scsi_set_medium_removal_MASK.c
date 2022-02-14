
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int locked; int lockable; int removable; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 int FUNC_0 (struct scsi_device*,char*,int ,int ) ;

int FUNC_1(struct scsi_device *VAR_5, char VAR_6)
{
 char VAR_7[VAR_2];
 int VAR_8;

 if (!VAR_5->removable || !VAR_5->lockable)
        return 0;

 VAR_7[0] = VAR_0;
 VAR_7[1] = 0;
 VAR_7[2] = 0;
 VAR_7[3] = 0;
 VAR_7[4] = VAR_6;
 VAR_7[5] = 0;

 VAR_8 = FUNC_0(VAR_5, VAR_7,
   VAR_1, VAR_3);
 if (VAR_8 == 0)
  VAR_5->locked = (VAR_6 == VAR_4);
 return VAR_8;
}
