
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int code; int range; scalar_t__ needFlush; } ;
typedef TYPE_1__ CLzmaDec ;



__attribute__((used)) static void FUNC_0(CLzmaDec *VAR_0, const uint8_t *VAR_1)
{
   VAR_0->code = ((uint32_t)VAR_1[1] << 24) | ((uint32_t)VAR_1[2] << 16) | ((uint32_t)VAR_1[3] << 8) | ((uint32_t)VAR_1[4]);
   VAR_0->range = 0xFFFFFFFF;
   VAR_0->needFlush = 0;
}
