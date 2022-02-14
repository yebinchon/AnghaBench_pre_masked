
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int HamMode; int HamBuf; int pData; } ;
typedef TYPE_1__ IO ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,void*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,void*,scalar_t__) ;

bool FUNC_4(IO *VAR_2, void *VAR_3, UINT VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }


 FUNC_1(VAR_0);
 FUNC_0(VAR_1, VAR_4);

 if (VAR_4 == 0)
 {
  return 1;
 }

 if (VAR_2->HamMode == 0)
 {
  return FUNC_2(VAR_2->pData, VAR_3, VAR_4);
 }
 else
 {
  return FUNC_3(VAR_2->HamBuf, VAR_3, VAR_4) == VAR_4 ? 1 : 0;
 }
}
