
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {TYPE_1__* pCreateTableInfo; int sqlType; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_2__ SSqlInfo ;
typedef int SSQLToken ;



void FUNC_0(SSqlInfo *VAR_0, void *VAR_1, SSQLToken *VAR_2, int32_t VAR_3) {
  VAR_0->sqlType = VAR_3;
  VAR_0->pCreateTableInfo = VAR_1;

  if (VAR_2 != ((void*)0)) {
    VAR_0->pCreateTableInfo->name = *VAR_2;
  }
}
