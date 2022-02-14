
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Oid ;
typedef scalar_t__ LOCKMODE ;
typedef int AclResult ;
typedef int AclMode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static AclResult
FUNC_1(Oid VAR_7, LOCKMODE VAR_8, Oid VAR_9)
{
 AclResult VAR_10;
 AclMode VAR_11;


 if (VAR_8 == VAR_5)
 {
  VAR_11 = VAR_2;
 }
 else if (VAR_8 == VAR_6)
 {
  VAR_11 = VAR_1 | VAR_4 | VAR_0 | VAR_3;
 }
 else
 {
  VAR_11 = VAR_4 | VAR_0 | VAR_3;
 }

 VAR_10 = FUNC_0(VAR_7, VAR_9, VAR_11);

 return VAR_10;
}
