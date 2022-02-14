
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ifnet_t ;
typedef int * if_fake_ref ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int * FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(ifnet_t VAR_0)
{
 if_fake_ref VAR_1;

 FUNC_2();
 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1 == ((void*)0) || FUNC_1(VAR_1)) {
  FUNC_4();
  return (0);
 }
 FUNC_3(VAR_1);
 FUNC_4();

 FUNC_0(VAR_0, ((void*)0));
 FUNC_5(VAR_0);
 return 0;
}
