
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {struct TYPE_12__* obj_next; } ;
typedef TYPE_1__ mcache_obj_t ;
struct TYPE_13__ {int mca_uflags; int * mca_uptr; } ;
typedef TYPE_2__ mcache_audit_t ;
typedef scalar_t__ mbuf_class_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (TYPE_2__*,TYPE_1__*,int ,int *) ;
 TYPE_2__* FUNC_8 (scalar_t__,TYPE_1__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_10 (TYPE_2__*,TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void
FUNC_11(void *VAR_8, mcache_obj_t *VAR_9, boolean_t VAR_10)
{
 mbuf_class_t VAR_11 = (mbuf_class_t)VAR_8;
 mcache_audit_t *VAR_12;

 FUNC_0(FUNC_2(VAR_11) && !FUNC_1(VAR_11));

 while (VAR_9 != ((void*)0)) {
  FUNC_3(VAR_6);
  VAR_12 = FUNC_8(VAR_11, VAR_9);


  if (VAR_11 == VAR_3) {
   FUNC_10(VAR_12, VAR_9, VAR_0, VAR_10);
   FUNC_0(VAR_12->mca_uflags & VAR_2);
  } else {
   FUNC_9(VAR_12, VAR_9, FUNC_6(VAR_11),
       VAR_10, VAR_4);
   FUNC_0(!(VAR_12->mca_uflags & VAR_2));
  }

  if (VAR_7)
   FUNC_7(VAR_12, VAR_9, FUNC_5(VAR_11), &VAR_5);

  if (VAR_10)
   VAR_12->mca_uflags |= VAR_1;
  else
   VAR_12->mca_uflags &= ~VAR_1;

  VAR_12->mca_uptr = ((void*)0);
  FUNC_4(VAR_6);

  VAR_9 = VAR_9->obj_next;
 }
}
