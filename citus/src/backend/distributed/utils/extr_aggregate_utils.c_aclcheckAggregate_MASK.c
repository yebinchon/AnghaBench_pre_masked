
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Oid ;
typedef int ObjectType ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_3(ObjectType VAR_3, Oid VAR_4, Oid VAR_5)
{
 AclResult VAR_6;
 if (VAR_5 != VAR_2)
 {
  VAR_6 = FUNC_2(VAR_5, VAR_4, VAR_1);
  if (VAR_6 != VAR_0)
  {
   FUNC_0(VAR_6, VAR_3, FUNC_1(VAR_5));
  }
 }
}
