
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int wait_result_t ;
typedef TYPE_1__* thread_t ;
typedef int * thread_continue_t ;
typedef int spl_t ;
struct TYPE_12__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,void*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int *,void*,TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static wait_result_t
FUNC_11(thread_t VAR_6, thread_continue_t VAR_7,
  void *VAR_8)
{
 thread_t VAR_9 = VAR_4;
 thread_t VAR_10 = FUNC_2();




 if (VAR_6 != VAR_4) {
  spl_t VAR_11 = FUNC_3();

  thread_t VAR_12 = FUNC_9(VAR_6);

  FUNC_0(FUNC_1(VAR_1,VAR_3)|VAR_0,
          FUNC_10(VAR_6), VAR_6->state,
          VAR_12 ? VAR_5 : VAR_2, 0, 0);

  if (VAR_12 != VAR_4) {
   if (VAR_7 == ((void*)0)) {

    FUNC_7(VAR_6);
   }

   int VAR_13 = FUNC_8(VAR_10, VAR_7, VAR_8, VAR_12);

   FUNC_4(VAR_11);
   return VAR_13;
  }

  FUNC_4(VAR_11);

  VAR_9 = VAR_6;
  VAR_6 = VAR_4;
 }

 int VAR_14 = FUNC_5(VAR_7, VAR_8);
 if (VAR_9 != VAR_4) {
  FUNC_6(VAR_9);
 }

 return VAR_14;
}
