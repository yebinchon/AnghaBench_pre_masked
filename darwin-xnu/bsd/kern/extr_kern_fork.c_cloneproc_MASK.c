
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * thread_t ;
typedef scalar_t__ task_t ;
typedef TYPE_1__* proc_t ;
typedef int coalition_t ;
typedef int UInt32 ;
struct TYPE_9__ {int p_flag; int p_stat; int p_memstat_state; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_2 (scalar_t__,int *,TYPE_1__*,int,int const,int const,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int const FUNC_9 (scalar_t__) ;

thread_t
FUNC_10(task_t VAR_5, coalition_t *VAR_6, proc_t VAR_7, int VAR_8, int VAR_9)
{

#pragma unused(memstat_internal)

 task_t VAR_10;
 proc_t VAR_11;
 thread_t VAR_12 = ((void*)0);

 if ((VAR_11 = FUNC_3(VAR_7)) == ((void*)0)) {

  goto bad;
 }
 const int VAR_13 = VAR_7->p_flag & VAR_1;
 const int VAR_14 = (VAR_5 == VAR_4) ? VAR_13 : FUNC_9(VAR_5);

 VAR_12 = FUNC_2(VAR_5,
          VAR_6,
          VAR_11,
          VAR_8,
          VAR_13,
          VAR_14,
          VAR_0);

 if (VAR_12 == ((void*)0)) {




  FUNC_4(VAR_11);
  goto bad;
 }

 VAR_10 = FUNC_5(VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_1, (UInt32 *)&VAR_11->p_flag);
 } else {
  FUNC_0(~((uint32_t)VAR_1), (UInt32 *)&VAR_11->p_flag);
 }
 FUNC_6(VAR_7, VAR_11);




 VAR_11->p_stat = VAR_3;
bad:
 return(VAR_12);
}
