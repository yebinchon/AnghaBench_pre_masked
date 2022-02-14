
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static bool
FUNC_2(List *VAR_3, List *VAR_4)
{
 bool VAR_5 = 0;


 if (VAR_1 == VAR_0)
 {
  return 0;
 }

 if (VAR_3 != VAR_2)
 {
  bool VAR_6 = FUNC_0(VAR_3, VAR_4);
  bool VAR_7 = FUNC_1(VAR_3, VAR_4);





  if (!VAR_6 && !VAR_7)
  {
   VAR_5 = 1;
  }
 }

 return VAR_5;
}
