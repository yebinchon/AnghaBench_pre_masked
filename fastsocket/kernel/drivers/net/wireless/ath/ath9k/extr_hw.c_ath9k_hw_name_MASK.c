
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int macRev; int analog5GhzRev; int phyRev; int macVersion; } ;
struct ath_hw {TYPE_1__ hw_version; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ath_hw*) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,size_t,char*,char*,int,...) ;

void FUNC_4(struct ath_hw *VAR_1, char *VAR_2, size_t VAR_3)
{
 int VAR_4;


 if (FUNC_0(VAR_1)) {
  VAR_4 = FUNC_3(VAR_2, VAR_3,
          "Atheros AR%s Rev:%x",
          FUNC_1(VAR_1->hw_version.macVersion),
          VAR_1->hw_version.macRev);
 }
 else {
  VAR_4 = FUNC_3(VAR_2, VAR_3,
          "Atheros AR%s MAC/BB Rev:%x AR%s RF Rev:%x",
          FUNC_1(VAR_1->hw_version.macVersion),
          VAR_1->hw_version.macRev,
          FUNC_2((VAR_1->hw_version.analog5GhzRev &
      VAR_0)),
          VAR_1->hw_version.phyRev);
 }

 VAR_2[VAR_4] = '\0';
}
