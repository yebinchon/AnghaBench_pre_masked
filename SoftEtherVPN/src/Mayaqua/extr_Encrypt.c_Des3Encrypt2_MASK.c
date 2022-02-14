
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_5__ {int KeySchedule; } ;
typedef int DES_cblock ;
typedef TYPE_1__ DES_KEY_VALUE ;


 int FUNC_0 (int *,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,scalar_t__,int ,int ,int ,int *,int) ;

void FUNC_2(void *VAR_1, void *VAR_2, UINT VAR_3, DES_KEY_VALUE *VAR_4, DES_KEY_VALUE *VAR_5, DES_KEY_VALUE *VAR_6, void *VAR_7)
{
 UCHAR VAR_8[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0 || VAR_4 == ((void*)0) || VAR_5 == ((void*)0) || VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_8, VAR_7, VAR_0);

 FUNC_1(VAR_2, VAR_1, VAR_3,
  VAR_4->KeySchedule,
  VAR_5->KeySchedule,
  VAR_6->KeySchedule,
  (DES_cblock *)VAR_8,
  1);
}
