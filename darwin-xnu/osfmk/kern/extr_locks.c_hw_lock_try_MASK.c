
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_t ;
typedef int hw_lock_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (int ,int ) ;

unsigned int
FUNC_4(hw_lock_t VAR_0)
{
 thread_t VAR_1 = FUNC_0();
 FUNC_1(VAR_1);
 unsigned int VAR_2 = FUNC_3(VAR_0, VAR_1);
 if (!VAR_2)
  FUNC_2();
 return VAR_2;
}
