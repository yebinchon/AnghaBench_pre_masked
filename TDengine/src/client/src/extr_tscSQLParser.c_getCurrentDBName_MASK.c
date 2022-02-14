
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n; int z; } ;
struct TYPE_7__ {TYPE_1__* pTscObj; } ;
struct TYPE_6__ {int db; } ;
typedef TYPE_2__ SSqlObj ;
typedef TYPE_3__ SSQLToken ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(SSqlObj* VAR_0, SSQLToken* VAR_1) {
  VAR_1->z = VAR_0->pTscObj->db;
  VAR_1->n = FUNC_0(VAR_0->pTscObj->db);
}
