
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {int ip_summed; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct sk_buff *VAR_6, u32 VAR_7)
{
 u32 VAR_8 = VAR_7 & VAR_1;

 if (((VAR_8 == VAR_2) && !(VAR_7 & VAR_4)) ||
     ((VAR_8 == VAR_3) && !(VAR_7 & VAR_5)))
  VAR_6->ip_summed = VAR_0;
 else
  FUNC_0(VAR_6);
}
