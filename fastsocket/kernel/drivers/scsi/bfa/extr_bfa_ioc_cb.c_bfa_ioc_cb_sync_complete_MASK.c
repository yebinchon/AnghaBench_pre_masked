
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bfa_ioc_s {int dummy; } ;
typedef int bfa_boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (struct bfa_ioc_s*) ;
 scalar_t__ FUNC_1 (struct bfa_ioc_s*) ;

__attribute__((used)) static bfa_boolean_t
FUNC_2(struct bfa_ioc_s *VAR_8)
{
 u32 VAR_9, VAR_10;
 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 == VAR_7 ||
  VAR_9 == VAR_4 ||
  VAR_9 == VAR_2 ||
  VAR_9 == VAR_5 ||
  VAR_9 == VAR_6)
  return VAR_1;
 else {
  VAR_10 = FUNC_0(VAR_8);
  if (VAR_10 == VAR_3 ||
   VAR_10 == VAR_2 ||
   VAR_10 == VAR_7 ||
   VAR_10 == VAR_4 ||
   VAR_10 == VAR_5)
   return VAR_1;
  else
   return VAR_0;
 }
}
