
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ Size; int Buf; } ;
struct TYPE_5__ {int AsyncMode; TYPE_4__* SendBuf; } ;
typedef TYPE_1__ SOCK ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_1__*,int ,scalar_t__,int) ;

bool FUNC_2(SOCK *VAR_0, int VAR_1)
{
 bool VAR_2;

 if (VAR_0 == ((void*)0) || VAR_0->AsyncMode != 0)
 {
  return 0;
 }
 if (VAR_0->SendBuf->Size == 0)
 {
  return 1;
 }

 VAR_2 = FUNC_1(VAR_0, VAR_0->SendBuf->Buf, VAR_0->SendBuf->Size, VAR_1);
 FUNC_0(VAR_0->SendBuf);

 return VAR_2;
}
