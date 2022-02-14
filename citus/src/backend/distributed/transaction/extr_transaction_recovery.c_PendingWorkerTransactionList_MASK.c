
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int data; } ;
typedef TYPE_1__* StringInfo ;
typedef int PGresult ;
typedef int MultiConnection ;
typedef int List ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int * VAR_1 ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int,int const) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (TYPE_1__*,char*,int) ;
 int * FUNC_11 (int *,int ) ;
 TYPE_1__* FUNC_12 () ;
 int FUNC_13 (char*) ;

__attribute__((used)) static List *
FUNC_14(MultiConnection *VAR_2)
{
 StringInfo VAR_3 = FUNC_12();
 bool VAR_4 = 1;
 int VAR_5 = 0;
 PGresult *VAR_6 = ((void*)0);
 int VAR_7 = 0;
 int VAR_8 = 0;
 List *VAR_9 = VAR_1;
 int VAR_10 = FUNC_1();

 FUNC_10(VAR_3, "SELECT gid FROM pg_prepared_xacts "
         "WHERE gid LIKE 'citus\\_%d\\_%%'",
      VAR_10);

 VAR_5 = FUNC_9(VAR_2, VAR_3->data);
 if (VAR_5 == 0)
 {
  FUNC_7(VAR_2, VAR_0);
 }

 VAR_6 = FUNC_2(VAR_2, VAR_4);
 if (!FUNC_3(VAR_6))
 {
  FUNC_8(VAR_2, VAR_6, VAR_0);
 }

 VAR_7 = FUNC_6(VAR_6);

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
 {
  const int VAR_11 = 0;
  char *VAR_12 = FUNC_5(VAR_6, VAR_8, VAR_11);

  VAR_9 = FUNC_11(VAR_9, FUNC_13(VAR_12));
 }

 FUNC_4(VAR_6);
 FUNC_0(VAR_2);

 return VAR_9;
}
