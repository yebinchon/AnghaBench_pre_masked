
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT64 ;
struct TYPE_5__ {int HamMode; TYPE_1__* HamBuf; int pData; } ;
struct TYPE_4__ {int Size; } ;
typedef TYPE_2__ IO ;


 int FUNC_0 (int ) ;

UINT64 FUNC_1(IO *VAR_0)
{

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 if (VAR_0->HamMode == 0)
 {
  return FUNC_0(VAR_0->pData);
 }
 else
 {
  return (UINT64)VAR_0->HamBuf->Size;
 }
}
