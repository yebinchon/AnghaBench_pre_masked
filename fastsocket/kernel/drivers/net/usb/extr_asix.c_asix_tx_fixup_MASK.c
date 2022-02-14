
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int dummy; } ;
struct sk_buff {int len; int data; scalar_t__ head; } ;
typedef int padbytes ;
typedef int packet_len ;
typedef int gfp_t ;


 int FUNC_0 (int*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int*,int) ;
 int FUNC_3 (scalar_t__,int ,int) ;
 int FUNC_4 (struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int,int,int ) ;
 int FUNC_6 (struct sk_buff*,int*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct sk_buff*,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_13(struct usbnet *VAR_0, struct sk_buff *VAR_1,
     gfp_t VAR_2)
{
 int VAR_3;
 int VAR_4 = FUNC_7(VAR_1);
 int VAR_5 = FUNC_12(VAR_1);
 u32 VAR_6;
 u32 VAR_7 = 0xffff0000;

 VAR_3 = ((VAR_1->len + 4) % 512) ? 0 : 4;

 if ((!FUNC_4(VAR_1))
     && ((VAR_4 + VAR_5) >= (4 + VAR_3))) {
  if ((VAR_4 < 4) || (VAR_5 < VAR_3)) {
   VAR_1->data = FUNC_3(VAR_1->head + 4, VAR_1->data, VAR_1->len);
   FUNC_10(VAR_1, VAR_1->len);
  }
 } else {
  struct sk_buff *VAR_8;
  VAR_8 = FUNC_5(VAR_1, 4, VAR_3, VAR_2);
  FUNC_1(VAR_1);
  VAR_1 = VAR_8;
  if (!VAR_1)
   return ((void*)0);
 }

 FUNC_8(VAR_1, 4);
 VAR_6 = (((VAR_1->len - 4) ^ 0x0000ffff) << 16) + (VAR_1->len - 4);
 FUNC_0(&VAR_6);
 FUNC_6(VAR_1, &VAR_6, sizeof(VAR_6));

 if ((VAR_1->len % 512) == 0) {
  FUNC_0(&VAR_7);
  FUNC_2(FUNC_11(VAR_1), &VAR_7, sizeof(VAR_7));
  FUNC_9(VAR_1, sizeof(VAR_7));
 }
 return VAR_1;
}
