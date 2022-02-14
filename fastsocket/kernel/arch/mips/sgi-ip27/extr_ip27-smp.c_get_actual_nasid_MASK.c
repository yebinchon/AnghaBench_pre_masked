
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nasid_t ;
struct TYPE_7__ {int brd_nasid; } ;
typedef TYPE_2__ lboard_t ;
struct TYPE_6__ {int flags; int physid; } ;
struct TYPE_8__ {TYPE_1__ hub_info; } ;
typedef TYPE_3__ klhub_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static nasid_t FUNC_1(lboard_t *VAR_3)
{
 klhub_t *VAR_4;

 if (!VAR_3)
  return VAR_0;


 VAR_4 = (klhub_t *)FUNC_0(VAR_3, VAR_2);
 if (!VAR_4)
  return VAR_0;
 if (!(VAR_4->hub_info.flags & VAR_1))
  return VAR_4->hub_info.physid;
 else
  return VAR_3->brd_nasid;
}
