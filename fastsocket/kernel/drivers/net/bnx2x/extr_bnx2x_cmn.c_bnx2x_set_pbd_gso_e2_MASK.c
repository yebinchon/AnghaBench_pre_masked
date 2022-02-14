
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ nexthdr; } ;
struct TYPE_3__ {int gso_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_5, u32 *VAR_6,
     u32 VAR_7)
{
 *VAR_6 |= (FUNC_1(VAR_5)->gso_size <<
         VAR_2) &
         VAR_1;
 if ((VAR_7 & VAR_4) &&
     (FUNC_0(VAR_5)->nexthdr == VAR_3))
  *VAR_6 |= VAR_0;
}
