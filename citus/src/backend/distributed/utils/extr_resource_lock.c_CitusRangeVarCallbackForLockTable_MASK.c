
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef int Oid ;
typedef int LOCKMODE ;
typedef scalar_t__ AclResult ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(const RangeVar *VAR_3, Oid VAR_4,
          Oid VAR_5, void *VAR_6)
{
 LOCKMODE VAR_7 = *(LOCKMODE *) VAR_6;
 AclResult VAR_8;

 if (!FUNC_2(VAR_4))
 {

  return;
 }


 if (!FUNC_3(VAR_4))
 {
  FUNC_5(VAR_2, (FUNC_6(VAR_1),
      FUNC_7("\"%s\" is not a table", VAR_3->relname)));
 }


 VAR_8 = FUNC_0(VAR_4, VAR_7, FUNC_1());
 if (VAR_8 != VAR_0)
 {
  FUNC_4(VAR_8, FUNC_9(FUNC_8(VAR_4)),
        VAR_3->relname);
 }
}
