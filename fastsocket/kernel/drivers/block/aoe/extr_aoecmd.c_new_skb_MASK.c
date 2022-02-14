
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ulong ;
struct sk_buff {int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,scalar_t__) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *
FUNC_6(ulong VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_1(VAR_3 + VAR_2, VAR_1);
 if (VAR_4) {
  FUNC_3(VAR_4, VAR_2);
  FUNC_4(VAR_4);
  FUNC_5(VAR_4);
  VAR_4->protocol = FUNC_0(VAR_0);
  FUNC_2(VAR_4);
 }
 return VAR_4;
}
