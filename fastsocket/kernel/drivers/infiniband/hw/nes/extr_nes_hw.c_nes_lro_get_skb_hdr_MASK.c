
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct sk_buff {int dummy; } ;
struct iphdr {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,unsigned int) ;
 void* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, void **VAR_4,
          void **VAR_5, u64 *VAR_6, void *VAR_7)
{
 unsigned int VAR_8;
 struct iphdr *VAR_9;
 FUNC_2(VAR_3);
 VAR_9 = FUNC_0(VAR_3);
 if (VAR_9->protocol != VAR_0)
  return -1;
 VAR_8 = FUNC_1(VAR_3);
 FUNC_3(VAR_3, VAR_8);
 *VAR_5 = FUNC_4(VAR_3);

 *VAR_6 = VAR_1 | VAR_2;
 *VAR_4 = VAR_9;
 return 0;
}
