
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_gpct {int counter_index; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int const FUNC_0 (int ) ;
 unsigned int const FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct ni_gpct*,int ) ;

__attribute__((used)) static unsigned int FUNC_4(struct ni_gpct *VAR_2)
{
 unsigned int VAR_3 = 0;
 const unsigned VAR_4 = FUNC_3(VAR_2,
         FUNC_2(VAR_2->
         counter_index));
 if (VAR_4 & FUNC_0(VAR_2->counter_index)) {
  VAR_3 |= VAR_0;
  if (VAR_4 & FUNC_1(VAR_2->counter_index))
   VAR_3 |= VAR_1;
 }
 return VAR_3;
}
