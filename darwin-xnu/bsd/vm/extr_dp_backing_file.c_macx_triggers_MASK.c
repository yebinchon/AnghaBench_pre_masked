
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macx_triggers_args {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

int
FUNC_1(
 struct macx_triggers_args *VAR_3)
{
 int VAR_4 = VAR_3->flags;

 if (VAR_4 & (VAR_1 | VAR_2))
  return (FUNC_0(VAR_4));

 return VAR_0;
}
