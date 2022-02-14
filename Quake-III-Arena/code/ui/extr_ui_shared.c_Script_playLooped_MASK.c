
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int itemDef_t ;
struct TYPE_2__ {int (* startBackgroundTrack ) (char const*,char const*) ;int (* stopBackgroundTrack ) () ;} ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (char**,char const**) ;
 int FUNC_1 () ;
 int FUNC_2 (char const*,char const*) ;

void FUNC_3(itemDef_t *VAR_1, char **VAR_2) {
 const char *VAR_3;
 if (FUNC_0(VAR_2, &VAR_3)) {
  VAR_0->stopBackgroundTrack();
  VAR_0->startBackgroundTrack(VAR_3, VAR_3);
 }
}
