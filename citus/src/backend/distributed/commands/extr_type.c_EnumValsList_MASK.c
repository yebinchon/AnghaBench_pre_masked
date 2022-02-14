
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int enumlabel; } ;
struct TYPE_5__ {int member_0; } ;
typedef int * SysScanDesc ;
typedef TYPE_1__ ScanKeyData ;
typedef int * Relation ;
typedef int Oid ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_enum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int ) ;
 int * FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (int *,int ,int,int *,int,TYPE_1__*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *) ;

__attribute__((used)) static List *
FUNC_13(Oid VAR_7)
{
 Relation VAR_8 = ((void*)0);
 SysScanDesc VAR_9 = ((void*)0);
 HeapTuple VAR_10 = ((void*)0);
 ScanKeyData VAR_11 = { 0 };

 List *VAR_12 = VAR_6;


 FUNC_4(&VAR_11,
    VAR_1,
    VAR_2, VAR_5,
    FUNC_3(VAR_7));

 VAR_8 = FUNC_6(VAR_3, VAR_0);
 VAR_9 = FUNC_10(VAR_8,
           VAR_4,
           1, ((void*)0),
           1, &VAR_11);


 while (FUNC_1(VAR_10 = FUNC_12(VAR_9)))
 {
  Form_pg_enum VAR_13 = (Form_pg_enum) FUNC_0(VAR_10);
  VAR_12 = FUNC_7(VAR_12, FUNC_8(FUNC_9(FUNC_2(VAR_13->enumlabel))));
 }

 FUNC_11(VAR_9);
 FUNC_5(VAR_8, VAR_0);
 return VAR_12;
}
