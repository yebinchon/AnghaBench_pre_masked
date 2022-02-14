
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ehci_qh_hw {int hw_info2; int hw_next; } ;
struct ehci_qh {unsigned int start; unsigned int period; struct ehci_qh_hw* hw; } ;
struct ehci_hcd {unsigned int random_frame; } ;
typedef int __hc32 ;


 int FUNC_0 (struct ehci_hcd*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ehci_hcd*,unsigned int,unsigned int,struct ehci_qh*,int *) ;
 int FUNC_2 (struct ehci_hcd*,int) ;
 int FUNC_3 (struct ehci_hcd*,char*,struct ehci_qh*) ;
 unsigned int FUNC_4 (int) ;
 int FUNC_5 (struct ehci_hcd*,int *) ;
 int FUNC_6 (struct ehci_hcd*,struct ehci_qh*) ;
 int FUNC_7 (struct ehci_hcd*,struct ehci_qh*) ;

__attribute__((used)) static int FUNC_8(struct ehci_hcd *VAR_3, struct ehci_qh *VAR_4)
{
 int VAR_5;
 unsigned VAR_6;
 __hc32 VAR_7;
 unsigned VAR_8;
 struct ehci_qh_hw *VAR_9 = VAR_4->hw;

 FUNC_7(VAR_3, VAR_4);
 VAR_9->hw_next = FUNC_0(VAR_3);
 VAR_8 = VAR_4->start;


 if (VAR_8 < VAR_4->period) {
  VAR_6 = FUNC_4(FUNC_5(VAR_3, &VAR_9->hw_info2) & VAR_2);
  VAR_5 = FUNC_1 (VAR_3, VAR_8, --VAR_6,
    VAR_4, &VAR_7);
 } else {
  VAR_6 = 0;
  VAR_7 = 0;
  VAR_5 = -VAR_0;
 }




 if (VAR_5) {

  if (VAR_4->period) {
   int VAR_10;

   for (VAR_10 = VAR_4->period; VAR_5 && VAR_10 > 0; --VAR_10) {
    VAR_8 = ++VAR_3->random_frame % VAR_4->period;
    for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
     VAR_5 = FUNC_1 (VAR_3,
       VAR_8, VAR_6, VAR_4,
       &VAR_7);
     if (VAR_5 == 0)
      break;
    }
   }


  } else {
   VAR_8 = 0;
   VAR_5 = FUNC_1 (VAR_3, 0, 0, VAR_4, &VAR_7);
  }
  if (VAR_5)
   goto done;
  VAR_4->start = VAR_8;


  VAR_9->hw_info2 &= FUNC_2(VAR_3, ~(VAR_1 | VAR_2));
  VAR_9->hw_info2 |= VAR_4->period
   ? FUNC_2(VAR_3, 1 << VAR_6)
   : FUNC_2(VAR_3, VAR_2);
  VAR_9->hw_info2 |= VAR_7;
 } else
  FUNC_3 (VAR_3, "reused qh %p schedule\n", VAR_4);


 VAR_5 = FUNC_6 (VAR_3, VAR_4);
done:
 return VAR_5;
}
