
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int maxpacket; } ;
struct sk_buff {int len; int* data; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_4(struct usbnet *VAR_1, struct sk_buff *VAR_2,
           gfp_t VAR_3)
{
 int VAR_4;







 VAR_4 = VAR_2->len;

 if (FUNC_3(VAR_2) < VAR_0) {
  struct sk_buff *VAR_5;

  VAR_5 = FUNC_2(VAR_2, VAR_0, 0, VAR_3);
  FUNC_1(VAR_2);
  VAR_2 = VAR_5;
  if (!VAR_2)
   return ((void*)0);
 }

 FUNC_0(VAR_2, VAR_0);



 if ((VAR_2->len % VAR_1->maxpacket) == 0)
  VAR_4++;

 VAR_2->data[0] = VAR_4;
 VAR_2->data[1] = VAR_4 >> 8;

 return VAR_2;
}
