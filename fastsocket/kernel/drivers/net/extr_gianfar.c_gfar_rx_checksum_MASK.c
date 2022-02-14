
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int ip_summed; } ;
struct rxfcb {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(struct sk_buff *VAR_5, struct rxfcb *VAR_6)
{



 if ((VAR_6->flags & VAR_3) == (VAR_2 | VAR_4))
  VAR_5->ip_summed = VAR_1;
 else
  VAR_5->ip_summed = VAR_0;
}
