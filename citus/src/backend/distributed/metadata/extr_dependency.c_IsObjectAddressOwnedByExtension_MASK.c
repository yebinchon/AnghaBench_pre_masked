
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ deptype; int refobjsubid; int refobjid; int refclassid; } ;
struct TYPE_6__ {int objectId; int classId; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_depend ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int ) ;
 int * FUNC_7 (int *,int ,int,int *,int,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;

bool
FUNC_10(const ObjectAddress *VAR_8,
        ObjectAddress *VAR_9)
{
 Relation VAR_10 = ((void*)0);
 ScanKeyData VAR_11[2];
 SysScanDesc VAR_12 = ((void*)0);
 HeapTuple VAR_13 = ((void*)0);
 bool VAR_14 = 0;

 VAR_10 = FUNC_6(VAR_6, VAR_0);


 FUNC_4(&VAR_11[0], VAR_1, VAR_3, VAR_7,
    FUNC_3(VAR_8->classId));
 FUNC_4(&VAR_11[1], VAR_2, VAR_3, VAR_7,
    FUNC_3(VAR_8->objectId));
 VAR_12 = FUNC_7(VAR_10, VAR_5, 1, ((void*)0), 2, VAR_11);

 while (FUNC_1(VAR_13 = FUNC_9(VAR_12)))
 {
  Form_pg_depend VAR_15 = (Form_pg_depend) FUNC_0(VAR_13);
  if (VAR_15->deptype == VAR_4)
  {
   VAR_14 = 1;
   if (VAR_9 != ((void*)0))
   {
    FUNC_2(*VAR_9, VAR_15->refclassid,
         VAR_15->refobjid, VAR_15->refobjsubid);
   }
   break;
  }
 }

 FUNC_8(VAR_12);
 FUNC_5(VAR_10, VAR_0);

 return VAR_14;
}
