
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*,char*,char*) ;
 struct sk_buff* FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_6(int VAR_3)
{
 struct sk_buff *VAR_4;
 struct net_device *VAR_5;

 while ((VAR_4 = FUNC_3(&VAR_1))) {
  FUNC_5(&VAR_2);
  VAR_5 = VAR_4->dev;
  if (FUNC_0(VAR_4) == VAR_0 && FUNC_1())
   FUNC_2("aoe: packet could not be sent on %s.  %s\n",
    VAR_5 ? VAR_5->name : "netif",
    "consider increasing tx_queue_len");
  FUNC_4(&VAR_2);
 }
 return 0;
}
