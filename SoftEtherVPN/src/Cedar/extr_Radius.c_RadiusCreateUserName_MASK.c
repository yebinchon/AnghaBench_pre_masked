
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int utf8 ;
typedef int UCHAR ;
typedef int BUF ;


 int * FUNC_0 () ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int*,int,int *) ;
 int FUNC_3 (int *,int*,int) ;

BUF *FUNC_4(wchar_t *VAR_0)
{
 BUF *VAR_1;
 UCHAR VAR_2, VAR_3;
 UCHAR VAR_4[254];

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }


 FUNC_2(VAR_4, sizeof(VAR_4), VAR_0);
 VAR_4[253] = 0;

 VAR_1 = FUNC_0();
 VAR_2 = 1;
 VAR_3 = 2 + (UCHAR)FUNC_1(VAR_4);
 FUNC_3(VAR_1, &VAR_2, 1);
 FUNC_3(VAR_1, &VAR_3, 1);
 FUNC_3(VAR_1, VAR_4, FUNC_1(VAR_4));

 return VAR_1;
}
