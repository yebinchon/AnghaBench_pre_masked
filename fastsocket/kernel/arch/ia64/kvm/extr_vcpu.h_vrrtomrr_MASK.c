
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ia64_rr {unsigned long val; int rid; scalar_t__ ps; int ve; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline unsigned long FUNC_0(unsigned long VAR_1)
{
 union ia64_rr VAR_2;
 VAR_2.val = VAR_1;
 VAR_2.rid = (VAR_2.rid << 4) | 0xe;
 if (VAR_2.ps > VAR_0)
  VAR_2.ps = VAR_0;
 VAR_2.ve = 1;
 return VAR_2.val;
}
