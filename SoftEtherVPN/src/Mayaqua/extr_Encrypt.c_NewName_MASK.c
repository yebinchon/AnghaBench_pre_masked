
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_4__ {void* Local; void* State; void* Country; void* Unit; void* Organization; void* CommonName; } ;
typedef TYPE_1__ NAME ;


 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int) ;

NAME *FUNC_3(wchar_t *VAR_0, wchar_t *VAR_1, wchar_t *VAR_2,
     wchar_t *VAR_3, wchar_t *VAR_4, wchar_t *VAR_5)
{
 NAME *VAR_6 = FUNC_2(sizeof(NAME));

 if (FUNC_1(VAR_0) == 0)
 {
  VAR_6->CommonName = FUNC_0(VAR_0);
 }

 if (FUNC_1(VAR_1) == 0)
 {
  VAR_6->Organization = FUNC_0(VAR_1);
 }

 if (FUNC_1(VAR_2) == 0)
 {
  VAR_6->Unit = FUNC_0(VAR_2);
 }

 if (FUNC_1(VAR_3) == 0)
 {
  VAR_6->Country = FUNC_0(VAR_3);
 }

 if (FUNC_1(VAR_4) == 0)
 {
  VAR_6->State = FUNC_0(VAR_4);
 }

 if (FUNC_1(VAR_5) == 0)
 {
  VAR_6->Local = FUNC_0(VAR_5);
 }

 return VAR_6;
}
