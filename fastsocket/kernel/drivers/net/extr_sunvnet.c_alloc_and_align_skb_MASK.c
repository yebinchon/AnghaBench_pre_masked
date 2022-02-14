
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_device*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,unsigned long) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_3(struct net_device *VAR_1,
        unsigned int VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_0(VAR_1, VAR_2+VAR_0+8+8);
 unsigned long VAR_4, VAR_5;

 if (FUNC_2(!VAR_3))
  return ((void*)0);

 VAR_4 = (unsigned long) VAR_3->data;
 VAR_5 = ((VAR_4 + 7UL) & ~7UL) - VAR_4;
 if (VAR_5)
  FUNC_1(VAR_3, VAR_5);

 return VAR_3;
}
