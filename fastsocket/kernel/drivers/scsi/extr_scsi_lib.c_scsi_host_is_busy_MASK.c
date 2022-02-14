
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Scsi_Host {scalar_t__ can_queue; scalar_t__ host_busy; scalar_t__ host_self_blocked; scalar_t__ host_blocked; } ;



__attribute__((used)) static inline int FUNC_0(struct Scsi_Host *VAR_0)
{
 if ((VAR_0->can_queue > 0 && VAR_0->host_busy >= VAR_0->can_queue) ||
     VAR_0->host_blocked || VAR_0->host_self_blocked)
  return 1;

 return 0;
}
