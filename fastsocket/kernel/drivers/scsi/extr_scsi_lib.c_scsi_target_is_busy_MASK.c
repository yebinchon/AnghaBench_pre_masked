
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_target {scalar_t__ can_queue; scalar_t__ target_busy; scalar_t__ target_blocked; } ;



__attribute__((used)) static inline int FUNC_0(struct scsi_target *VAR_0)
{
 return ((VAR_0->can_queue > 0 &&
   VAR_0->target_busy >= VAR_0->can_queue) ||
   VAR_0->target_blocked);
}
