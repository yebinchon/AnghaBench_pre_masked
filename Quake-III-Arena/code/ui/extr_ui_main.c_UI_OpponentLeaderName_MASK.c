
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* teamList; } ;
struct TYPE_3__ {char const** teamMembers; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static const char *FUNC_2() {
  int VAR_1 = FUNC_1(FUNC_0("ui_opponentName"));
 return VAR_0.teamList[VAR_1].teamMembers[0];
}
