
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT ;
struct TYPE_3__ {char* CommonName; char* Organization; char* Unit; char* State; char* Local; char* Country; } ;
typedef TYPE_1__ NAME ;


 int FUNC_0 (int *,int ,char*) ;

void FUNC_1(wchar_t *VAR_0, UINT VAR_1, NAME *VAR_2)
{

 if (VAR_0 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_2->CommonName != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, VAR_2->CommonName);
 }
 else if (VAR_2->Organization != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, VAR_2->Organization);
 }
 else if (VAR_2->Unit != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, VAR_2->Unit);
 }
 else if (VAR_2->State != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, VAR_2->State);
 }
 else if (VAR_2->Local != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, VAR_2->Local);
 }
 else if (VAR_2->Country != ((void*)0))
 {
  FUNC_0(VAR_0, VAR_1, VAR_2->Country);
 }
 else
 {
  FUNC_0(VAR_0, VAR_1, L"untitled");
 }
}
