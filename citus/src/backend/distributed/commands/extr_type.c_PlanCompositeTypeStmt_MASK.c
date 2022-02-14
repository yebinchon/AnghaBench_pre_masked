
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int List ;
typedef int CompositeTypeStmt ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;
 int * VAR_3 ;
 int * FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 () ;
 char* FUNC_8 (char const*) ;
 int * FUNC_9 (int ,void*,int ) ;

List *
FUNC_10(CompositeTypeStmt *VAR_5, const char *VAR_6)
{
 const char *VAR_7 = ((void*)0);
 List *VAR_8 = VAR_3;

 if (!FUNC_7())
 {
  return VAR_3;
 }





 FUNC_2();
 FUNC_4(FUNC_1(), VAR_4);


 FUNC_6((Node *) VAR_5);
 VAR_7 = FUNC_0(VAR_5);
 VAR_7 = FUNC_8(VAR_7);





 FUNC_3();

 VAR_8 = FUNC_9(VAR_1,
        (void *) VAR_7,
        VAR_2);

 return FUNC_5(VAR_0, VAR_8);
}
