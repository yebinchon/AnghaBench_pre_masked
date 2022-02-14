
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct h4_struct {int rx_count; int * rx_skb; int rx_state; } ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline int FUNC_5(struct h4_struct *VAR_2, int VAR_3)
{
 register int VAR_4 = FUNC_4(VAR_2->rx_skb);

 FUNC_0("len %d room %d", VAR_3, VAR_4);

 if (!VAR_3) {
  FUNC_2(VAR_2->rx_skb);
 } else if (VAR_3 > VAR_4) {
  FUNC_1("Data length is too large");
  FUNC_3(VAR_2->rx_skb);
 } else {
  VAR_2->rx_state = VAR_0;
  VAR_2->rx_count = VAR_3;
  return VAR_3;
 }

 VAR_2->rx_state = VAR_1;
 VAR_2->rx_skb = ((void*)0);
 VAR_2->rx_count = 0;

 return 0;
}
