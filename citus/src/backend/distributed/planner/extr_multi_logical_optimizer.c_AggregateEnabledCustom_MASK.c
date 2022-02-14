
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ aggcombinefn; int aggtranstype; } ;
struct TYPE_3__ {scalar_t__ typtype; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_1__* Form_pg_type ;
typedef TYPE_2__* Form_pg_aggregate ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static bool
FUNC_5(Oid VAR_5)
{
 HeapTuple VAR_6;
 Form_pg_aggregate VAR_7;
 HeapTuple VAR_8;
 Form_pg_type VAR_9;
 bool VAR_10;

 VAR_6 = FUNC_3(VAR_0, VAR_5);
 if (!FUNC_1(VAR_6))
 {
  FUNC_4(VAR_1, "citus cache lookup failed.");
 }
 VAR_7 = (Form_pg_aggregate) FUNC_0(VAR_6);

 if (VAR_7->aggcombinefn == VAR_2)
 {
  FUNC_2(VAR_6);
  return 0;
 }

 VAR_8 = FUNC_3(VAR_3, VAR_7->aggtranstype);
 if (!FUNC_1(VAR_8))
 {
  FUNC_4(VAR_1, "citus cache lookup failed.");
 }
 VAR_9 = (Form_pg_type) FUNC_0(VAR_8);

 VAR_10 = VAR_9->typtype != VAR_4;

 FUNC_2(VAR_6);
 FUNC_2(VAR_8);

 return VAR_10;
}
