
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ kern_return_t ;
typedef int UNDServerRef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 () ;

__attribute__((used)) static UNDServerRef
FUNC_3(void)
{
 UNDServerRef VAR_1;
 kern_return_t VAR_2;

 VAR_2 = FUNC_1(FUNC_2(), &VAR_1);
 FUNC_0(VAR_2 == VAR_0);
 return VAR_1;
}
