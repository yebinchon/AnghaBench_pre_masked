
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ LastSendBeacon; } ;
typedef TYPE_1__ VH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;

void FUNC_2(VH *VAR_1)
{

 if (VAR_1 == ((void*)0))
 {
  return;
 }

 if (VAR_1->LastSendBeacon == 0 ||
  ((VAR_1->LastSendBeacon + VAR_0) <= FUNC_1()))
 {
  VAR_1->LastSendBeacon = FUNC_1();

  FUNC_0(VAR_1);
 }
}
