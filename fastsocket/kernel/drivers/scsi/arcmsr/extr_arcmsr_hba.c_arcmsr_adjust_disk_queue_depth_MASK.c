
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct scsi_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_4,
       int VAR_5, int VAR_6)
{
 if (VAR_6 != VAR_3)
  return -VAR_1;

 if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;
 FUNC_0(VAR_4, VAR_2, VAR_5);
 return VAR_5;
}
