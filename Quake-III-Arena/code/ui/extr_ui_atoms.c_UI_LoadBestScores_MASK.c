
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int postGameInfo_t ;
typedef int fileHandle_t ;
struct TYPE_2__ {int demoAvailable; } ;


 int FUNC_0 (char*,int,char*,char const*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int*,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char*,int *,int ) ;
 int FUNC_6 (int*,int,int ) ;
 TYPE_1__ VAR_4 ;

void FUNC_7(const char *VAR_5, int VAR_6) {
 char VAR_7[VAR_1];
 fileHandle_t VAR_8;
 postGameInfo_t VAR_9;
 FUNC_2(&VAR_9, 0, sizeof(postGameInfo_t));
 FUNC_0(VAR_7, VAR_1, "games/%s_%i.game", VAR_5, VAR_6);
 if (FUNC_5(VAR_7, &VAR_8, VAR_0) >= 0) {
  int VAR_10 = 0;
  FUNC_6(&VAR_10, sizeof(int), VAR_8);
  if (VAR_10 == sizeof(postGameInfo_t)) {
   FUNC_6(&VAR_9, sizeof(postGameInfo_t), VAR_8);
  }
  FUNC_4(VAR_8);
 }
 FUNC_1(&VAR_9, VAR_2);

 FUNC_0(VAR_7, VAR_1, "demos/%s_%d.dm_%d", VAR_5, VAR_6, (int)FUNC_3("protocol"));
 VAR_4.demoAvailable = VAR_2;
 if (FUNC_5(VAR_7, &VAR_8, VAR_0) >= 0) {
  VAR_4.demoAvailable = VAR_3;
  FUNC_4(VAR_8);
 }
}
