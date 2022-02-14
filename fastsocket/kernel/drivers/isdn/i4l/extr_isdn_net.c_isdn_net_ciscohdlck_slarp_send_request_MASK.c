
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int isdn_net_local ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 unsigned char* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_5(isdn_net_local *VAR_4)
{
 struct sk_buff *VAR_5;
 unsigned char *VAR_6;

 VAR_5 = FUNC_2(VAR_4, 4 + 14);
 if (!VAR_5)
  return;

 VAR_6 = FUNC_4(VAR_5, 4 + 14);


 *(u8 *)(VAR_6 + 0) = VAR_0;
 *(u8 *)(VAR_6 + 1) = VAR_1;
 *(__be16 *)(VAR_6 + 2) = FUNC_0(VAR_3);


 *(__be32 *)(VAR_6 + 4) = FUNC_1(VAR_2);
 *(__be32 *)(VAR_6 + 8) = FUNC_1(0);
 *(__be32 *)(VAR_6 + 12) = FUNC_1(0);
 *(__be16 *)(VAR_6 + 16) = FUNC_0(0);
 VAR_6 += 18;

 FUNC_3(VAR_4, VAR_5);
}
