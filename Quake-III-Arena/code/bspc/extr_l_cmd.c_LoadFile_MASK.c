
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 void* FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (int *,void*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;

int FUNC_6 (char *VAR_1, void **VAR_2, int VAR_3, int VAR_4)
{
 FILE *VAR_5;
 void *VAR_6;

 VAR_5 = FUNC_2(VAR_1);
 FUNC_5(VAR_5, VAR_3, VAR_0);
 if (!VAR_4) VAR_4 = FUNC_1(VAR_5);
 VAR_6 = FUNC_0(VAR_4+1);
 ((char *)VAR_6)[VAR_4] = 0;
 FUNC_3(VAR_5, VAR_6, VAR_4);
 FUNC_4(VAR_5);

 *VAR_2 = VAR_6;
 return VAR_4;
}
