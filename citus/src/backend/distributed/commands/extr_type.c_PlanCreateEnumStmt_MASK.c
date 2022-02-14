
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int List ;
typedef int CreateEnumStmt ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int * VAR_3 ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 () ;
 char* FUNC_6 (char const*) ;
 int * FUNC_7 (int ,void*,int ) ;

List *
FUNC_8(CreateEnumStmt *VAR_4, const char *VAR_5)
{
 const char *VAR_6 = ((void*)0);
 List *VAR_7 = VAR_3;

 if (!FUNC_5())
 {
  return VAR_3;
 }





 FUNC_1();


 FUNC_4((Node *) VAR_4);


 VAR_6 = FUNC_0(VAR_4);
 VAR_6 = FUNC_6(VAR_6);





 FUNC_2();


 VAR_7 = FUNC_7(VAR_1,
        (void *) VAR_6,
        VAR_2);

 return FUNC_3(VAR_0, VAR_7);
}
