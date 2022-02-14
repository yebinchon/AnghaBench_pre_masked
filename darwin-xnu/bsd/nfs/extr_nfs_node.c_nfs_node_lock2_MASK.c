
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ nfsnode_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

int
FUNC_2(nfsnode_t VAR_0, nfsnode_t VAR_1)
{
 nfsnode_t VAR_2, VAR_3;
 int VAR_4;

 VAR_2 = (VAR_0 > VAR_1) ? VAR_0 : VAR_1;
 VAR_3 = (VAR_0 > VAR_1) ? VAR_1 : VAR_0;
 if ((VAR_4 = FUNC_0(VAR_2)))
  return (VAR_4);
 if (VAR_0 == VAR_1)
  return (VAR_4);
 if ((VAR_4 = FUNC_0(VAR_3)))
  FUNC_1(VAR_2);
 return (VAR_4);
}
