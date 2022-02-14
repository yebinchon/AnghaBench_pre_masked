
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_read_shift; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

__attribute__((used)) static unsigned int FUNC_3(void)
{
 unsigned int VAR_1;

 VAR_1 = (FUNC_1() & (1 << VAR_0->data_read_shift))
  >> VAR_0->data_read_shift;
 FUNC_0(FUNC_2());
 return VAR_1;
}
