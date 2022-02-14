
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UCHAR ;
struct TYPE_3__ {int Sock; } ;
typedef TYPE_1__ NOTIFY_CLIENT ;


 int FUNC_0 (int ,int *,int,int) ;

bool FUNC_1(NOTIFY_CLIENT *VAR_0)
{
 UCHAR VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }


 if (FUNC_0(VAR_0->Sock, &VAR_1, 1, 0) == 0)
 {

  return 0;
 }

 return 1;
}
