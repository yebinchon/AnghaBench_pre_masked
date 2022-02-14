
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {int chan; scalar_t__ fire; int callback; int in_bytes; int in; int out_bytes; int out; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int * VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(u32 VAR_2)
{
 u32 VAR_3;
 u64 VAR_4;
 s64 VAR_5;
 VAR_3 = 0;
 while(VAR_3<4) {
  VAR_2++;
  VAR_2 %= 4;
  if(VAR_1[VAR_2].chan!=-1) {
   VAR_4 = FUNC_2();
   VAR_5 = (VAR_4 - VAR_1[VAR_2].fire);
   if(VAR_5>=0) {
    if(!FUNC_1(VAR_1[VAR_2].chan,VAR_1[VAR_2].out,VAR_1[VAR_2].out_bytes,VAR_1[VAR_2].in,VAR_1[VAR_2].in_bytes,VAR_1[VAR_2].callback)) break;
    FUNC_0(VAR_0[VAR_2]);
    VAR_1[VAR_2].chan = -1;
   }
  }
  VAR_3++;
 }
}
