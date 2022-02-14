
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct ar9170 {int dummy; } ;
struct TYPE_2__ {int mac_control; } ;
struct _carl9170_tx_superframe {TYPE_1__ f; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ar9170 *VAR_1, struct sk_buff *VAR_2)
{
 struct _carl9170_tx_superframe *VAR_3;

 VAR_3 = (void *) VAR_2->data;
 VAR_3->f.mac_control |= FUNC_0(VAR_0);
}
