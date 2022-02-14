
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void** tsrow; int row; } ;
struct TYPE_6__ {TYPE_1__ res; } ;
typedef TYPE_1__ SSqlRes ;
typedef TYPE_2__ SSqlObj ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void **FUNC_1(SSqlObj *VAR_0) {
  FUNC_0(VAR_0);

  SSqlRes *VAR_1 = &VAR_0->res;
  VAR_1->row++;

  return VAR_1->tsrow;
}
