
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef int VALUE ;
typedef int UINT ;
typedef int ELEMENT ;
typedef int BUF ;


 int FUNC_0 (int **) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int * FUNC_2 (char*,int,int,int **) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int) ;
 int * FUNC_5 (int *,int) ;

ELEMENT *FUNC_6(BUF *VAR_2)
{
 UINT VAR_3;
 char VAR_4[VAR_0 + 1];
 UINT VAR_5, VAR_6;
 VALUE **VAR_7;
 ELEMENT *VAR_8;

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }


 if (FUNC_4(VAR_2, VAR_4, sizeof(VAR_4)) == 0)
 {
  return ((void*)0);
 }


 VAR_5 = FUNC_3(VAR_2);


 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6 > VAR_1)
 {

  return ((void*)0);
 }


 VAR_7 = (VALUE **)FUNC_1(sizeof(VALUE *) * VAR_6);
 for (VAR_3 = 0;VAR_3 < VAR_6;VAR_3++)
 {
  VAR_7[VAR_3] = FUNC_5(VAR_2, VAR_5);
 }


 VAR_8 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_0(VAR_7);

 return VAR_8;
}
