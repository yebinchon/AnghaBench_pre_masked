
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RenameStmt ;
typedef int ObjectAddress ;
typedef int Node ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,int) ;
 int * VAR_3 ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int const*) ;
 int * FUNC_6 (int ,void*,int ) ;

List *
FUNC_7(RenameStmt *VAR_4, const char *VAR_5)
{
 const char *VAR_6 = ((void*)0);
 const ObjectAddress *VAR_7 = ((void*)0);
 List *VAR_8 = VAR_3;

 VAR_7 = FUNC_2((Node *) VAR_4, 0);
 if (!FUNC_5(VAR_7))
 {
  return VAR_3;
 }


 FUNC_4((Node *) VAR_4);


 VAR_6 = FUNC_0((Node *) VAR_4);


 FUNC_1();

 VAR_8 = FUNC_6(VAR_1,
        (void *) VAR_6,
        VAR_2);

 return FUNC_3(VAR_0, VAR_8);
}
