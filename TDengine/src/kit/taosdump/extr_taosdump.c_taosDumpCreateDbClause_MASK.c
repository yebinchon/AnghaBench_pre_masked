
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int replica; int days; int keep; int tables; int rows; int cache; int ablocks; int tblocks; int ctime; int clog; int comp; } ;
typedef TYPE_1__ SDbInfo ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char*,char*,...) ;

void FUNC_2(SDbInfo *VAR_1, bool VAR_2, FILE *VAR_3) {
  char *VAR_4 = VAR_0;

  VAR_4 += FUNC_1(VAR_4, "CREATE DATABASE IF NOT EXISTS %s", VAR_1->name);
  if (VAR_2) {
    VAR_4 += FUNC_1(VAR_4,
        " REPLICA %d DAYS %d KEEP %d TABLES %d ROWS %d CACHE %d ABLOCKS %d TBLOCKS %d CTIME %d CLOG %d COMP %d",
        VAR_1->replica, VAR_1->days, VAR_1->keep, VAR_1->tables, VAR_1->rows, VAR_1->cache,
        VAR_1->ablocks, VAR_1->tblocks, VAR_1->ctime, VAR_1->clog, VAR_1->comp);
  }

  FUNC_0(VAR_3, "%s\n\n", VAR_0);
}
