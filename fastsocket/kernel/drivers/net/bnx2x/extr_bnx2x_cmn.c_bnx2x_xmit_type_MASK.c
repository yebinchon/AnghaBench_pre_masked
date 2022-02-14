
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; } ;
struct bnx2x {int dummy; } ;
struct TYPE_4__ {scalar_t__ protocol; } ;
struct TYPE_3__ {scalar_t__ nexthdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct sk_buff*) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static u32 FUNC_6(struct bnx2x *VAR_9, struct sk_buff *VAR_10)
{
 u32 VAR_11;

 if (VAR_10->ip_summed != VAR_0)
  VAR_11 = VAR_8;

 else {
  if (FUNC_5(VAR_10) == FUNC_0(VAR_1)) {
   VAR_11 = VAR_5;
   if (FUNC_2(VAR_10)->nexthdr == VAR_2)
    VAR_11 |= VAR_3;

  } else {
   VAR_11 = VAR_4;
   if (FUNC_1(VAR_10)->protocol == VAR_2)
    VAR_11 |= VAR_3;
  }
 }

 if (FUNC_4(VAR_10))
  VAR_11 |= (VAR_7 | VAR_3);
 else if (FUNC_3(VAR_10))
  VAR_11 |= (VAR_6 | VAR_3);

 return VAR_11;
}
