
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct iphdr {scalar_t__ protocol; int tot_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,unsigned int) ;
 void* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_7(struct sk_buff *VAR_5, void **VAR_6,
         void **VAR_7, u64 *VAR_8, void *VAR_9)
{
 u64 VAR_10 = (u64) VAR_9;
 unsigned int VAR_11;
 struct iphdr *VAR_12;


 if ((VAR_10 & VAR_4) != VAR_3)
  return -1;


 FUNC_3(VAR_5);
 VAR_12 = FUNC_0(VAR_5);
 if (VAR_12->protocol != VAR_0)
  return -1;

 VAR_11 = FUNC_1(VAR_5);
 FUNC_4(VAR_5, VAR_11);
 *VAR_7 = FUNC_5(VAR_5);


 if (FUNC_2(VAR_12->tot_len) < VAR_11 + FUNC_6(VAR_5))
  return -1;

 *VAR_8 = VAR_1 | VAR_2;
 *VAR_6 = VAR_12;

 return 0;
}
