
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32 ;
typedef int List ;


 int * FUNC_0 (int *,void*) ;
 void* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;

__attribute__((used)) static List *
FUNC_4(List *VAR_0, uint32 VAR_1)
{
 List *VAR_2 = FUNC_2(VAR_0);

 uint32 VAR_3 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
 {
  void *VAR_4 = FUNC_1(VAR_2);

  VAR_2 = FUNC_3(VAR_2);
  VAR_2 = FUNC_0(VAR_2, VAR_4);
 }

 return VAR_2;
}
