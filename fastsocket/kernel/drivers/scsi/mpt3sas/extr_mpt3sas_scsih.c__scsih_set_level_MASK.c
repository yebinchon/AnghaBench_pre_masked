
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_device {int sdev_gendev; } ;
typedef enum raid_level { ____Placeholder_raid_level } raid_level ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_1(struct scsi_device *VAR_6, u8 VAR_7)
{
 enum raid_level VAR_8 = VAR_4;

 switch (VAR_7) {
 case 131:
  VAR_8 = VAR_0;
  break;
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 case 130:
  VAR_8 = VAR_1;
  break;
 }

 FUNC_0(VAR_5, &VAR_6->sdev_gendev, VAR_8);
}
