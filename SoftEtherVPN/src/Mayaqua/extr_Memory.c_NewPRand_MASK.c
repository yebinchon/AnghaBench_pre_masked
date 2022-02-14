
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int dummy ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_4__ {int Rc4; int Key; } ;
typedef TYPE_1__ PRAND ;


 int FUNC_0 (int ,int *,int *,int) ;
 int FUNC_1 (void*,int) ;
 int FUNC_2 (int ,void*,int) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int) ;

PRAND *FUNC_5(void *VAR_0, UINT VAR_1)
{
 PRAND *VAR_2;
 UCHAR VAR_3[256];
 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  VAR_0 = "DUMMY";
  VAR_1 = 5;
 }

 VAR_2 = FUNC_4(sizeof(PRAND));

 FUNC_2(VAR_2->Key, VAR_0, VAR_1);

 VAR_2->Rc4 = FUNC_1(VAR_0, VAR_1);

 FUNC_3(VAR_3, sizeof(VAR_3));

 FUNC_0(VAR_2->Rc4, VAR_3, VAR_3, 256);

 return VAR_2;
}
