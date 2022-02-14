
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct usbnet {int maxpacket; } ;
struct sk_buff {int len; int data; scalar_t__ head; } ;
typedef int gfp_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int,int,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct usbnet *VAR_2, struct sk_buff *VAR_3,
           gfp_t VAR_4)
{
 struct sk_buff *VAR_5 = ((void*)0);
 u16 VAR_6 = VAR_3->len;
 u32 VAR_7 = 0;
 int VAR_8 = 0;







 if (!((VAR_6 + VAR_0 + VAR_1) % VAR_2->maxpacket))
  VAR_8 += 2;

 if (!FUNC_6(VAR_3)) {
  int VAR_9 = FUNC_8(VAR_3);
  int VAR_10 = FUNC_12(VAR_3);

  if ((VAR_10 >= VAR_1 + VAR_8)
    && (VAR_9 >= VAR_0))
   goto done;

  if ((VAR_9 + VAR_10)
    > (VAR_0 + VAR_1 + VAR_8)) {
   VAR_3->data = FUNC_3(VAR_3->head +
     VAR_0,
     VAR_3->data,
     VAR_3->len);
   FUNC_11(VAR_3, VAR_6);
   goto done;
  }
 }

 VAR_5 = FUNC_7(VAR_3, VAR_0, VAR_1 + VAR_8, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 FUNC_2(VAR_3);
 VAR_3 = VAR_5;

done:

 VAR_7 = FUNC_1(~0, VAR_3->data, VAR_3->len);
 VAR_7 = ~VAR_7;

 FUNC_5(VAR_7, FUNC_10(VAR_3, 4));






 VAR_6 = VAR_3->len;
 FUNC_4(FUNC_0(14) | VAR_6, FUNC_9(VAR_3, 2));


 if (VAR_8)
  FUNC_4(0, FUNC_10(VAR_3, 2));

 return VAR_3;
}
