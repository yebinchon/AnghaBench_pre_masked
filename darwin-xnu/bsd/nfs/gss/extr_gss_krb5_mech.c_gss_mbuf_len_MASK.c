
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mbuf_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

size_t
FUNC_2(mbuf_t VAR_0, size_t VAR_1)
{
 size_t VAR_2;

 for (VAR_2 = 0; VAR_0; VAR_0 = FUNC_1(VAR_0))
  VAR_2 += FUNC_0(VAR_0);
 return ((VAR_1 > VAR_2) ? 0 : VAR_2 - VAR_1);
}
