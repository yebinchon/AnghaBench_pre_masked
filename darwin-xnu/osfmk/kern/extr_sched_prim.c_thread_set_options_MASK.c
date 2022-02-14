
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef int spl_t ;
struct TYPE_5__ {int options; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(uint32_t VAR_0) {
  spl_t VAR_1;
  thread_t VAR_2 = FUNC_0();

  VAR_1 = FUNC_1();
  FUNC_3(VAR_2);

  VAR_2->options |= VAR_0;

  FUNC_4(VAR_2);
  FUNC_2(VAR_1);
}
