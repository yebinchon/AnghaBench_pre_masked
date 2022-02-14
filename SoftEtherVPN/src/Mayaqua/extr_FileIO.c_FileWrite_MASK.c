
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_3__ {int WriteMode; int pData; } ;
typedef TYPE_1__ IO ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,void*,scalar_t__) ;

bool FUNC_3(IO *VAR_2, void *VAR_3, UINT VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }
 if (VAR_2->WriteMode == 0)
 {
  return 0;
 }


 FUNC_1(VAR_1);
 FUNC_0(VAR_0, VAR_4);

 if (VAR_4 == 0)
 {
  return 1;
 }

 return FUNC_2(VAR_2->pData, VAR_3, VAR_4);
}
