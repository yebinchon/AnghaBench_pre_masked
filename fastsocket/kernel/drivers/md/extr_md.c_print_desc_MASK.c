
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; int raid_disk; int minor; int major; int number; } ;
typedef TYPE_1__ mdp_disk_t ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(mdp_disk_t *VAR_0)
{
 FUNC_0(" DISK<N:%d,(%d,%d),R:%d,S:%d>\n", VAR_0->number,
  VAR_0->major,VAR_0->minor,VAR_0->raid_disk,VAR_0->state);
}
