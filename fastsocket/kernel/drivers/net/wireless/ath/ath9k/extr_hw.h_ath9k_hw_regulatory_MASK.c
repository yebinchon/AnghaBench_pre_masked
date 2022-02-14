
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_regulatory {int dummy; } ;
struct ath_hw {int dummy; } ;
struct TYPE_2__ {struct ath_regulatory regulatory; } ;


 TYPE_1__* FUNC_0 (struct ath_hw*) ;

__attribute__((used)) static inline struct ath_regulatory *FUNC_1(struct ath_hw *VAR_0)
{
 return &(FUNC_0(VAR_0)->regulatory);
}
