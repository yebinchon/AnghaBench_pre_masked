
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int tagged_supported; } ;



__attribute__((used)) static int FUNC_0(struct scsi_device *VAR_0)
{
 VAR_0->tagged_supported = 1;
 return 0;
}
