
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int Expr ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *,scalar_t__,scalar_t__,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static Expr *
FUNC_4(Node *VAR_2, Node *VAR_3)
{
 Oid VAR_4 = FUNC_2(VAR_3);
 Oid VAR_5 = FUNC_2(VAR_2);
 int32 VAR_6 = FUNC_3(VAR_2);
 Node *VAR_7 = ((void*)0);


 if (VAR_5 == VAR_4)
 {
  return ((void*)0);
 }


 VAR_7 = FUNC_1(((void*)0), VAR_3, VAR_4,
             VAR_5, VAR_6,
             VAR_1,
             VAR_0, -1);
 FUNC_0(VAR_7 != ((void*)0));
 return (Expr *) VAR_7;
}
