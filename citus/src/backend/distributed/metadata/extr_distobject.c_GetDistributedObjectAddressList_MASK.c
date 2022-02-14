
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int objsubid; int objid; int classid; } ;
typedef int * SysScanDesc ;
typedef int * Relation ;
typedef int ObjectAddress ;
typedef int List ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_dist_object ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int * FUNC_4 (int ,int ) ;
 int * FUNC_5 (int *,int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int ,int,int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

List *
FUNC_11(void)
{
 Relation VAR_3 = ((void*)0);
 SysScanDesc VAR_4 = ((void*)0);
 HeapTuple VAR_5 = ((void*)0);
 List *VAR_6 = VAR_2;

 VAR_3 = FUNC_4(FUNC_0(), VAR_0);
 VAR_4 = FUNC_8(VAR_3, VAR_1, 0, ((void*)0), 0,
            ((void*)0));
 while (FUNC_2(VAR_5 = FUNC_10(VAR_4)))
 {
  Form_pg_dist_object VAR_7 =
   (Form_pg_dist_object) FUNC_1(VAR_5);
  ObjectAddress *VAR_8 = FUNC_6(sizeof(ObjectAddress));
  FUNC_3(*VAR_8,
       VAR_7->classid,
       VAR_7->objid,
       VAR_7->objsubid);
  VAR_6 = FUNC_5(VAR_6, VAR_8);
 }

 FUNC_9(VAR_4);
 FUNC_7(VAR_3, VAR_0);

 return VAR_6;
}
