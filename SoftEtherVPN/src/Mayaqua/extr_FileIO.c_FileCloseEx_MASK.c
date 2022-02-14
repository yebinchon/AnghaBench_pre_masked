
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int HamMode; int HamBuf; int pData; int SetUpdateTime; int SetCreateTime; scalar_t__ WriteMode; } ;
typedef TYPE_1__ IO ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(IO *VAR_1, bool VAR_2)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->HamMode == 0)
 {
  if (VAR_1->WriteMode)
  {



  }

  FUNC_3(VAR_1->pData, VAR_2);
 }
 else
 {
  FUNC_1(VAR_1->HamBuf);
 }
 FUNC_0(VAR_1);


 FUNC_2(VAR_0);
}
