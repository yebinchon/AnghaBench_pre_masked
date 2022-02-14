
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int List ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,int *) ;

List *
FUNC_3(void)
{
 List *VAR_3 = VAR_1;
 List *VAR_4 = FUNC_0();

 VAR_3 = FUNC_2(VAR_3,
            VAR_4);

 VAR_3 = FUNC_1(VAR_3,
           VAR_2);

 VAR_3 = FUNC_1(VAR_3, VAR_0);

 return VAR_3;
}
