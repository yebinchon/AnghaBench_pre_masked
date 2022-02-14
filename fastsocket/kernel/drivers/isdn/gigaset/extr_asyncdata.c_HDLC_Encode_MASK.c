
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; int len; int head; } ;
typedef int __u16 ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (int,int ) ;
 struct sk_buff* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ,int ,int) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 unsigned char* FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sk_buff *VAR_4, int VAR_5, int VAR_6)
{
 struct sk_buff *VAR_7;
 __u16 VAR_8;
 unsigned char VAR_9;
 unsigned char *VAR_10;
 int VAR_11;
 unsigned int VAR_12;

 VAR_12 = 0;
 VAR_8 = VAR_2;
 VAR_10 = VAR_4->data;
 VAR_11 = VAR_4->len;
 while (VAR_11--) {
  if (FUNC_4(*VAR_10))
   VAR_12++;
  VAR_8 = FUNC_0(VAR_8, *VAR_10++);
 }
 VAR_8 ^= 0xffff;




 VAR_7 = FUNC_1(VAR_4->len + VAR_12 + 6 + VAR_6 + VAR_5);
 if (!VAR_7) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }
 FUNC_6(VAR_7, VAR_5);


 FUNC_3(VAR_7->head, VAR_4->head, 2);


 *(FUNC_5(VAR_7, 1)) = VAR_1;


 while (VAR_4->len--) {
  if (FUNC_4(*VAR_4->data)) {
   *(FUNC_5(VAR_7, 1)) = VAR_0;
   *(FUNC_5(VAR_7, 1)) = (*VAR_4->data++) ^ VAR_3;
  } else
   *(FUNC_5(VAR_7, 1)) = *VAR_4->data++;
 }


 VAR_9 = (VAR_8 & 0x00ff);
 if (FUNC_4(VAR_9)) {
  *(FUNC_5(VAR_7, 1)) = VAR_0;
  VAR_9 ^= VAR_3;
 }
 *(FUNC_5(VAR_7, 1)) = VAR_9;

 VAR_9 = ((VAR_8 >> 8) & 0x00ff);
 if (FUNC_4(VAR_9)) {
  *(FUNC_5(VAR_7, 1)) = VAR_0;
  VAR_9 ^= VAR_3;
 }
 *(FUNC_5(VAR_7, 1)) = VAR_9;

 *(FUNC_5(VAR_7, 1)) = VAR_1;

 FUNC_2(VAR_4);
 return VAR_7;
}
