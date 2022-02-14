
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ Now; scalar_t__ NextArpTablePolling; } ;
typedef TYPE_1__ VH ;
typedef scalar_t__ UINT64 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(VH *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->Now > VAR_1->NextArpTablePolling)
 {
  VAR_1->NextArpTablePolling = VAR_1->Now + (UINT64)VAR_0;
  FUNC_0(VAR_1);
 }
}
