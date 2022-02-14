
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hw_lock_bit_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,unsigned int,int ) ;
 int FUNC_1 (char*,int *) ;

void
FUNC_2(hw_lock_bit_t *VAR_1, unsigned int VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_0))
  return;



 FUNC_1("hw_lock_bit(): interlock held (%p)", VAR_1);

}
