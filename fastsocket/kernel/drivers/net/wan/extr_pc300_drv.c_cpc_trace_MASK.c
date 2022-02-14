
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {char* data; scalar_t__ len; int pkt_type; int protocol; struct net_device* dev; } ;
struct net_device {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct sk_buff*,char*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,int ,int) ;
 int FUNC_6 (struct sk_buff*,scalar_t__) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_2, struct sk_buff *VAR_3, char VAR_4)
{
 struct sk_buff *VAR_5;

 if ((VAR_5 = FUNC_0(10 + VAR_3->len)) == ((void*)0)) {
  FUNC_3("%s: out of memory\n", VAR_2->name);
  return;
 }
 FUNC_6(VAR_5, 10 + VAR_3->len);

 VAR_5->dev = VAR_2;
 VAR_5->protocol = FUNC_1(VAR_0);
 FUNC_7(VAR_5);
 VAR_5->pkt_type = VAR_1;
 VAR_5->len = 10 + VAR_3->len;

 FUNC_5(VAR_5, VAR_2->name, 5);
 VAR_5->data[5] = '[';
 VAR_5->data[6] = VAR_4;
 VAR_5->data[7] = ']';
 VAR_5->data[8] = ':';
 VAR_5->data[9] = ' ';
 FUNC_4(VAR_3, &VAR_5->data[10], VAR_3->len);

 FUNC_2(VAR_5);
}
