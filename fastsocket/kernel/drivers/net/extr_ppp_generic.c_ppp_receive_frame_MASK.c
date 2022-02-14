
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct ppp {TYPE_2__* dev; } ;
struct channel {int dummy; } ;
struct TYPE_3__ {int rx_length_errors; } ;
struct TYPE_4__ {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ppp*) ;
 int FUNC_3 (struct ppp*,struct sk_buff*,struct channel*) ;
 int FUNC_4 (struct ppp*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_6(struct ppp *VAR_1, struct sk_buff *VAR_2, struct channel *VAR_3)
{
 if (FUNC_5(VAR_2, 2)) {






   FUNC_4(VAR_1, VAR_2);
  return;
 }

 if (VAR_2->len > 0)

  ++VAR_1->dev->stats.rx_length_errors;

 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
}
