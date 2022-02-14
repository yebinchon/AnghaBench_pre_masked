
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int msg ;
typedef int UINT64 ;
typedef int JSON_VALUE ;
typedef int JSON_OBJECT ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*,int *) ;
 int * FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (int *,int,char*,int,...) ;
 scalar_t__ FUNC_6 (int *) ;

JSON_VALUE *FUNC_7(int VAR_1, wchar_t *VAR_2)
{
 wchar_t VAR_3[VAR_0];
 JSON_VALUE *VAR_4;
 JSON_OBJECT *VAR_5;
 JSON_VALUE *VAR_6;
 JSON_OBJECT *VAR_7;

 if (FUNC_6(VAR_2))
 {
  FUNC_5(VAR_3, sizeof(VAR_3), L"Error code %u", VAR_1);
 }
 else
 {
  FUNC_5(VAR_3, sizeof(VAR_3), L"Error code %u: %s", VAR_1, VAR_2);
 }

 VAR_4 = FUNC_0();
 VAR_5 = FUNC_4(VAR_4);

 VAR_6 = FUNC_0();
 VAR_7 = FUNC_4(VAR_6);

 FUNC_1(VAR_5, "error", VAR_6);

 FUNC_2(VAR_7, "code", (UINT64)VAR_1);
 FUNC_3(VAR_7, "message", VAR_3);

 return VAR_4;
}
