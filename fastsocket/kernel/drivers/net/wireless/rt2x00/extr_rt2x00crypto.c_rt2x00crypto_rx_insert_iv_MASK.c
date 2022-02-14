
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct rxdone_entry_desc {unsigned int size; int cipher; int dev_flags; int flags; int icv; int * iv; } ;


 unsigned int FUNC_0 (struct sk_buff*,unsigned int) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int *,int) ;
 int FUNC_2 (scalar_t__,scalar_t__,unsigned int) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 int FUNC_5 (struct sk_buff*,unsigned int) ;

void FUNC_6(struct sk_buff *VAR_2,
          unsigned int VAR_3,
          struct rxdone_entry_desc *VAR_4)
{
 unsigned int VAR_5 = VAR_4->size - VAR_3;
 unsigned int VAR_6 = FUNC_0(VAR_2, VAR_3);
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9 = 0;






 switch (VAR_4->cipher) {
 case 128:
 case 129:
  VAR_7 = 4;
  VAR_8 = 4;
  break;
 case 130:
  VAR_7 = 8;
  VAR_8 = 4;
  break;
 case 131:
  VAR_7 = 8;
  VAR_8 = 8;
  break;
 default:

  return;
 }
 if (VAR_4->dev_flags & VAR_0) {
  FUNC_3(VAR_2, VAR_7 - VAR_6);
  FUNC_4(VAR_2, VAR_8);


  FUNC_2(VAR_2->data + VAR_9,
   VAR_2->data + VAR_9 + (VAR_7 - VAR_6),
   VAR_3);
  VAR_9 += VAR_3;
 } else {
  FUNC_3(VAR_2, VAR_7 + VAR_6);
  if (VAR_6 < VAR_8)
   FUNC_4(VAR_2, VAR_8 - VAR_6);
  else if (VAR_6 > VAR_8)
   FUNC_5(VAR_2, VAR_4->size + VAR_7 + VAR_8);


  FUNC_2(VAR_2->data + VAR_9,
   VAR_2->data + VAR_9 + VAR_7 + VAR_6,
   VAR_3);
  VAR_9 += VAR_3;
 }


 FUNC_1(VAR_2->data + VAR_9, VAR_4->iv, VAR_7);
 VAR_9 += VAR_7;





 if (!(VAR_4->dev_flags & VAR_0)) {
  FUNC_2(VAR_2->data + VAR_9,
   VAR_2->data + VAR_9 + VAR_6,
   VAR_5);
 }






 VAR_9 += VAR_5;







 FUNC_1(VAR_2->data + VAR_9, &VAR_4->icv, 4);
 VAR_9 += VAR_8;


 VAR_4->size = VAR_9;
 VAR_4->flags &= ~VAR_1;
}
