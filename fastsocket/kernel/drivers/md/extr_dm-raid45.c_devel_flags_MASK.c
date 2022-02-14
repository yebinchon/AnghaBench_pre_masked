
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct raid_set {TYPE_1__ io; } ;
typedef enum raid_set_flags { ____Placeholder_raid_set_flags } raid_set_flags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (struct raid_set*) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 scalar_t__ FUNC_4 (int,int *) ;
 scalar_t__ FUNC_5 (int,int *) ;
 scalar_t__ FUNC_6 (int,int *) ;

__attribute__((used)) static int FUNC_7(struct raid_set *VAR_3, int VAR_4, char **VAR_5,
         enum raid_set_flags VAR_6)
{
 size_t VAR_7;

 if (VAR_4 != 1)
  return -VAR_0;

 VAR_7 = FUNC_2(VAR_5[0]);
 if (VAR_7 < 2)
  VAR_7 = 2;

 if (!FUNC_3(VAR_5[0], "on", VAR_7))
  return FUNC_5(VAR_6, &VAR_3->io.flags) ? -VAR_1 : 0;
 else if (!FUNC_3(VAR_5[0], "off", VAR_7))
  return FUNC_4(VAR_6, &VAR_3->io.flags) ? 0 : -VAR_1;
 else if (!FUNC_3(VAR_5[0], "reset", VAR_7)) {
  if (VAR_6 == VAR_2) {
   if (FUNC_6(VAR_6, &VAR_3->io.flags)) {
    FUNC_1(VAR_3);
    return 0;
   } else
    return -VAR_1;
  } else {
   FUNC_0(VAR_6, &VAR_3->io.flags);
   return 0;
  }
 }

 return -VAR_0;
}
