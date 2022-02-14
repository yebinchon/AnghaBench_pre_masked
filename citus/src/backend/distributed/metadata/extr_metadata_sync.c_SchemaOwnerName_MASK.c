
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nspowner; } ;
typedef int Oid ;
typedef int * HeapTuple ;
typedef TYPE_1__* Form_pg_namespace ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 () ;
 char* FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int ,int ) ;

__attribute__((used)) static char *
FUNC_7(Oid VAR_2)
{
 HeapTuple VAR_3 = ((void*)0);
 Oid VAR_4 = VAR_0;
 char *VAR_5 = ((void*)0);

 VAR_3 = FUNC_6(VAR_1, FUNC_4(VAR_2));
 if (FUNC_3(VAR_3))
 {
  VAR_4 = ((Form_pg_namespace) FUNC_0(VAR_3))->nspowner;
 }
 else
 {
  VAR_4 = FUNC_1();
 }

 VAR_5 = FUNC_2(VAR_4, 0);

 FUNC_5(VAR_3);

 return VAR_5;
}
