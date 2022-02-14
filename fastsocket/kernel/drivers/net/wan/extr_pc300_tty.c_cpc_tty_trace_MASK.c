
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int len; char* data; int pkt_type; int protocol; TYPE_1__* dev; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
typedef TYPE_2__ pc300dev_t ;
struct TYPE_4__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int ,int) ;
 int FUNC_5 (struct sk_buff*,int,char*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(pc300dev_t *VAR_2, char* VAR_3, int VAR_4, char VAR_5)
{
 struct sk_buff *VAR_6;

 if ((VAR_6 = FUNC_1(10 + VAR_4)) == ((void*)0)) {

  FUNC_0("%s: tty_trace - out of memory\n", VAR_2->dev->name);
  return;
 }

 FUNC_6 (VAR_6, 10 + VAR_4);
 VAR_6->dev = VAR_2->dev;
 VAR_6->protocol = FUNC_2(VAR_0);
 FUNC_7(VAR_6);
 VAR_6->pkt_type = VAR_1;
 VAR_6->len = 10 + VAR_4;

 FUNC_4(VAR_6, VAR_2->dev->name, 5);
 VAR_6->data[5] = '[';
 VAR_6->data[6] = VAR_5;
 VAR_6->data[7] = ']';
 VAR_6->data[8] = ':';
 VAR_6->data[9] = ' ';
 FUNC_5(VAR_6, 10, VAR_3, VAR_4);
 FUNC_3(VAR_6);
}
