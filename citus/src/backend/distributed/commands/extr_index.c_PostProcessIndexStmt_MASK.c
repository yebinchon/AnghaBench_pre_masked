
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int indisvalid; } ;
struct TYPE_11__ {int t_self; } ;
struct TYPE_10__ {int idxname; int relation; int concurrent; } ;
typedef int * Relation ;
typedef int Oid ;
typedef TYPE_1__ IndexStmt ;
typedef TYPE_2__* HeapTuple ;
typedef TYPE_3__* Form_pg_index ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,TYPE_2__*) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 () ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int VAR_5 ;
 TYPE_2__* FUNC_8 (int ,int ) ;
 int VAR_6 ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int * FUNC_13 (int ,int ) ;
 int * FUNC_14 (int ,int ) ;
 int FUNC_15 (int *,int ) ;
 int * FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;

void
FUNC_18(IndexStmt *VAR_7)
{
 Relation VAR_8 = ((void*)0);
 Oid VAR_9 = VAR_3;
 Relation VAR_10 = ((void*)0);
 Relation VAR_11 = ((void*)0);
 HeapTuple VAR_12 = ((void*)0);
 Form_pg_index VAR_13 = ((void*)0);


 if (!VAR_7->concurrent)
 {
  return;
 }


 if (!FUNC_5())
 {
  return;
 }


 FUNC_2();
 FUNC_9();


 VAR_8 = FUNC_14(VAR_7->relation, VAR_6);
 VAR_9 = FUNC_10(VAR_7->idxname,
          FUNC_7(VAR_8));
 VAR_10 = FUNC_16(VAR_9, VAR_5);


 FUNC_11(VAR_8, VAR_4);
 FUNC_15(VAR_10, VAR_4);


 FUNC_17(VAR_9, VAR_1);


 FUNC_2();
 FUNC_9();


 VAR_11 = FUNC_13(VAR_2, VAR_5);

 VAR_12 = FUNC_8(VAR_0, FUNC_6(VAR_9));
 FUNC_0(FUNC_4(VAR_12));


 VAR_13 = (Form_pg_index) FUNC_3(VAR_12);
 VAR_13->indisvalid = 1;

 FUNC_1(VAR_11, &VAR_12->t_self, VAR_12);


 FUNC_12(VAR_12);
 FUNC_11(VAR_11, VAR_5);
}
