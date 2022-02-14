
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static inline int FUNC_0(u16 VAR_9, u16 VAR_10)
{
 if ((VAR_9 == VAR_6 && VAR_10 == 16) ||
     (VAR_9 == VAR_7 && VAR_10 == 16))
  return 1;

 if (VAR_8)
  return (VAR_9 == VAR_0 && VAR_10 == 8) ||
         (VAR_9 == VAR_3 && VAR_10 == 16) ||
         (VAR_9 == VAR_4 && VAR_10 == 16) ||
         (VAR_9 == VAR_1 && VAR_10 == 24) ||
         (VAR_9 == VAR_2 && VAR_10 == 32) ||
         (VAR_9 == VAR_5 && VAR_10 == 16);

 return 0;
}
