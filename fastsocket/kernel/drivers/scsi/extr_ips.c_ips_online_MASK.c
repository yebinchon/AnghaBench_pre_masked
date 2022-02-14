
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t target_id; int basic_status; } ;
typedef TYPE_2__ ips_scb_t ;
struct TYPE_9__ {TYPE_4__* logical_drive_info; } ;
typedef TYPE_3__ ips_ha_t ;
struct TYPE_10__ {TYPE_1__* drive_info; } ;
struct TYPE_7__ {scalar_t__ state; } ;
typedef int IPS_LD_INFO ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int
FUNC_2(ips_ha_t * VAR_6, ips_scb_t * VAR_7)
{
 FUNC_0("ips_online", 1);

 if (VAR_7->target_id >= VAR_5)
  return (0);

 if ((VAR_7->basic_status & VAR_0) > 1) {
  FUNC_1(VAR_6->logical_drive_info, 0, sizeof (IPS_LD_INFO));
  return (0);
 }

 if (VAR_6->logical_drive_info->drive_info[VAR_7->target_id].state !=
     VAR_3
     && VAR_6->logical_drive_info->drive_info[VAR_7->target_id].state !=
     VAR_2
     && VAR_6->logical_drive_info->drive_info[VAR_7->target_id].state !=
     VAR_1
     && VAR_6->logical_drive_info->drive_info[VAR_7->target_id].state !=
     VAR_4)
  return (1);
 else
  return (0);
}
