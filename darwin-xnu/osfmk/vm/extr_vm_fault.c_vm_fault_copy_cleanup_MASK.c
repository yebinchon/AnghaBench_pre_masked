
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_object_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static void
FUNC_8(
 vm_page_t VAR_0,
 vm_page_t VAR_1)
{
 vm_object_t VAR_2 = FUNC_1(VAR_0);

 FUNC_4(VAR_2);
 FUNC_0(VAR_0);
 if ( !FUNC_2(VAR_0)) {
  FUNC_6();
  if ( !FUNC_2(VAR_0)) {
   FUNC_5(VAR_0);
  }
  FUNC_7();
 }
 FUNC_3(VAR_2, VAR_1);
}
