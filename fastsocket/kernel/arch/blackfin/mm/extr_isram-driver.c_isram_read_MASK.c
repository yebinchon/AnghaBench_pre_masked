
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int FUNC_0 (void const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static uint64_t FUNC_7(const void *VAR_3)
{
 uint32_t VAR_4;
 unsigned long VAR_5;
 uint64_t VAR_6;

 if (VAR_3 > (void *)(VAR_1 + VAR_0))
  return 0;

 VAR_4 = FUNC_0(VAR_3) | 0;





 FUNC_5(&VAR_2, VAR_5);

 FUNC_1();
 FUNC_4(VAR_4);
 FUNC_1();
 VAR_6 = FUNC_2() | ((uint64_t)FUNC_3() << 32);

 FUNC_4(0);
 FUNC_1();
 FUNC_6(&VAR_2, VAR_5);

 return VAR_6;
}
