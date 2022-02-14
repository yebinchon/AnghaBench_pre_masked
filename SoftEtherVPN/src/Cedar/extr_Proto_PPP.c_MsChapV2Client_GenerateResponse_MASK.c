
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int password_hash_2 ;
typedef int key3 ;
typedef int key2 ;
typedef int key1 ;
typedef int UCHAR ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int *,int *) ;
 int FUNC_2 (int *,int) ;

void FUNC_3(UCHAR *VAR_0, UCHAR *VAR_1, UCHAR *VAR_2)
{
 UCHAR VAR_3[21];
 UCHAR VAR_4[8], VAR_5[8], VAR_6[8];

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 FUNC_2(VAR_3, sizeof(VAR_3));
 FUNC_0(VAR_3, VAR_2, 16);

 FUNC_2(VAR_4, sizeof(VAR_4));
 FUNC_2(VAR_5, sizeof(VAR_5));
 FUNC_2(VAR_6, sizeof(VAR_6));

 FUNC_0(VAR_4, VAR_3 + 0, 7);
 FUNC_0(VAR_5, VAR_3 + 7, 7);
 FUNC_0(VAR_6, VAR_3 + 14, 7);

 FUNC_1(VAR_0 + 0, VAR_1, VAR_4);
 FUNC_1(VAR_0 + 8, VAR_1, VAR_5);
 FUNC_1(VAR_0 + 16, VAR_1, VAR_6);
}
