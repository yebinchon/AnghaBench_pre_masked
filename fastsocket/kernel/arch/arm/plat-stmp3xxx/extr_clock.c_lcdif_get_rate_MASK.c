
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clk {int const scale_shift; long rate; scalar_t__ scale_reg; TYPE_1__* parent; } ;
struct TYPE_2__ {long rate; } ;


 int const VAR_0 ;
 int const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int const FUNC_0 (scalar_t__) ;

__attribute__((used)) static long FUNC_1(struct clk *VAR_4)
{
 long VAR_5 = VAR_4->parent->rate;
 long VAR_6;
 const int VAR_7 = 0xff;

 VAR_6 = (FUNC_0(VAR_4->scale_reg) >> VAR_4->scale_shift) & VAR_7;
 if (VAR_6) {
  VAR_5 /= VAR_6;
  VAR_6 = (FUNC_0(VAR_3 + VAR_2) &
   VAR_0) >> VAR_1;
  VAR_5 /= VAR_6;
 }
 VAR_4->rate = VAR_5;

 return VAR_5;
}
