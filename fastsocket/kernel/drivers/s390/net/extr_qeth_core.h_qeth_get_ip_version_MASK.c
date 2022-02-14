
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_proto; } ;





__attribute__((used)) static inline int FUNC_0(struct sk_buff *VAR_0)
{
 struct ethhdr *VAR_1 = (struct ethhdr *)VAR_0->data;
 switch (VAR_1->h_proto) {
 case 128:
  return 6;
 case 129:
  return 4;
 default:
  return 0;
 }
}
