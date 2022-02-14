
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int objectSubId; int objectId; int classId; } ;
typedef int * SysScanDesc ;
typedef int ScanKeyData ;
typedef int * Relation ;
typedef TYPE_1__ ObjectAddress ;
typedef int * HeapTuple ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int ,int ,int ) ;
 int * FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (int *,int ,int,int *,int,int *) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *) ;

bool
FUNC_11(const ObjectAddress *VAR_7)
{
 Relation VAR_8 = ((void*)0);
 ScanKeyData VAR_9[3];
 SysScanDesc VAR_10 = ((void*)0);
 HeapTuple VAR_11 = ((void*)0);
 bool VAR_12 = 0;

 VAR_8 = FUNC_6(FUNC_1(), VAR_0);


 FUNC_5(&VAR_9[0], VAR_1, VAR_4, VAR_6,
    FUNC_4(VAR_7->classId));
 FUNC_5(&VAR_9[1], VAR_2, VAR_4, VAR_6,
    FUNC_4(VAR_7->objectId));
 FUNC_5(&VAR_9[2], VAR_3, VAR_4, VAR_5,
    FUNC_3(VAR_7->objectSubId));
 VAR_10 = FUNC_8(VAR_8, FUNC_0(),
            1, ((void*)0), 3, VAR_9);

 VAR_11 = FUNC_10(VAR_10);
 if (FUNC_2(VAR_11))
 {
  VAR_12 = 1;
 }

 FUNC_9(VAR_10);
 FUNC_7(VAR_8, VAR_0);

 return VAR_12;
}
