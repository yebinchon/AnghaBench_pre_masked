
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct typhoon {struct rxbuff_ent* rxbuffers; } ;
struct rxbuff_ent {scalar_t__ skb; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct typhoon*,size_t) ;

__attribute__((used)) static void
FUNC_1(struct typhoon *VAR_1)
{
 u32 VAR_2;

 for(VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct rxbuff_ent *VAR_3 = &VAR_1->rxbuffers[VAR_2];
  if(VAR_3->skb)
   continue;
  if(FUNC_0(VAR_1, VAR_2) < 0)
   break;
 }
}
