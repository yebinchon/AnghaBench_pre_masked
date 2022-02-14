
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct jme_adapter {int dummy; } ;
struct TYPE_2__ {scalar_t__ gso_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 TYPE_1__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int
FUNC_5(struct jme_adapter *VAR_1, struct sk_buff *VAR_2)
{
 if (FUNC_4(FUNC_3(VAR_2)->gso_size &&
   FUNC_2(VAR_2) &&
   FUNC_1(VAR_2, 0, 0, VAR_0))) {
  FUNC_0(VAR_2);
  return -1;
 }

 return 0;
}
