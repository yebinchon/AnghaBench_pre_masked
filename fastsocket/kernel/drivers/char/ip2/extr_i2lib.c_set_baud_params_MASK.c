
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* i2eBordStrPtr ;
typedef TYPE_3__* i2ChanStrPtr ;
struct TYPE_7__ {int BaudBase; int BaudDivisor; } ;
struct TYPE_5__ {scalar_t__* bid_value; } ;
struct TYPE_6__ {TYPE_1__ channelBtypes; scalar_t__ i2eChannelPtr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline void
FUNC_1(i2eBordStrPtr VAR_2)
{
 int VAR_3,VAR_4;
 i2ChanStrPtr *VAR_5;

 VAR_5 = (i2ChanStrPtr *) VAR_2->i2eChannelPtr;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  if (VAR_2->channelBtypes.bid_value[VAR_3]) {
   if (FUNC_0(VAR_2->channelBtypes.bid_value[VAR_3])) {
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
     if (VAR_5[VAR_3*16+VAR_4] == ((void*)0))
      break;
     (VAR_5[VAR_3*16+VAR_4])->BaudBase = 921600;
     (VAR_5[VAR_3*16+VAR_4])->BaudDivisor = 96;
    }
   } else {
    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
     if (VAR_5[VAR_3*16+VAR_4] == ((void*)0))
      break;
     (VAR_5[VAR_3*16+VAR_4])->BaudBase = 115200;
     (VAR_5[VAR_3*16+VAR_4])->BaudDivisor = 12;
    }
   }
  }
 }
}
