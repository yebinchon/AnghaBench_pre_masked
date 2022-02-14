
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct us_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct us_data*) ;
 scalar_t__ FUNC_2 (struct us_data*) ;

__attribute__((used)) static int FUNC_3(struct us_data *VAR_2)
{
 FUNC_0("ISD200 Initialization...\n");



 if (FUNC_2(VAR_2) == VAR_0) {
  FUNC_0("ERROR Initializing ISD200 Info struct\n");
 } else {


  if (FUNC_1(VAR_2) != VAR_1)
   FUNC_0("ISD200 Initialization Failure\n");
  else
   FUNC_0("ISD200 Initialization complete\n");
 }

 return 0;
}
