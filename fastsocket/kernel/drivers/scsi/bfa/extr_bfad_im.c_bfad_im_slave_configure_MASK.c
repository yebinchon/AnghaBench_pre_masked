
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ tagged_supported; } ;


 int VAR_0 ;
 int FUNC_0 (struct scsi_device*,int ) ;
 int FUNC_1 (struct scsi_device*,int ) ;

__attribute__((used)) static int
FUNC_2(struct scsi_device *VAR_1)
{
 if (VAR_1->tagged_supported)
  FUNC_0(VAR_1, VAR_0);
 else
  FUNC_1(VAR_1, VAR_0);

 return 0;
}
