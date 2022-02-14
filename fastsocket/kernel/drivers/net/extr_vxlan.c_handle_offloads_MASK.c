
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; } ;
struct TYPE_2__ {int gso_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4)
{
 if (FUNC_0(VAR_4)) {
  int VAR_5 = FUNC_2(VAR_4, VAR_2);
  if (FUNC_3(VAR_5))
   return VAR_5;

  FUNC_1(VAR_4)->gso_type |= VAR_3;
 } else if (VAR_4->ip_summed != VAR_1)
  VAR_4->ip_summed = VAR_0;

 return 0;
}
