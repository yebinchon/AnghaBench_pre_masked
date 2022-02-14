
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sd; } ;
struct mddev {TYPE_1__ kobj; } ;
struct md_rdev {int raid_disk; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static inline void FUNC_3(struct mddev *VAR_1, struct md_rdev *VAR_2)
{
 char VAR_3[20];
 if (!FUNC_2(VAR_0, &VAR_2->flags) && VAR_1->kobj.sd) {
  FUNC_0(VAR_3, "rd%d", VAR_2->raid_disk);
  FUNC_1(&VAR_1->kobj, VAR_3);
 }
}
