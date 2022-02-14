
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32 ;
struct TYPE_3__ {scalar_t__ pollmode; } ;
typedef TYPE_1__ MultiConnectionPollState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static uint32
FUNC_0(MultiConnectionPollState *VAR_3)
{
 uint32 VAR_4 = 0;
 if (VAR_3->pollmode == VAR_0)
 {
  VAR_4 |= VAR_1;
 }
 else
 {
  VAR_4 |= VAR_2;
 }
 return VAR_4;
}
