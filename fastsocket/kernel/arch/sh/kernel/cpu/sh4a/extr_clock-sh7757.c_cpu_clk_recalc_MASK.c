
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int rate; TYPE_1__* parent; } ;
struct TYPE_2__ {int rate; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct clk *VAR_2)
{
 int VAR_3 = (FUNC_0(VAR_0) >> 20) & 0x0000000f;
 VAR_2->rate = VAR_2->parent->rate / VAR_1[VAR_3];
}
