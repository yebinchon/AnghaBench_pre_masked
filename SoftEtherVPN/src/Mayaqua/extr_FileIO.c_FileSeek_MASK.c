
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int HamMode; int pData; } ;
typedef TYPE_1__ IO ;


 int FUNC_0 (int ,int ,int) ;

bool FUNC_1(IO *VAR_0, UINT VAR_1, int VAR_2)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->HamMode == 0)
 {
  return FUNC_0(VAR_0->pData, VAR_1, VAR_2);
 }
 else
 {
  return 0;
 }
}
