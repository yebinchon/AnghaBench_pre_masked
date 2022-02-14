
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ReindexIndexCallbackState {scalar_t__ locked_table_oid; scalar_t__ concurrent; } ;
struct TYPE_3__ {int relname; } ;
typedef TYPE_1__ RangeVar ;
typedef scalar_t__ Oid ;
typedef int LOCKMODE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 char VAR_5 ;
 char VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int ) ;
 char FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_11(const RangeVar *VAR_9, Oid VAR_10, Oid VAR_11,
        void *VAR_12)
{

 char VAR_13;
 struct ReindexIndexCallbackState *VAR_14 = VAR_12;
 LOCKMODE VAR_15;
 VAR_15 = VAR_7;







 if (VAR_10 != VAR_11 && FUNC_3(VAR_11))
 {
  FUNC_4(VAR_14->locked_table_oid, VAR_15);
  VAR_14->locked_table_oid = VAR_3;
 }


 if (!FUNC_3(VAR_10))
  return;






 VAR_13 = FUNC_9(VAR_10);
 if (!VAR_13)
  return;
 if (VAR_13 != VAR_5 && VAR_13 != VAR_6)
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("\"%s\" is not an index", VAR_9->relname)));


 if (!FUNC_10(VAR_10, FUNC_0()))
  FUNC_5(VAR_0, VAR_4, VAR_9->relname);


 if (VAR_10 != VAR_11)
 {
  Oid VAR_16 = FUNC_1(VAR_10, 1);





  if (FUNC_3(VAR_16))
  {
   FUNC_2(VAR_16, VAR_15);
   VAR_14->locked_table_oid = VAR_16;
  }
 }

}
