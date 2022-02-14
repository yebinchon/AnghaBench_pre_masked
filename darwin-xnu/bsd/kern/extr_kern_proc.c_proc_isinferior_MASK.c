
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ proc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;

int
FUNC_3(int VAR_1, int VAR_2)
{
 proc_t VAR_3 = VAR_0;
 proc_t VAR_4 = VAR_0;
 int VAR_5 = 0;

 if (((VAR_3 = FUNC_1(VAR_1)) != (proc_t)0 ) && ((VAR_4 = FUNC_1(VAR_2)) != (proc_t)0))
  VAR_5 = FUNC_0(VAR_3, VAR_4);

 if (VAR_3 != VAR_0)
  FUNC_2(VAR_3);
 if (VAR_4 != VAR_0)
  FUNC_2(VAR_4);

 return(VAR_5);
}
