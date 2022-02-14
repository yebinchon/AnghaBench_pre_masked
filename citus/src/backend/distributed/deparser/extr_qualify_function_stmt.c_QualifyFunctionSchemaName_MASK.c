
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int proname; int pronamespace; } ;
struct TYPE_5__ {int objname; } ;
typedef int Oid ;
typedef TYPE_1__ ObjectWithArgs ;
typedef int ObjectType ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_proc ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*,int) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 char* FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*) ;

void
FUNC_11(ObjectWithArgs *VAR_2, ObjectType VAR_3)
{
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 Oid VAR_6 = VAR_0;
 HeapTuple VAR_7;

 VAR_6 = FUNC_2(VAR_3, VAR_2, 1);
 VAR_7 = FUNC_6(VAR_1, FUNC_4(VAR_6));






 if (FUNC_1(VAR_7))
 {
  Form_pg_proc VAR_8;

  VAR_8 = (Form_pg_proc) FUNC_0(VAR_7);
  VAR_4 = FUNC_7(VAR_8->pronamespace);
  VAR_5 = FUNC_3(VAR_8->proname);
  VAR_5 = FUNC_10(VAR_5);

  FUNC_5(VAR_7);


  VAR_2->objname = FUNC_8(FUNC_9(VAR_4), FUNC_9(VAR_5));
 }
}
