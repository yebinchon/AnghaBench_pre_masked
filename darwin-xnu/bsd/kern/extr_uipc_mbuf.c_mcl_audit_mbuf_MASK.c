
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_9__ {struct TYPE_9__* obj_next; } ;
typedef TYPE_1__ mcache_obj_t ;
struct TYPE_10__ {scalar_t__ mca_contents_size; int * mca_contents; } ;
typedef TYPE_2__ mcache_audit_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,void*,int ,int ) ;
 int FUNC_3 (int ,struct mbuf*,int ) ;
 int FUNC_4 (struct mbuf*,TYPE_2__*,int ) ;
 int FUNC_5 (struct mbuf*,TYPE_2__*) ;
 int FUNC_6 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_7(mcache_audit_t *VAR_4, void *VAR_5, boolean_t VAR_6,
    boolean_t VAR_7)
{
 struct mbuf *VAR_8 = VAR_5;
 mcache_obj_t *VAR_9 = ((mcache_obj_t *)VAR_8)->obj_next;

 FUNC_0(VAR_4->mca_contents != ((void*)0) &&
     VAR_4->mca_contents_size == VAR_0);

 if (VAR_3)
  FUNC_6(VAR_9, VAR_4);

 if (!VAR_7) {

  FUNC_5(VAR_8, VAR_4);
  if (VAR_3) {
   FUNC_3(VAR_1, VAR_8,
       FUNC_1(VAR_2));
  }
  ((mcache_obj_t *)VAR_8)->obj_next = VAR_9;
  return;
 }


 if (VAR_3) {
  FUNC_2(VAR_4, VAR_5, 0, FUNC_1(VAR_2));
 }

 FUNC_4(VAR_8, VAR_4, VAR_6);
}
