
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {int use_10_for_rw; int use_10_for_ms; int max_device_blocked; } ;



__attribute__((used)) static void FUNC_0(struct scsi_device *VAR_0)
{
 VAR_0->use_10_for_rw = 1;
 VAR_0->use_10_for_ms = 1;






 VAR_0->max_device_blocked = 1;
}
