
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ indisclustered; int indrelid; } ;
struct TYPE_5__ {char* data; int member_3; int member_2; int member_1; int * member_0; } ;
typedef TYPE_1__ StringInfoData ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_index ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,char*,char*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 char* FUNC_8 (int ,int ) ;
 char* FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*) ;

char *
FUNC_12(Oid VAR_4)
{
 HeapTuple VAR_5 = ((void*)0);
 Form_pg_index VAR_6 = ((void*)0);
 Oid VAR_7 = VAR_2;
 StringInfoData VAR_8 = { ((void*)0), 0, 0, 0 };

 VAR_5 = FUNC_4(VAR_1, FUNC_2(VAR_4), 0, 0, 0);
 if (!FUNC_1(VAR_5))
 {
  FUNC_6(VAR_0, (FUNC_7("cache lookup failed for index %u", VAR_4)));
 }

 VAR_6 = (Form_pg_index) FUNC_0(VAR_5);
 VAR_7 = VAR_6->indrelid;


 if (VAR_6->indisclustered)
 {
  char *VAR_9 = FUNC_8(VAR_7, VAR_3);
  char *VAR_10 = FUNC_9(VAR_4);

  FUNC_10(&VAR_8);
  FUNC_5(&VAR_8, "ALTER TABLE %s CLUSTER ON %s",
       VAR_9, FUNC_11(VAR_10));
 }

 FUNC_3(VAR_5);

 return (VAR_8.data);
}
