
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_5__ {scalar_t__ pm_type; } ;
struct TYPE_6__ {TYPE_1__ cur_ps; } ;
typedef TYPE_2__ bot_state_t ;
struct TYPE_7__ {scalar_t__ intermissiontime; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;

qboolean FUNC_0(bot_state_t *VAR_4) {

 if (VAR_2.intermissiontime) return VAR_3;
 return (VAR_4->cur_ps.pm_type == VAR_0 || VAR_4->cur_ps.pm_type == VAR_1);
}
