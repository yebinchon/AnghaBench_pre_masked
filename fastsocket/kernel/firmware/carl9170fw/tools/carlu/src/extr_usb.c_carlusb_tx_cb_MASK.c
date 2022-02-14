
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct frame {scalar_t__ len; } ;
struct carlu {int tx_octets; int (* tx_cb ) (struct carlu*,struct frame*) ;} ;


 int FUNC_0 (struct carlu*,struct frame*) ;
 int FUNC_1 (struct carlu*,struct frame*) ;

__attribute__((used)) static void FUNC_2(struct carlu *VAR_0,
         struct frame *VAR_1)
{
 if (VAR_0->tx_cb)
  VAR_0->tx_cb(VAR_0, VAR_1);

 VAR_0->tx_octets += VAR_1->len;

 FUNC_0(VAR_0, VAR_1);
}
