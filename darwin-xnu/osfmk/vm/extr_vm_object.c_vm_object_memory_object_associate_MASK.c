
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* vm_object_t ;
typedef int vm_object_size_t ;
typedef int * memory_object_t ;
typedef int * memory_object_control_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {int internal; int pager_created; void* pager_initialized; void* pager_ready; void* named; int * pager_control; int * pager; int copy_strategy; void* pager_trusted; } ;


 void* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int ) ;

vm_object_t
FUNC_8(
 memory_object_t VAR_9,
 vm_object_t VAR_10,
 vm_object_size_t VAR_11,
 boolean_t VAR_12)
{
 memory_object_control_t VAR_13;

 FUNC_0(VAR_9 != VAR_3);

 if (VAR_10 != VAR_8) {
  FUNC_0(VAR_10->internal);
  FUNC_0(VAR_10->pager_created);
  FUNC_0(!VAR_10->pager_initialized);
  FUNC_0(!VAR_10->pager_ready);
 } else {
  VAR_10 = FUNC_4(VAR_11);
  FUNC_0(VAR_10 != VAR_8);
  VAR_10->internal = VAR_0;
  VAR_10->pager_trusted = VAR_0;

  VAR_10->copy_strategy = VAR_2;
 }





 VAR_13 = FUNC_1(VAR_10);
 FUNC_0 (VAR_13 != VAR_1);

 FUNC_5(VAR_10);

 FUNC_0(!VAR_10->pager_ready);
 FUNC_0(!VAR_10->pager_initialized);
 FUNC_0(VAR_10->pager == ((void*)0));
 FUNC_0(VAR_10->pager_control == ((void*)0));





 FUNC_3(VAR_9);
 VAR_10->pager_created = VAR_5;
 VAR_10->pager = VAR_9;
 VAR_10->pager_control = VAR_13;
 VAR_10->pager_ready = VAR_0;

 FUNC_6(VAR_10);





 (void) FUNC_2(VAR_9,
      VAR_10->pager_control,
      VAR_4);

 FUNC_5(VAR_10);
 if (VAR_12)
  VAR_10->named = VAR_5;
 if (VAR_10->internal) {
  VAR_10->pager_ready = VAR_5;
  FUNC_7(VAR_10, VAR_7);
 }

 VAR_10->pager_initialized = VAR_5;
 FUNC_7(VAR_10, VAR_6);

 FUNC_6(VAR_10);

 return VAR_10;
}
