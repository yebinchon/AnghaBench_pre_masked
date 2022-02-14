
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_1 (char*,int) ;

__attribute__((used)) static bool
FUNC_2(void)
{
 Oid VAR_3 = VAR_2;

 Oid VAR_4 = FUNC_1("citus", 1);
 if (VAR_4 == VAR_2)
 {

  return 0;
 }

 FUNC_0(VAR_1, VAR_4, 0, VAR_0);





 VAR_3 = FUNC_1("citus", 1);
 if (VAR_3 != VAR_4)
 {
  return 0;
 }

 return 1;
}
