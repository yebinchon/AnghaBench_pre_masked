
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {TYPE_1__* parent; } ;
struct TYPE_2__ {unsigned long rate; } ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct clk *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = VAR_2->parent->rate / VAR_3;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_0); VAR_5++)
  if (VAR_0[VAR_5] == VAR_4)
   return VAR_1[VAR_5];


 return 5;
}
