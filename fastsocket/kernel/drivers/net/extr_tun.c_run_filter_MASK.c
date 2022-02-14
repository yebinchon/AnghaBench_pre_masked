
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tap_filter {int count; int mask; int * addr; } ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int h_dest; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct tap_filter *VAR_0, const struct sk_buff *VAR_1)
{


 struct ethhdr *VAR_2 = (struct ethhdr *) VAR_1->data;
 int VAR_3;


 for (VAR_3 = 0; VAR_3 < VAR_0->count; VAR_3++)
  if (!FUNC_1(VAR_2->h_dest, VAR_0->addr[VAR_3]))
   return 1;


 if (FUNC_2(VAR_2->h_dest))
  return FUNC_0(VAR_0->mask, VAR_2->h_dest);

 return 0;
}
