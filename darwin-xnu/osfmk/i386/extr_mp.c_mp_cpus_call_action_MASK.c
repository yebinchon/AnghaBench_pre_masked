
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * maskp; int arg1; int arg0; int (* func ) (int ,int ) ;} ;
typedef TYPE_1__ mp_call_t ;
typedef int mp_call_queue_t ;
typedef int boolean_t ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int (*) (int ,int )) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 size_t FUNC_5 () ;
 int FUNC_6 (size_t,int *) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int ) ;
 int * VAR_1 ;
 int FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(void)
{
 mp_call_queue_t *VAR_2;
 boolean_t VAR_3;
 mp_call_t *VAR_4;
 mp_call_t VAR_5;

 FUNC_4(!FUNC_7());
 VAR_2 = &VAR_1[FUNC_5()];
 VAR_3 = FUNC_10(VAR_2);
 while ((VAR_4 = FUNC_8(VAR_2)) != ((void*)0)) {

  VAR_5 = *VAR_4;
  FUNC_9(VAR_4);
  if (VAR_5.func != ((void*)0)) {
   FUNC_11(VAR_2, VAR_3);
   FUNC_0(
    VAR_0,
    FUNC_2(VAR_5.func), FUNC_3(VAR_5.arg0),
    FUNC_3(VAR_5.arg1), FUNC_1(VAR_5.maskp), 0);
   VAR_5.func(VAR_5.arg0, VAR_5.arg1);
   (void) FUNC_10(VAR_2);
  }
  if (VAR_5.maskp != ((void*)0))
   FUNC_6(FUNC_5(), VAR_5.maskp);
 }
 FUNC_11(VAR_2, VAR_3);
}
