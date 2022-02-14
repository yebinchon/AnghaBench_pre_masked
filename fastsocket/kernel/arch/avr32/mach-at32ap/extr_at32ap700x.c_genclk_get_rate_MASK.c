
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct clk {TYPE_1__* parent; int index; } ;
struct TYPE_2__ {unsigned long (* get_rate ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 unsigned long FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static unsigned long FUNC_5(struct clk *VAR_2)
{
 u32 VAR_3;
 unsigned long VAR_4 = 1;

 VAR_3 = FUNC_3(FUNC_0(VAR_2->index));
 if (VAR_3 & FUNC_2(VAR_1))
  VAR_4 = 2 * (FUNC_1(VAR_0, VAR_3) + 1);

 return VAR_2->parent->get_rate(VAR_2->parent) / VAR_4;
}
