
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct usbnet {int dummy; } ;
struct sk_buff {int len; int data; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ,int,int ) ;
 int* FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(struct usbnet *VAR_0, struct sk_buff *VAR_1, gfp_t VAR_2)
{
 int VAR_3;
 struct sk_buff *VAR_4;

 VAR_3 = 2;
 if (!FUNC_2(VAR_1)) {
  int VAR_5 = FUNC_5(VAR_1);
  if ((VAR_3 + 4) <= VAR_5)
   goto done;
 }
 VAR_4 = FUNC_3(VAR_1, 0, 4 + VAR_3, VAR_2);
 FUNC_1(VAR_1);
 VAR_1 = VAR_4;
 if (VAR_1) {
  u32 VAR_6;
done:
  VAR_6 = FUNC_0(~0, VAR_1->data, VAR_1->len);
  VAR_6 = ~VAR_6;

  *FUNC_4 (VAR_1, 1) = VAR_6 & 0xff;
  *FUNC_4 (VAR_1, 1) = (VAR_6>> 8) & 0xff;
  *FUNC_4 (VAR_1, 1) = (VAR_6>>16) & 0xff;
  *FUNC_4 (VAR_1, 1) = (VAR_6>>24) & 0xff;
 }
 return VAR_1;
}
