
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long u64 ;
struct TYPE_2__ {unsigned long long upper_shift; unsigned long long upper_mask; int lower_mask; } ;
struct rsxx_cardinfo {TYPE_1__ _stripe; } ;
typedef unsigned long long addr8 ;


 int VAR_0 ;
 int FUNC_0 (unsigned long long,int ) ;

__attribute__((used)) static unsigned int FUNC_1(u64 VAR_1, struct rsxx_cardinfo *VAR_2)
{
 unsigned long long VAR_3;

 VAR_3 = ((VAR_1 >> VAR_2->_stripe.upper_shift) &
        VAR_2->_stripe.upper_mask) |
      ((VAR_1) & VAR_2->_stripe.lower_mask);
 FUNC_0(VAR_3, VAR_0);
 return VAR_3;
}
