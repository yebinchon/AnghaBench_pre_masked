
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ n; } ;
struct TYPE_8__ {TYPE_1__* pCreateTableInfo; } ;
struct TYPE_7__ {int existCheck; TYPE_3__ name; } ;
typedef TYPE_2__ SSqlInfo ;
typedef TYPE_3__ SSQLToken ;



void FUNC_0(SSqlInfo *VAR_0, SSQLToken *VAR_1, SSQLToken *VAR_2) {
  VAR_0->pCreateTableInfo->name = *VAR_1;
  VAR_0->pCreateTableInfo->existCheck = (VAR_2->n != 0);
}
