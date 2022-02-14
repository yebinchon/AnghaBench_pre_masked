
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;

uint32_t
FUNC_3(void)
{
 uint64_t VAR_3 = 0;
 uint32_t VAR_4 = 0;

 if (FUNC_2())
  VAR_4 |= VAR_1;

 VAR_3 = FUNC_0(VAR_0);
 if (FUNC_1(VAR_3))
  VAR_4 |= VAR_0;

 VAR_3 = FUNC_0(VAR_2);
 if ((VAR_3 != 0) && FUNC_1(VAR_3))
  VAR_4 |= VAR_2;

 return VAR_4;
}
