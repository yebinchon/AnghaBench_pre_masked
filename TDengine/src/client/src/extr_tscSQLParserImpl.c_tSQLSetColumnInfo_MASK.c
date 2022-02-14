
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ n; int z; } ;
struct TYPE_6__ {int bytes; int type; scalar_t__* name; } ;
typedef TYPE_1__ TAOS_FIELD ;
typedef TYPE_2__ SSQLToken ;


 int FUNC_0 (scalar_t__*,int ,scalar_t__) ;

void FUNC_1(TAOS_FIELD *VAR_0, SSQLToken *VAR_1, TAOS_FIELD *VAR_2) {
  int32_t VAR_3 = sizeof(VAR_0->name) / sizeof(VAR_0->name[0]);

  if (VAR_1->n >= VAR_3) {
    VAR_1->n = VAR_3 - 1;
  }

  FUNC_0(VAR_0->name, VAR_1->z, VAR_1->n);
  VAR_0->name[VAR_1->n] = 0;

  VAR_0->type = VAR_2->type;
  VAR_0->bytes = VAR_2->bytes;
}
