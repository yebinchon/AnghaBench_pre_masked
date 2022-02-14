
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct clk {int * round_rate; int * set_rate; } ;
struct TYPE_4__ {scalar_t__ round_rate; scalar_t__ set_rate; } ;


 int FUNC_0 (TYPE_1__**) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (TYPE_1__**,int ,struct clk*) ;
 int * VAR_3 ;
 int * VAR_4 ;
 TYPE_1__** VAR_5 ;

__attribute__((used)) static int FUNC_4(struct clk *VAR_6, struct clk *VAR_7)
{
 int VAR_8;
 unsigned int VAR_9;

 VAR_8 = FUNC_3(VAR_5, FUNC_0(VAR_5), VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_9 = FUNC_1(VAR_0) & ~VAR_1;
 VAR_9 |= VAR_8 << VAR_2;
 FUNC_2(VAR_9, VAR_0);

 if (VAR_5[VAR_8]->set_rate && VAR_5[VAR_8]->round_rate) {
  VAR_6->set_rate = VAR_4;
  VAR_6->round_rate = VAR_3;
 } else {
  VAR_6->set_rate = ((void*)0);
  VAR_6->round_rate = ((void*)0);
 }

 return 0;
}
