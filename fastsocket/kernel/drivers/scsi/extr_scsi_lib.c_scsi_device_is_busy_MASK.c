
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_device {scalar_t__ device_busy; scalar_t__ queue_depth; scalar_t__ device_blocked; } ;



__attribute__((used)) static inline int FUNC_0(struct scsi_device *VAR_0)
{
 if (VAR_0->device_busy >= VAR_0->queue_depth || VAR_0->device_blocked)
  return 1;

 return 0;
}
