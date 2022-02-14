
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int* start; int size; int idx; } ;
struct tiger_hw {TYPE_2__ send; int name; } ;
struct TYPE_3__ {int nr; struct tiger_hw* hw; } ;
struct tiger_ch {TYPE_1__ bch; } ;


 int FUNC_0 (char*,int ,int,int,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct tiger_ch *VAR_0, u32 VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tiger_hw *VAR_4 = VAR_0->bch.hw;
 u32 VAR_5 = 0xff, VAR_6;

 FUNC_0("%s: B%1d fill %02x len %d idx %d/%d\n", VAR_4->name,
  VAR_0->bch.nr, VAR_3, VAR_2, VAR_1, VAR_4->send.idx);
 if (VAR_0->bch.nr & 2) {
  VAR_3 <<= 8;
  VAR_5 <<= 8;
 }
 VAR_5 ^= 0xffffffff;
 while (VAR_2--) {
  VAR_6 = VAR_4->send.start[VAR_1];
  VAR_6 &= VAR_5;
  VAR_6 |= VAR_3;
  VAR_4->send.start[VAR_1++] = VAR_6;
  if (VAR_1 >= VAR_4->send.size)
   VAR_1 = 0;
 }
}
