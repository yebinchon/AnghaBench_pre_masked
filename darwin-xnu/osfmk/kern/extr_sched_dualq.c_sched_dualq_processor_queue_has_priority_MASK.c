
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* run_queue_t ;
typedef int processor_t ;
typedef int boolean_t ;
struct TYPE_4__ {int highq; } ;


 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;

__attribute__((used)) static boolean_t
FUNC_3(processor_t VAR_0,
                                         int VAR_1,
                                         boolean_t VAR_2)
{
 run_queue_t VAR_3 = FUNC_2(VAR_0);
 run_queue_t VAR_4 = FUNC_1(VAR_0);

 int VAR_5 = FUNC_0(VAR_3->highq, VAR_4->highq);

 if (VAR_2)
  return VAR_5 >= VAR_1;
 else
  return VAR_5 > VAR_1;
}
