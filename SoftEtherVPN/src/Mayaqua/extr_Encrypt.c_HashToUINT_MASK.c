
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *,void*,int ) ;

UINT FUNC_3(void *VAR_1, UINT VAR_2)
{
 UCHAR VAR_3[VAR_0];
 UINT VAR_4;

 if (VAR_1 == ((void*)0) && VAR_2 != 0)
 {
  return 0;
 }

 FUNC_2(VAR_3, VAR_1, VAR_2);

 FUNC_0(&VAR_4, VAR_3, sizeof(UINT));

 VAR_4 = FUNC_1(VAR_4);

 return VAR_4;
}
