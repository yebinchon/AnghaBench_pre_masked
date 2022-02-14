
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int X ;
struct TYPE_3__ {int Cedar; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT ;
typedef int BUF ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *,int) ;
 int * FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(CLIENT *VAR_0, FOLDER *VAR_1)
{
 BUF *VAR_2;
 X *VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_2(VAR_1, "X509");
 if (VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = FUNC_1(VAR_2, 0);

 FUNC_0(VAR_0->Cedar, VAR_3);

 FUNC_4(VAR_3);

 FUNC_3(VAR_2);
}
