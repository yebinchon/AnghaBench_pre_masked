
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_6__ {scalar_t__ PacketSize; } ;
struct TYPE_5__ {scalar_t__ LastTime; scalar_t__ Value; } ;
typedef TYPE_1__ TRAFFIC_LIMITER ;
typedef TYPE_2__ PKT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 () ;

void FUNC_1(TRAFFIC_LIMITER *VAR_1, PKT *VAR_2)
{
 UINT64 VAR_3 = FUNC_0();

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 if (VAR_1->LastTime == 0 || VAR_1->LastTime > VAR_3 ||
  (VAR_1->LastTime + VAR_0) < VAR_3)
 {

  VAR_1->Value = 0;
  VAR_1->LastTime = VAR_3;
 }


 VAR_1->Value += VAR_2->PacketSize * (UINT64)8;
}
