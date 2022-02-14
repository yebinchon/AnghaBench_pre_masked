
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct b43legacy_dmaring {int dummy; } ;
struct b43legacy_dmadesc_meta {int * skb; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline
void FUNC_2(struct b43legacy_dmaring *VAR_0,
       struct b43legacy_dmadesc_meta *VAR_1,
       int VAR_2)
{
 if (VAR_1->skb) {
  if (VAR_2)
   FUNC_1(VAR_1->skb);
  else
   FUNC_0(VAR_1->skb);
  VAR_1->skb = ((void*)0);
 }
}
