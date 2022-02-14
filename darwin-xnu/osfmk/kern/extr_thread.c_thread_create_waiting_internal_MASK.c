
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int thread_continue_t ;
typedef TYPE_2__* task_t ;
typedef scalar_t__ kern_return_t ;
typedef int event_t ;
typedef int block_hint_t ;
struct TYPE_18__ {scalar_t__ suspend_count; } ;
struct TYPE_17__ {int static_param; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int,int ,int *,int,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static kern_return_t
FUNC_9(
 task_t VAR_7,
 thread_continue_t VAR_8,
 event_t VAR_9,
 block_hint_t VAR_10,
 int VAR_11,
 thread_t *VAR_12)
{
 kern_return_t VAR_13;
 thread_t VAR_14;

 if (VAR_7 == VAR_2 || VAR_7 == VAR_5)
  return (VAR_0);

 VAR_13 = FUNC_2(VAR_7, -1, VAR_8, ((void*)0),
   VAR_11, &VAR_14);
 if (VAR_13 != VAR_1)
  return (VAR_13);



 if (VAR_7->suspend_count > 0)
  FUNC_3(VAR_14);

 FUNC_4(VAR_14);
 FUNC_6(VAR_14, VAR_10);
 if (VAR_11 & VAR_4) {
  VAR_14->static_param = 1;
  VAR_9 = FUNC_8(VAR_7, VAR_14);
 }
 FUNC_7(VAR_14, VAR_9, VAR_3);
 FUNC_5(VAR_14);

 FUNC_1(VAR_7);
 FUNC_0(&VAR_6);

 *VAR_12 = VAR_14;

 return (VAR_1);
}
