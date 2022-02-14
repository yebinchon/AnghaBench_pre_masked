
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; scalar_t__ mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_7__ {char** pzErrMsg; int rc; TYPE_1__* db; } ;
typedef TYPE_2__ InitData ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 char* FUNC_1 (TYPE_1__*,char*,char const*,...) ;

__attribute__((used)) static void FUNC_2(
  InitData *VAR_3,
  const char *VAR_4,
  const char *VAR_5
){
  sqlite3 *VAR_6 = VAR_3->db;
  if( !VAR_6->mallocFailed && (VAR_6->flags & VAR_2)==0 ){
    char *VAR_7;
    if( VAR_4==0 ) VAR_4 = "?";
    VAR_7 = FUNC_1(VAR_6, "malformed database schema (%s)", VAR_4);
    if( VAR_5 && VAR_5[0] ) VAR_7 = FUNC_1(VAR_6, "%z - %s", VAR_7, VAR_5);
    FUNC_0(VAR_6, *VAR_3->pzErrMsg);
    *VAR_3->pzErrMsg = VAR_7;
  }
  VAR_3->rc = VAR_6->mallocFailed ? VAR_1 : VAR_0;
}
