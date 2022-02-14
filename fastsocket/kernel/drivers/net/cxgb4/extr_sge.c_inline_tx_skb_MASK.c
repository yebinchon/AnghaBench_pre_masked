
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sk_buff {int len; int data_len; } ;
struct sge_txq {void* desc; scalar_t__ stat; } ;


 scalar_t__* FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff const*,int,void*,int) ;
 int FUNC_3 (struct sk_buff const*,void*,int) ;

__attribute__((used)) static void FUNC_4(const struct sk_buff *VAR_0, const struct sge_txq *VAR_1,
     void *VAR_2)
{
 u64 *VAR_3;
 int VAR_4 = (void *)VAR_1->stat - VAR_2;

 if (FUNC_1(VAR_0->len <= VAR_4)) {
  if (FUNC_1(!VAR_0->data_len))
   FUNC_3(VAR_0, VAR_2, VAR_0->len);
  else
   FUNC_2(VAR_0, 0, VAR_2, VAR_0->len);
  VAR_2 += VAR_0->len;
 } else {
  FUNC_2(VAR_0, 0, VAR_2, VAR_4);
  FUNC_2(VAR_0, VAR_4, VAR_1->desc, VAR_0->len - VAR_4);
  VAR_2 = (void *)VAR_1->desc + (VAR_0->len - VAR_4);
 }


 VAR_3 = FUNC_0(VAR_2, 8);
 if ((uintptr_t)VAR_3 & 8)
  *VAR_3 = 0;
}
