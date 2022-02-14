
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ tagged_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct scsi_device*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct scsi_device *VAR_2)
{
 if (VAR_2->tagged_supported)
  FUNC_0(VAR_2, VAR_0, VAR_1);
 else
  FUNC_0(VAR_2, 0, 1);
 return 0;
}
