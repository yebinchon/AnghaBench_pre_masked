
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbnet {int maxpacket; } ;
struct sk_buff {int len; int data; scalar_t__ head; } ;
typedef int gfp_t ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int,int,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_11(struct usbnet *VAR_1,
  struct sk_buff *VAR_2, gfp_t VAR_3)
{
 int VAR_4 = VAR_2->len;
 int VAR_5 = VAR_4 + VAR_0;
 int VAR_6 = FUNC_8(VAR_2);
 int VAR_7 = FUNC_10(VAR_2);
 int VAR_8 = 0;
 __le16 *VAR_9;


 if ((VAR_5) < VAR_1->maxpacket)
  VAR_8 = VAR_1->maxpacket - VAR_5 + 1;





 else if (!(VAR_5 % VAR_1->maxpacket))
  VAR_8 = 1;

 if (!FUNC_6(VAR_2) &&
   (VAR_6 + VAR_7 >= VAR_8 + VAR_0)) {
  if (VAR_6 < VAR_0 || VAR_7 < VAR_8) {
   VAR_2->data = FUNC_4(VAR_2->head + VAR_0,
     VAR_2->data, VAR_2->len);
   FUNC_9(VAR_2, VAR_2->len);
  }
 } else {
  struct sk_buff *VAR_10;

  VAR_10 = FUNC_7(VAR_2,
    VAR_0,
    VAR_8,
    VAR_3);
  FUNC_3(VAR_2);
  if (!VAR_10)
   return ((void*)0);
  VAR_2 = VAR_10;
 }

 VAR_4 += VAR_8;
 VAR_4 &= 0x07ff;

 VAR_9 = (__le16 *) FUNC_0(VAR_2, VAR_0);
 *VAR_9 = FUNC_2(VAR_4);

 if(VAR_8)
  FUNC_5(FUNC_1(VAR_2, VAR_8), 0, VAR_8);

 return VAR_2;
}
