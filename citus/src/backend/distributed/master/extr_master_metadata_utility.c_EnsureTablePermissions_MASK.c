
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ AclResult ;
typedef int AclMode ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;

void
FUNC_4(Oid VAR_2, AclMode VAR_3)
{
 AclResult VAR_4;

 VAR_4 = FUNC_3(VAR_2, FUNC_0(), VAR_3);

 if (VAR_4 != VAR_0)
 {
  FUNC_1(VAR_4, VAR_1, FUNC_2(VAR_2));
 }
}
