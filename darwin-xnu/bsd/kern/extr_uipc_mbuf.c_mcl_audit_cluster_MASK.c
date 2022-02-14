
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* obj_next; } ;
typedef TYPE_1__ mcache_obj_t ;
typedef int mcache_audit_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int ,size_t) ;
 int FUNC_1 (int ,void*,size_t) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_3(mcache_audit_t *VAR_2, void *VAR_3, size_t VAR_4, boolean_t VAR_5,
    boolean_t VAR_6)
{
 mcache_obj_t *VAR_7 = ((mcache_obj_t *)VAR_3)->obj_next;

 if (!VAR_5) {
  if (VAR_1) {
   FUNC_1(VAR_0, VAR_3, VAR_4);
  }
  if (VAR_6) {
   FUNC_2(VAR_7, VAR_2);
   ((mcache_obj_t *)VAR_3)->obj_next = VAR_7;
  }
 } else if (VAR_1) {

  FUNC_2(VAR_7, VAR_2);
  FUNC_0(VAR_2, VAR_3, 0, VAR_4);
 }
}
