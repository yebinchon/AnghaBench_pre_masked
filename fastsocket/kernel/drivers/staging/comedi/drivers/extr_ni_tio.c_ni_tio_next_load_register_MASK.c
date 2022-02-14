
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 unsigned int const FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (struct ni_gpct*,int ) ;

__attribute__((used)) static unsigned FUNC_5(struct ni_gpct *VAR_0)
{
 const unsigned VAR_1 = FUNC_4(VAR_0,
         FUNC_3(VAR_0->
         counter_index));

 if (VAR_1 & FUNC_0(VAR_0->counter_index)) {
  return FUNC_2(VAR_0->counter_index);
 } else {
  return FUNC_1(VAR_0->counter_index);
 }
}
