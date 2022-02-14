
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t guint ;
struct TYPE_4__ {size_t len; int ** pdata; } ;
typedef int MYSQL_FIELD ;
typedef TYPE_1__ GPtrArray ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(GPtrArray *VAR_1) {
 guint VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->len; VAR_2++) {
  MYSQL_FIELD *VAR_3 = VAR_1->pdata[VAR_2];

  if (VAR_3) FUNC_1(VAR_3);
 }

 FUNC_0(VAR_1, VAR_0);
}
