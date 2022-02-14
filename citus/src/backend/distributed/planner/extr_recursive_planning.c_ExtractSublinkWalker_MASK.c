
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int List ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int (*) (int *,int **),int **) ;
 int * FUNC_2 (int *,int *) ;

__attribute__((used)) static bool
FUNC_3(Node *VAR_1, List **VAR_2)
{
 bool VAR_3 = 0;
 if (VAR_1 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_1, VAR_0))
 {
  (*VAR_2) = FUNC_2(*VAR_2, VAR_1);
 }
 else
 {
  VAR_3 = FUNC_1(VAR_1, FUNC_3,
             VAR_2);
 }

 return VAR_3;
}
