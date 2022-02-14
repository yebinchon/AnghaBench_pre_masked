
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct txfcb {int flags; int l4os; scalar_t__ l3os; int phcs; } ;
struct sk_buff {int dummy; } ;
struct TYPE_6__ {scalar_t__ protocol; } ;
struct TYPE_5__ {int check; } ;
struct TYPE_4__ {int check; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_2__* FUNC_3 (struct sk_buff*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_5(struct sk_buff *VAR_4, struct txfcb *VAR_5)
{
 u8 VAR_6 = 0;





 VAR_6 = VAR_2;



 if (FUNC_0(VAR_4)->protocol == VAR_1) {
  VAR_6 |= VAR_3;
  VAR_5->phcs = FUNC_4(VAR_4)->check;
 } else
  VAR_5->phcs = FUNC_3(VAR_4)->check;





 VAR_5->l3os = (u16)(FUNC_2(VAR_4) - VAR_0);
 VAR_5->l4os = FUNC_1(VAR_4);

 VAR_5->flags = VAR_6;
}
