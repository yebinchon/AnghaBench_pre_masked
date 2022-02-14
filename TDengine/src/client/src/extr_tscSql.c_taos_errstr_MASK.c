
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int8_t ;
struct TYPE_8__ {TYPE_3__* pSql; struct TYPE_8__* signature; } ;
struct TYPE_6__ {char* payload; } ;
struct TYPE_5__ {unsigned char code; } ;
struct TYPE_7__ {TYPE_2__ cmd; TYPE_1__ res; } ;
typedef int TAOS ;
typedef TYPE_4__ STscObj ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 char** VAR_3 ;

char *FUNC_3(TAOS *VAR_4) {
  STscObj * VAR_5 = (STscObj *)VAR_4;
  unsigned char VAR_6;
  char VAR_7[256] = {0};

  if (VAR_5 == ((void*)0) || VAR_5->signature != VAR_5) return VAR_3[VAR_2];

  if ((int8_t)(VAR_5->pSql->res.code) == -1)
    VAR_6 = VAR_1;
  else
    VAR_6 = VAR_5->pSql->res.code;

  if (VAR_6 == VAR_0) {
    FUNC_0(VAR_7, FUNC_2(VAR_7), "invalid SQL: %s", VAR_5->pSql->cmd.payload);
    FUNC_1(VAR_5->pSql->cmd.payload, VAR_7);
    return VAR_5->pSql->cmd.payload;
  } else {
    return VAR_3[VAR_6];
  }
}
