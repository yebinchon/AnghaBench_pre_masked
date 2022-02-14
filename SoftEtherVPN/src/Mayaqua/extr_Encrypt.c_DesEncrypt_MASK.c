
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
typedef int UCHAR ;
struct TYPE_3__ {int KeySchedule; } ;
typedef int DES_cblock ;
typedef TYPE_1__ DES_KEY_VALUE ;


 int FUNC_0 (int *,void*,int) ;
 int VAR_0 ;
 int FUNC_1 (void*,void*,scalar_t__,int ,int *,int) ;

void FUNC_2(void *VAR_1, void *VAR_2, UINT VAR_3, DES_KEY_VALUE *VAR_4, void *VAR_5)
{
 UCHAR VAR_6[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0) || VAR_3 == 0 || VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_0(VAR_6, VAR_5, VAR_0);

 FUNC_1(VAR_2, VAR_1, VAR_3,
  VAR_4->KeySchedule,
  (DES_cblock *)VAR_6,
  1);
}
