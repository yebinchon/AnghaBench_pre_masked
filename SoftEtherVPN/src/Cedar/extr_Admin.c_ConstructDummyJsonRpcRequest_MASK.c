
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rand ;
typedef int id_str ;
typedef int UCHAR ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;


 int FUNC_0 (char*,int,int *,int) ;
 int * FUNC_1 () ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,char*,char*) ;
 int FUNC_5 (int *,int) ;

JSON_VALUE *FUNC_6(char *VAR_0, JSON_VALUE *VAR_1)
{
 JSON_VALUE *VAR_2;
 JSON_OBJECT *VAR_3;
 UCHAR VAR_4[16];
 char VAR_5[64];

 FUNC_5(VAR_4, sizeof(VAR_4));

 FUNC_0(VAR_5, sizeof(VAR_5), VAR_4, sizeof(VAR_4));

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_2(VAR_2);

 FUNC_4(VAR_3, "jsonrpc", "2.0");
 FUNC_4(VAR_3, "method", VAR_0);
 FUNC_3(VAR_3, "params", VAR_1);
 FUNC_4(VAR_3, "id", VAR_5);

 return VAR_2;
}
