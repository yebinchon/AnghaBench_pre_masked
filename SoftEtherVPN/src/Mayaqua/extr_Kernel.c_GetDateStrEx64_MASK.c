
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int UINT64 ;
typedef int UINT ;
struct TYPE_5__ {int Unknown; } ;
typedef int SYSTEMTIME ;
typedef TYPE_1__ LOCALE ;


 int FUNC_0 (int *,int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_1__ VAR_0 ;

void FUNC_5(wchar_t *VAR_1, UINT VAR_2, UINT64 VAR_3, LOCALE *VAR_4)
{
 SYSTEMTIME VAR_5;
 if (VAR_4 == ((void*)0))
 {
  VAR_4 = &VAR_0;
 }
 if (VAR_3 == 0 || FUNC_2(VAR_3) == 0 || FUNC_1(VAR_3) == 0)
 {
  FUNC_4(VAR_1, VAR_2, VAR_4->Unknown);
  return;
 }
 FUNC_3(&VAR_5, VAR_3);
 FUNC_0(VAR_1, VAR_2, &VAR_5, VAR_4);
}
