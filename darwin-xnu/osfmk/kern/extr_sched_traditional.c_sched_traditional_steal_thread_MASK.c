
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ thread_t ;
typedef int processor_t ;
typedef TYPE_1__* processor_set_t ;
struct TYPE_9__ {scalar_t__ count; } ;
struct TYPE_8__ {int* cpu_state_map; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int * VAR_3 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_3__* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static thread_t
FUNC_7(processor_set_t VAR_4)
{
 processor_set_t VAR_5, VAR_6 = VAR_4;
 processor_t VAR_7;
 thread_t VAR_8;

 do {
  uint64_t VAR_9 = (VAR_4->cpu_state_map[VAR_1] |
           VAR_4->cpu_state_map[VAR_0]);
  for (int VAR_10 = FUNC_0(VAR_9); VAR_10 >= 0; VAR_10 = FUNC_1(VAR_9, VAR_10)) {
   VAR_7 = VAR_3[VAR_10];
   if (FUNC_5(VAR_7)->count > 0) {
    VAR_8 = FUNC_6(VAR_7);
    if (VAR_8 != VAR_2) {
     FUNC_4(VAR_6);

     return (VAR_8);
    }
   }
  }

  VAR_5 = FUNC_2(VAR_6);

  if (VAR_5 != VAR_4) {
   FUNC_4(VAR_6);

   VAR_6 = VAR_5;
   FUNC_3(VAR_6);
  }
 } while (VAR_5 != VAR_4);

 FUNC_4(VAR_6);

 return (VAR_2);
}
