
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int lock; } ;
struct fcoe_percpu_s {TYPE_1__ fcoe_rx_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(void *VAR_3)
{
 struct fcoe_percpu_s *VAR_4 = VAR_3;
 struct sk_buff *VAR_5;

 FUNC_6(VAR_2, -20);
 FUNC_5(VAR_0);
 while (!FUNC_3()) {
  FUNC_4();
  FUNC_7(&VAR_4->fcoe_rx_list.lock);
  while ((VAR_5 = FUNC_1(&VAR_4->fcoe_rx_list)) != ((void*)0)) {
   FUNC_8(&VAR_4->fcoe_rx_list.lock);
   FUNC_2(VAR_5);
   FUNC_7(&VAR_4->fcoe_rx_list.lock);
  }
  FUNC_0(VAR_0);
  FUNC_8(&VAR_4->fcoe_rx_list.lock);
 }
 FUNC_0(VAR_1);
 return 0;
}
