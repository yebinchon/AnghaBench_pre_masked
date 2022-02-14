
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ type; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,struct scsi_device*,char*) ;
 struct scsi_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_3)
{
 struct scsi_device *VAR_4 = FUNC_1(VAR_3);
 int VAR_5 = -VAR_0;

 if (VAR_4->type != VAR_2)
  goto out;

 VAR_5 = 0;
 FUNC_0(VAR_1, VAR_4, "Attached Enclosure device\n");

 out:
 return VAR_5;
}
