
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct DropRelationCallbackState {char relkind; scalar_t__ heapOid; scalar_t__ concurrent; } ;
struct TYPE_6__ {char relkind; int relnamespace; } ;
struct TYPE_5__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_class ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__,TYPE_2__*) ;
 int FUNC_6 (scalar_t__,int ) ;
 int VAR_6 ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 char VAR_7 ;
 char VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_10 ;
 int FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*,int ) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void
FUNC_18(const RangeVar *VAR_12, Oid VAR_13, Oid VAR_14, void *VAR_15)
{

 HeapTuple VAR_16;
 struct DropRelationCallbackState *VAR_17;
 char VAR_18;
 char VAR_19;
 Form_pg_class VAR_20;
 LOCKMODE VAR_21;

 VAR_17 = (struct DropRelationCallbackState *) VAR_15;
 VAR_18 = VAR_17->relkind;
 VAR_21 = VAR_17->concurrent ?
                 VAR_10 : VAR_1;

 FUNC_0(VAR_18 == VAR_7);






 if (VAR_13 != VAR_14 && FUNC_8(VAR_17->heapOid))
 {
  FUNC_11(VAR_17->heapOid, VAR_21);
  VAR_17->heapOid = VAR_5;
 }


 if (!FUNC_8(VAR_13))
  return;

 VAR_16 = FUNC_10(VAR_9, FUNC_7(VAR_13));
 if (!FUNC_3(VAR_16))
  return;
 VAR_20 = (Form_pg_class) FUNC_1(VAR_16);
 VAR_19 = VAR_20->relkind;

 if (VAR_19 == VAR_8)
  VAR_19 = VAR_7;

 if (VAR_19 != VAR_18)
  FUNC_13(VAR_4, (FUNC_14(VAR_3),
    FUNC_15("\"%s\" is not an index", VAR_12->relname)));


 if (!FUNC_16(VAR_13, FUNC_2()) &&
     !FUNC_17(VAR_20->relnamespace, FUNC_2()))
 {
  FUNC_12(VAR_0, VAR_6, VAR_12->relname);
 }

 if (!VAR_11 && FUNC_5(VAR_13, VAR_20))
  FUNC_13(VAR_4,
          (FUNC_14(VAR_2),
            FUNC_15("permission denied: \"%s\" is a system catalog",
                   VAR_12->relname)));

 FUNC_9(VAR_16);
 if (VAR_18 == VAR_7 && VAR_13 != VAR_14)
 {
  VAR_17->heapOid = FUNC_4(VAR_13, 1);
  if (FUNC_8(VAR_17->heapOid))
   FUNC_6(VAR_17->heapOid, VAR_21);
 }

}
