
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int zName; } ;
typedef TYPE_1__ Table ;
struct TYPE_11__ {char* zName; } ;
struct TYPE_10__ {int explain; int iSelectId; int pVdbe; int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (int ,char*,int ,char*,char*) ;
 int FUNC_3 (int ,int ,int ,int ,int ,char*,int ) ;

__attribute__((used)) static void FUNC_4(
  Parse *VAR_2,
  Table *VAR_3,
  Index *VAR_4
){
  if( VAR_2->explain==2 ){
    int VAR_5 = (VAR_4!=0 && (FUNC_0(VAR_3) || !FUNC_1(VAR_4)));
    char *VAR_6 = FUNC_2(VAR_2->db, "SCAN TABLE %s%s%s",
        VAR_3->zName,
        VAR_5 ? " USING COVERING INDEX " : "",
        VAR_5 ? VAR_4->zName : ""
    );
    FUNC_3(
        VAR_2->pVdbe, VAR_0, VAR_2->iSelectId, 0, 0, VAR_6, VAR_1
    );
  }
}
